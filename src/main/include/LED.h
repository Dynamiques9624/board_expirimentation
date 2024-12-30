#pragma once

#include <frc/AddressableLED.h>

#include "Config.h"
#include "Xbox.h"

class Led {
   public:
    Led(Xbox* xbox) { m_xbox = xbox; }
    void init();
    void setStripRGB();

   protected:
   private:

    Xbox* m_xbox;
    frc::AddressableLED m_led{LED_PWM_PORT};

    std::array<frc::AddressableLED::LEDData, LED_LENGHT> m_ledBuffer; 
};