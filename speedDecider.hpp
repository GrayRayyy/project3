#include "robot.cpp";
public void MotorCore(int*pixels){
setSpeed();      
double vLeft = 50.0;        // left robot motor
double vRight = 30.0;       // right robot motor
setMotors(vLeft, vRight);   // Set position of the motors
sttd::cout<<" vLeft="<<vLeft<<" vRight="<<vRight<<std::endl;
}
