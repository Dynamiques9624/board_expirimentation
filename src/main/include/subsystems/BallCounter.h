#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/DigitalInput.h>
#include <frc/smartdashboard/SmartDashboard.h>

class BallCounter : public frc2::SubsystemBase {
public:
    BallCounter();

    // Appelé ~50x/sec par WPILib
    void Periodic() override;

    // Retourne le nombre de balles lancées
    int GetBallCount() const;

    // Remet le compteur à zéro
    void Reset();

private:
    // ── CAPTEUR ──────────────────────────────────────────────────────────────
    // Change le numéro de port DIO selon ton câblage (0-9 sur le roboRIO)
    frc::DigitalInput m_sensor{0}; // ← change le port ici

    // ── ÉTAT INTERNE ─────────────────────────────────────────────────────────
    int m_ballCount = 0;
    bool m_lastSensorState = false;

    // Retourne true quand une balle est détectée
    bool IsSensorTriggered();
};