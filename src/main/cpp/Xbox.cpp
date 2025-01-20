#include "Xbox.h"

//--------------------------------------------------------------------------------
// return one true when the bumper is press
bool Xbox::isLeftBumperPressed() {
    bool left_bumper_press_final = false;
    bool left_bumper = m_controller.GetLeftBumperButton();

    if (!left_bumper) {
        m_left_bumper_press = false;
    } else if (left_bumper && m_left_bumper_press == false) {
        left_bumper_press_final = true;
        m_left_bumper_press = true;
    }
    
    return left_bumper_press_final;
}

//--------------------------------------------------------------------------------
// return one true when the bumper is press
bool Xbox::isRightBumperPressed() {
    bool right_bumper_press_final = false;
    bool right_bumper = m_controller.GetRightBumperButton();

    if (!right_bumper) {
        m_right_bumper_press = false;
    } else if (right_bumper && m_right_bumper_press == false) {
        right_bumper_press_final = true;
        m_right_bumper_press = true;
    }
    return right_bumper_press_final;
}

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