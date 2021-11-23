import baseclasses.sensorbase as sensbase
import rclpy
import numpy as np
from math import sin, cos, sqrt, asin, inf
from math import radians as torad
from sensor_msgs.msg import NavSatFix

def hav(theta):
    return (1-cos(theta))/2

class GPSNode(sensbase.SensorNode):
    def __init__(self):
        # NOTE: having an interval of 0 sec may not work! Fix a cleaner solution!

        # Values which convert meters-from-C2 to degrees latitude-longitude
        origin = (59.6175744, 16.5609494)
        earth_radius = 6362257 # Approximate! (but good enough at C2's latitude)
        m_per_deg_lat = 2*earth_radius*asin(sqrt(
            hav(torad(1.0)) + cos(torad(origin[0]))*cos(torad(origin[0]+1))*hav(0.0)
        ))
        m_per_deg_lon = 2*earth_radius*asin(sqrt(
            hav(0.0) + cos(torad(origin[0]))**2 *hav(torad(1.0))
        ))
        self.origin = origin

        init_obs_mat = np.array([
            #              x                y  z  r  p  h dx dy dz dr dp dh
            [1/m_per_deg_lat,               0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],  #x (latitude)
            [0,               1/m_per_deg_lon, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]]) #y (longitude)
        # NOTE: the noise value may need to be changed
        super().__init__('gps', 'naiad', 0,
                         init_obs_mat, 2, np.identity(2)*0.000005**2)
        # If the is_simulated parameter exists and is set, listen to the simulated sensor.
        # Otherwise, default is False and it will act like normal.
        self.declare_parameter('simulated', False)
        if(self.get_parameter('simulated').value):
            self.simul_sensor = self.create_subscription(
                                NavSatFix, '/naiad/simulation/gps',
                                self.SimulatedMeasurement, 10)
            self.timer.destroy() # Stop the original timed sensor from running
        else:
            import serial #package is named "pyserial"!
            import io
            import pynmea2
            self.ser = serial.Serial(port="/dev/ttyACM0",baudrate=9600,timeout=0.5)
            self.sio = io.TextIOWrapper(io.BufferedRWPair(self.ser, self.ser))
    
    def TakeMeasurement(self):
        try:
            line = self.sio.readline()
            if line != '': # The GPS gives empy lines sometimes. Ignore 'em
                msg = pynmea2.parse(line)
                name = msg.__class__.__name__
                if name == "GGA":
                    # Conversion from deg°min' to decimal.
                    deci_lat = int(msg.lat[:2]) + float(msg.lat[2:])/60
                    deci_lon = int(msg.lon[:3]) + float(msg.lon[3:])/60
                    if(msg.lat_dir == 'S'): deci_lat *= -1
                    if(msg.lon_dir == 'W'): deci_lon *= -1
                    ''' NOTE: This returns the distance in lat+long from the origin '''
                    self.measure[0,0] = deci_lat-self.origin[0]
                    self.measure[1,0] = deci_lon-self.origin[1]
        except serial.SerialException as e:
            print('Device error: {}'.format(e))
        except pynmea2.ParseError as e:
            print('Parse error: {}'.format(e))

    def SimulatedMeasurement(self, msg):
        if msg.status.status != -1:
            self.measure[0,0] = msg.latitude  - self.origin[0]
            self.measure[1,0] = msg.longitude - self.origin[1]
            self.m_noise = np.identity(2)*0.000005**2
        else:
            self.m_noise = np.array([[inf, 0], [0, inf]]) # Set the noise to inifnite if the gps in unavailable

def main(args=None):
    rclpy.init(args=args)
    node = GPSNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()