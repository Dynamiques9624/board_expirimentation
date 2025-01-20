#include "DIO.h"

//--------------------------------------------------------------------------------
//
void Dio::printSICKSensorValue(){
    // can copie this line and change the name the variable to get the value of an other dio input object
    cout << "SICK sensor value " <<  SICK_sensor.Get() << "\n";
}