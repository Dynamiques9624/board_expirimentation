#include "subsystems/BallCounter.h"

BallCounter::BallCounter() {}

void BallCounter::Periodic() {
    bool currentState = IsSensorTriggered();

    // Détection du front montant : false → true = une balle passe
    if (!currentState && m_lastSensorState) {
        m_ballCount++;
    }

    m_lastSensorState = currentState;

    // Affichage sur le dashboard
    frc::SmartDashboard::PutNumber("Balles lancées", m_ballCount);
    frc::SmartDashboard::PutBoolean("Capteur actif", currentState);
}

int BallCounter::GetBallCount() const {
    return m_ballCount;
}

void BallCounter::Reset() {
    m_ballCount = 0;
}

bool BallCounter::IsSensorTriggered() {
    return !m_sensor.Get();
}