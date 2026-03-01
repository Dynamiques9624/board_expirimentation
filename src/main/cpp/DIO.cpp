#include "DIO.h"

//--------------------------------------------------------------------------------
//
void Dio::printSICKSensorValueCout(){
    // can copie this line and change the name the variable to get the value of an other dio input object
    cout << "SICK0 " <<  SICK_0.Get()
    << "SICK1 " <<  SICK_1.Get() 
    << " SICK2 " << SICK_2.Get()
    << "\n";
}

//--------------------------------------------------------------------------------
//
void Dio::printSICKSensorValueSmartDashboard(){
    // can copie this line and change the name the variable to get the value of an other dio input object
    frc::SmartDashboard::PutBoolean("SICK0", SICK_0.Get());
    frc::SmartDashboard::PutBoolean("SICK1", SICK_1.Get());
    frc::SmartDashboard::PutBoolean("SICK2", SICK_2.Get());
}