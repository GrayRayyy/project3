#include "robot.cpp";
public void MotorCore (int*pixels){
setSpeed();
double vLeft = 50.0;           // Left robot motor
double vRight = 30.0;          // Right robot motor
setMotors(vLeft, vRight);      // Set position of the motors
sttd::cout<<" vLeft="<<vLeft<<" vRight="<<vRight="<<vRight<<std::endl;
      }
