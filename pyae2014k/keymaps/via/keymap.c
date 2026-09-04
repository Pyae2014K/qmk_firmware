// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_3x4(
        KC_MUTE,          LCTL(LSFT(KC_M)), LCTL(LSFT(KC_D)),
        LCTL(KC_X),       LCTL(KC_C),       LCTL(KC_V),
        LGUI(LSFT(KC_S)), LGUI(KC_V),       LCTL(KC_Z),
        LCTL(KC_T),       LCTL(KC_W),       LCTL(LSFT(KC_ESC))
    )
};
#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_0;
}

bool oled_task_user(void) {
    // Show layer name
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("Macro\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("Numpad\n"), false);
            break;
        default:
            oled_write_P(PSTR("Unknown\n"), false);
            break;
    }
    return false;
}
#endif
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }
    return false;
}