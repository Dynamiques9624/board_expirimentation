// documentationon how to program dio input:
// https://docs.wpilib.org/en/stable/docs/software/hardware-apis/sensors/digital-inputs-software.html

#pragma once

#include <frc/DigitalInput.h>
#include "Config.h"

#include <iostream>
using namespace std;

class Dio
{
public:
    void printSICKSensorValue();

protected:
private:
    // Copie this line and change the variable name and the dio port to create a new dio input object
    // to get the value go in DIO.cpp
    frc::DigitalInput SICK_0{DIO_PORT_0_SICK};
    frc::DigitalInput SICK_1{DIO_PORT_1_SICK};
    frc::DigitalInput SICK_2{DIO_PORT_2_SICK};
    frc::DigitalInput SICK_3{DIO_PORT_3_SICK};
    frc::DigitalInput SICK_4{DIO_PORT_4_SICK};
    frc::DigitalInput SICK_5{DIO_PORT_5_SICK};
    frc::DigitalInput SICK_6{DIO_PORT_6_SICK};
};