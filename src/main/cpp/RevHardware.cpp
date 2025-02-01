#include "RevHardware.h"

//--------------------------------------------------------------------------------
//
void RevHardware::init(){}

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

//--------------------------------------------------------------------------------
//
void RevHardware::elevator(){
    
    if(m_elevator_limit_switch1.Get() || m_elevator_limit_switch1.Get()){
        m_neo_550.Set(0);
        m_neo.Set(0); 
    }else{
        if (m_xbox->getLeftBumperValue()){
            m_neo_550.Set(-0.20);
            m_neo.Set(0.20);    
        }
        else if (m_xbox->getRightBumperValue()){
            m_neo_550.Set(0.20);
            m_neo.Set(-0.20); 
        }else{
            m_neo_550.Set(0);
            m_neo.Set(0); 
        } 
    }
       
}
