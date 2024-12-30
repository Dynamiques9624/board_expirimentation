#include <iostream>
using namespace std;

#include "Robot.h"

//--------------------------------------------------------------------------------
//
void Robot::RobotInit(){
  m_rev_hardware.init();
  m_led.init();
  robot_init = true;
  cout << "Robot initialise " << robot_init << "\n";
}

//--------------------------------------------------------------------------------
//
void Robot::TeleopInit(){}

//--------------------------------------------------------------------------------
//
void Robot::TeleopPeriodic(){
  m_rev_hardware.runVortexWithRT();
  cout << "vortex temp " << m_rev_hardware.getVortexTemperature() << "\n";
}

//--------------------------------------------------------------------------------
//
void Robot::DisabledInit(){}

//--------------------------------------------------------------------------------
//
void Robot::DisabledPeriodic(){}

//--------------------------------------------------------------------------------
//
#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif


