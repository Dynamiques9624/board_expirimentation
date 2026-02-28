//documentation for the duty cycle encoder on the DIO
// https://docs.wpilib.org/en/stable/docs/software/hardware-apis/sensors/encoders-software.html
#pragma once

#include "Config.h"
#include "Xbox.h"
#include <rev/SparkMax.h>
#include <rev/SparkFlex.h>
#include <frc/DutyCycleEncoder.h>
#include <frc/DigitalInput.h>

class RevHardware {
   public:
   
    RevHardware(Xbox* xbox){m_xbox = xbox;}
    void init();
    double getEncoderDistance(){return m_encoder.Get();}
    double getVortexTemperature(){return m_vortex.GetMotorTemperature();}
    void runVortexWithRT();
    void runNeoWithLeftStickY();

   protected:
   private:

    frc::DutyCycleEncoder m_encoder{ENCODER_DIO_PORT,ENCODER_VALUE_FULL_ROTATION,ENCODER_REPORT_ZERO};

    Xbox* m_xbox;
    rev::spark::SparkMax m_neo_550{NEO_550_ID, rev::spark::SparkMax::MotorType::kBrushless};
    rev::spark::SparkMax m_neo{NEO_ID, rev::spark::SparkMax::MotorType::kBrushless};
    rev::spark::SparkFlex m_vortex{NEO_VORTEX_ID, rev::spark::SparkFlex::MotorType::kBrushless}; 
    

      
};