//documentation for the duty cycle encoder on the DIO
// https://docs.wpilib.org/en/stable/docs/software/hardware-apis/sensors/encoders-software.html
#pragma once

#include "Config.h"
#include "Xbox.h"
#include <rev/CANSparkMax.h>
#include <rev/CANSparkFlex.h>
#include <frc/DutyCycleEncoder.h>

class RevHardware {
   public:
    RevHardware(Xbox* xbox){m_xbox = xbox;}
    void init();
    double getEncoderDistance(){return m_encoder.GetDistance();}
    double getVortexTemperature(){return m_vortex.GetMotorTemperature();}
    void runVortexWithRT();
    void runNeoWithLeftStickY();
   protected:
   private:

    frc::DutyCycleEncoder m_encoder{ENCODER_DIO_PORT};

    Xbox* m_xbox;
    rev::CANSparkMax m_neo_550{NEO_550_ID, rev::CANSparkMax::MotorType::kBrushless};
    rev::CANSparkMax m_neo{NEO_ID, rev::CANSparkMax::MotorType::kBrushless};
    rev::CANSparkFlex m_vortex{NEO_VORTEX_ID, rev::CANSparkFlex::MotorType::kBrushless};

    
};