#include <iostream>
using namespace std;

#include "Robot.h"

//--------------------------------------------------------------------------------
//
void Robot::RobotInit()
{
  m_rev_hardware.init();
  m_led.init();
  robot_init = true;
  cout << "Robot initialise " << robot_init << "\n";
}

//--------------------------------------------------------------------------------
//
void Robot::TeleopInit() {
  
}

//--------------------------------------------------------------------------------
//
void Robot::TeleopPeriodic()
{
  m_dio.printSICKSensorValueCout();
  m_dio.printSICKSensorValueSmartDashboard();
}

//--------------------------------------------------------------------------------
//
void Robot::DisabledInit() {}

//--------------------------------------------------------------------------------
//
void Robot::DisabledPeriodic() {}

//--------------------------------------------------------------------------------
//
#ifndef RUNNING_FRC_TESTS
int main()
{
  return frc::StartRobot<Robot>();
}
#endif
