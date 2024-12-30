#pragma once

#include <frc/TimedRobot.h>

#include "Xbox.h"
#include "LED.h"
#include "RevHardware.h"
#include "Servo.h"

#include <iostream>
using namespace std;

class Robot : public frc::TimedRobot {
   public:
    void RobotInit();
    void DisabledInit();
    void DisabledPeriodic();
    void TeleopInit();
    void TeleopPeriodic();

   protected:
   private:
   bool robot_init = false;
    Xbox m_xbox;
    Servo m_servo{&m_xbox};
    Led m_led{&m_xbox};
    RevHardware m_rev_hardware{&m_xbox};
};