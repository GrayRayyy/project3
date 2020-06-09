#include "robot.cpp";
public void MotorCore(int*pixels){
setSpeed();      
double vLeft = 50.0;        // Set speed of left robot motor
double vRight = 30.0;       // Set speed of right robot motor
setMotors(vLeft, vRight);   // Set position of the motors
sttd::cout<<" vLeft="<<vLeft<<" vRight="<<vRight<<std::endl;
}
