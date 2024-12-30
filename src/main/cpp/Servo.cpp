
#include "Servo.h"

//--------------------------------------------------------------------------------
// Sets the servo position using a scaled 0 to 1.0 value. 0 corresponds to one extreme
// of the servo and 1.0 corresponds to the other
void Servo::setScallerValue(double value){
    m_servo.Set(value);
}

//--------------------------------------------------------------------------------
// Set the servo position by specifying the angle, in degrees from 0 to 180
void Servo::setAngle(double angle){
    m_servo.SetAngle(angle);
}

