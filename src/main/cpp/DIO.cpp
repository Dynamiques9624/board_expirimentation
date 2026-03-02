#include "DIO.h"

//--------------------------------------------------------------------------------
//
void Dio::printSICKSensorValueCout(){
    // can copie this line and change the name the variable to get the value of an other dio input object
    cout << "SICK0 " <<  SICK_0.Get()
    << " SICK1 " <<  SICK_1.Get() 
    << " SICK2 " << SICK_2.Get()
    << " SICK3 " <<  SICK_3.Get() 
    << " SICK4 " << SICK_4.Get()
    << " SICK5 " << SICK_5.Get()
    << " SICK6 " <<  SICK_6.Get() 
    << " SICK7 " << SICK_7.Get()
    << " SICK8 " << SICK_8.Get()
    << " SICK9 " << SICK_9.Get()
    << "\n";
}

//--------------------------------------------------------------------------------
//
void Dio::printSICKSensorValueSmartDashboard(){
    // can copie this line and change the name the variable to get the value of an other dio input object
    frc::SmartDashboard::PutBoolean("SICK0", SICK_0.Get());
    frc::SmartDashboard::PutBoolean("SICK1", SICK_1.Get());
    frc::SmartDashboard::PutBoolean("SICK2", SICK_2.Get());
    frc::SmartDashboard::PutBoolean("SICK3", SICK_3.Get());
    frc::SmartDashboard::PutBoolean("SICK4", SICK_4.Get());
    frc::SmartDashboard::PutBoolean("SICK5", SICK_5.Get());
    frc::SmartDashboard::PutBoolean("SICK6", SICK_6.Get());
    frc::SmartDashboard::PutBoolean("SICK7", SICK_7.Get());
    frc::SmartDashboard::PutBoolean("SICK8", SICK_8.Get());
    frc::SmartDashboard::PutBoolean("SICK9", SICK_9.Get());
}