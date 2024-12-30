#pragma once

#include <frc/Servo.h>

#include "Config.h"
#include "Xbox.h"

class Servo {
   public:
    Servo(Xbox* xbox) { m_xbox = xbox; }
    void setScallerValue(double value);
    void setAngle(double angle);

   protected:
   private:
    Xbox* m_xbox;
    frc::Servo m_servo{SERVO_PWM_PORT};
};