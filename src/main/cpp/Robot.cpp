#include <iostream>
using namespace std;

#include "Robot.h"
#include <frc/smartdashboard/SmartDashboard.h>

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
 // m_rev_hardware.elevator();
 m_rev_hardware.testBras();
  
  // m_rev_hardware.runVortexWithRT();
  // cout << "encoder distance " << m_rev_hardware.getEncoderDistance()<< "\n";
  //frc::SmartDashboard::PutNumber("encoder distance", m_rev_hardware.getEncoderDistance());
  // m_dio.printSICKSensorValue();
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
