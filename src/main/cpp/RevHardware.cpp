#include "RevHardware.h"

//--------------------------------------------------------------------------------
//
void RevHardware::init(){
    // Configures the encoder to return a distance of 360 for every rotation
    m_encoder.SetDistancePerRotation(360);

    m_neo_550.RestoreFactoryDefaults();
    m_neo.RestoreFactoryDefaults();
    m_vortex.RestoreFactoryDefaults();
}

//--------------------------------------------------------------------------------
//
void RevHardware::runVortexWithRT(){
    double rt_value = m_xbox->getRightTriggerValue();
    m_vortex.Set(rt_value);
}

//--------------------------------------------------------------------------------
//
void RevHardware::runNeoWithLeftStickY(){
    double left_stick_y = m_xbox->getLeftStickYValue();
    m_neo.Set(left_stick_y);
}
