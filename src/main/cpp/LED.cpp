#include "LED.h"

//--------------------------------------------------------------------------------
// Initialisation
void Led::init() {
    m_led.SetLength(LED_LENGHT);
    m_led.SetData(m_ledBuffer);
    m_led.Start();
}

//--------------------------------------------------------------------------------
//
void Led::setStripRGB() {
    for (int i = 0; i < LED_LENGHT; i++) {
        //red
        m_ledBuffer[i].SetRGB(255, 0, 0);
    }

    m_led.SetData(m_ledBuffer);
}