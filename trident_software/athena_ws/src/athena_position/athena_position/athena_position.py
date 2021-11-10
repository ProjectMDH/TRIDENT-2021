import rclpy
import numpy as np
from baseclasses import positionbase
from trident_msgs.msg import State
from math import sin, cos
from squaternion import Quaternion

class AthenaPosNode(positionbase.PosNode):
    def __init__(self):
        
        init_state = np.zeros((6,1))  # Starts at 0,0
        init_covar = np.zeros((6,6)) # Starts with no uncertainty
        init_noise = (np.array([0.5, 0.5, 0.4, 0.2, 0.2, 0.1])*np.identity(6))**2 # These are just guesses!
            
        super().__init__("athena_position_node", "state", 0.5,
                         init_state, init_covar, init_noise, ["/athena/sensor/imu", "/athena/sensor/gps"])
    
    def state_trans(self, prev, control_vec, dt):
        h = prev[2,0]
        trans_mat = np.array([
            #x  y  h         dx         dy  dh
            [1, 0, 0, dt*sin(h), dt*cos(h),  0], #x
            [0, 1, 0, dt*cos(h), dt*sin(h),  0], #y
            [0, 0, 1,         0,         0, dt], #h
            [0, 0, 0,         1,         0,  0], #dx
            [0, 0, 0,         0,         1,  0], #dy
            [0, 0, 0,         0,         0,  1]])#dh
        # TODO: add the contol vector, using the motor config.
        transition = np.matmul(trans_mat,prev)
        return transition
    
    def state_publish(self):
        msg = State()
        msg.pose.position.x = self.state[0,0]
        msg.pose.position.y = self.state[1,0]
        msg.pose.position.z = 0.0
        q = Quaternion.from_euler(0, 0, self.state[2,0])
        msg.pose.orientation.x = q.x
        msg.pose.orientation.y = q.y
        msg.pose.orientation.z = q.z
        msg.pose.orientation.w = q.w
        msg.twist.linear.x  = self.state[3,0]
        msg.twist.linear.y  = self.state[4,0]
        msg.twist.linear.z  = 0.0
        msg.twist.angular.x = 0.0
        msg.twist.angular.y = 0.0
        msg.twist.angular.z = self.state[5,0]
        self.publisher_.publish(msg)
    
def main(args=None):
    rclpy.init(args=args)
    athena_pos_node = AthenaPosNode()
    athena_pos_node.spin()
    athena_pos_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()