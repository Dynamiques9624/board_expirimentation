#include "Xbox.h"

//--------------------------------------------------------------------------------
//
bool Xbox::isPOV0Pressed() {
    bool pov_0_press_final = false;
    double pov = m_controller.GetPOV();

    if (pov == -1) {
        m_pov_0_press = false;
    } else if (pov == 0 && m_pov_0_press == false) {
        pov_0_press_final = true;
        m_pov_0_press = true;
    }
    return pov_0_press_final;
}

//--------------------------------------------------------------------------------
//
bool Xbox::isPOV90Pressed() {
    bool pov_90_press_final = false;
    double pov = m_controller.GetPOV();

    if (pov == -1) {
        m_pov_90_press = false;
    } else if (pov == 90 && m_pov_90_press == false) {
        pov_90_press_final = true;
        m_pov_90_press = true;
    }
    return pov_90_press_final;
}

//--------------------------------------------------------------------------------
//
bool Xbox::isPOV180Pressed() {
    bool pov_180_press_final = false;
    double pov = m_controller.GetPOV();

    if (pov == -1) {
        m_pov_180_press = false;
    } else if (pov == 180 && m_pov_180_press == false) {
        pov_180_press_final = true;
        m_pov_180_press = true;
    }
    return pov_180_press_final;
}

//--------------------------------------------------------------------------------
//
bool Xbox::isPOV270Pressed() {
    bool pov_270_press_final = false;
    double pov = m_controller.GetPOV();

    if (pov == -1) {
        m_pov_270_press = false;
    } else if (pov == 270 && m_pov_270_press == false) {
        pov_270_press_final = true;
        m_pov_270_press = true;
    }
    return pov_270_press_final;
}
//--------------------------------------------------------------------------------
//