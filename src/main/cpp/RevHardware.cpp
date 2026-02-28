#include "RevHardware.h"


#include <iostream>
using namespace std;
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
