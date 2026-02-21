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
    // m_vortex.Set(rt_value);
}

//--------------------------------------------------------------------------------
//
void RevHardware::runNeoWithLeftStickY(){
    double left_stick_y = m_xbox->getLeftStickYValue();
    //m_neo.Set(left_stick_y);
}

//--------------------------------------------------------------------------------
/*
void RevHardware::elevator(){
    #define SPEED 0.15

    if(!m_elevator_limit_switch1.Get()){
        m_neo_550.Set(0);
        m_neo.Set(0);  }
        
    //else if(!m_elevator_limit_switch2.Get()){ 
        //m_neo_550.Set(0);
        //m_neo.Set(0);}
    
    else{
        if (m_xbox->getLeftBumperValue()){
            m_neo_550.Set(-SPEED);
            m_neo.Set(SPEED);    
        }
        else if (m_xbox->getRightBumperValue()){
            m_neo_550.Set(SPEED);
            m_neo.Set(-SPEED); 
        }else{
            m_neo_550.Set(0);
            m_neo.Set(0); 
        } 
    }
    
    if(m_xbox->getRightTriggerValue()>0.05){
        m_neo_pince.Set(-m_xbox->getRightTriggerValue());
    }else if(m_xbox->getLeftTriggerValue()>0.05){
        m_neo_pince.Set(m_xbox->getLeftTriggerValue());
    }else{
        m_neo_pince.Set(0);
    }

    if(m_xbox->getLeftStickXValue()>0.1 || m_xbox->getLeftStickXValue()<-0.1){
        m_coude.Set(m_xbox->getLeftStickXValue());
    }else{
        m_coude.Set(0);
    }

    if(m_xbox->getRightStickXValue()>0.1 || m_xbox->getRightStickXValue()<-0.1){
        m_rotation.Set(m_xbox->getRightStickXValue());
    }else{
        m_rotation.Set(0);
    }

    if(m_xbox->getRightStickYValue()>0.1 || m_xbox->getRightStickYValue()<-0.1){
        m_algue.Set(m_xbox->getRightStickYValue());
    }else{
        m_algue.Set(0);
    }
    
       
}
 */

void RevHardware::testBras(){
    double value_xbox = m_xbox->getLeftStickYValue();
    
    cout << "Robot initialise " << value_xbox << "\n";
    if(abs(value_xbox)<0.05){
        value_xbox = 0.0;
    }

    if(abs(value_xbox)>0.6){
        value_xbox = 0.6;
    }

    m_coude.Set(value_xbox);
    m_rotation.Set(-value_xbox);
}