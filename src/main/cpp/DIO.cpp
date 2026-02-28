#include "DIO.h"

//--------------------------------------------------------------------------------
//
void Dio::printSICKSensorValue(){
    // can copie this line and change the name the variable to get the value of an other dio input object
    cout << "SICK0 " <<  SICK_0.Get()
    << "SICK1 " <<  SICK_1.Get() 
    << " SICK2 " << SICK_2.Get()
    << " SICK3 " << SICK_3.Get()
    << " SICK4 " << SICK_4.Get()
    << " SICK5 " << SICK_5.Get()
    << " SICK6 " << SICK_6.Get() 
    << "\n";
}