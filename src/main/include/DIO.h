// documentationon how to program dio input:
// https://docs.wpilib.org/en/stable/docs/software/hardware-apis/sensors/digital-inputs-software.html

#pragma once

#include <frc/DigitalInput.h>
#include "Config.h"
#include <frc/smartdashboard/SmartDashboard.h>

#include <iostream>
using namespace std;

class Dio
{
public:
    void printSICKSensorValueCout();
    void printSICKSensorValueSmartDashboard();

protected:
private:
    // Copie this line and change the variable name and the dio port to create a new dio input object
    // to get the value go in DIO.cpp
    frc::DigitalInput SICK_0{DIO_PORT_0_SICK};
    frc::DigitalInput SICK_1{DIO_PORT_1_SICK};
    frc::DigitalInput SICK_2{DIO_PORT_2_SICK};
    frc::DigitalInput SICK_3{3};
    frc::DigitalInput SICK_4{4};
    frc::DigitalInput SICK_5{5};
    frc::DigitalInput SICK_6{6};
    frc::DigitalInput SICK_7{7};
    frc::DigitalInput SICK_8{8};
    frc::DigitalInput SICK_9{9};
};