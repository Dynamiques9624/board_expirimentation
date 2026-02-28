#pragma once

#include "Config.h"
#include "frc/xboxcontroller.h"

class Xbox {
   public:
    double getLeftTriggerValue() { return m_controller.GetLeftTriggerAxis(); }
    double getRightTriggerValue() { return m_controller.GetRightTriggerAxis(); }
    double getLeftStickXValue() { return m_controller.GetLeftX(); }
    double getLeftStickYValue() { return m_controller.GetLeftY(); }
    double getRightStickXValue() { return m_controller.GetRightX(); }
    double getRightStickYValue() { return m_controller.GetRightY(); }
    bool getLeftBumperValue() { return m_controller.GetLeftBumperButton(); }
    bool getRightBumperValue() { return m_controller.GetRightBumperButton(); }
    bool isLeftBumperPressed() { return m_controller.GetLeftBumperButtonPressed(); }
    bool isRightBumperPressed() { return m_controller.GetRightBumperButtonPressed(); }
    bool isPOV0Pressed();
    bool isPOV90Pressed();
    bool isPOV180Pressed();
    bool isPOV270Pressed();
    bool isXButtonPressed() { return m_controller.GetXButtonPressed(); }
    bool isYButtonPressed() { return m_controller.GetYButtonPressed(); }
    bool isAButtonPressed() { return m_controller.GetAButtonPressed(); }
    bool isBButtonPressed() { return m_controller.GetBButtonPressed(); }

   protected:
   private:
    frc::XboxController m_controller{CONTROLLER_PORT};

    bool m_left_bumper_press;
    bool m_right_bumper_press;
    bool m_pov_0_press;
    bool m_pov_90_press;
    bool m_pov_180_press;
    bool m_pov_270_press;
};