// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4,
        KC_5, KC_6, KC_7, KC_8,
        KC_9, KC_0, KC_A, KC_B
    ),

    [1] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4,
        KC_5, KC_6, KC_7, KC_8,
        KC_9, KC_0, KC_A, KC_B
    )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    /*  Custom encoder control - handles CW/CCW turning of encoder
     *  Default behavior:
     *    left encoder:
     *      main layer:
     *         CW: move mouse right
     *        CCW: move mouse left
     *      other layers:
     *         CW: = (equals/plus - increase slider in Adobe products)
     *        CCW: - (minus/underscore - decrease slider in adobe products)
     *    right encoder:
     *      main layer:
     *         CW: colume up
     *        CCW: volume down
     *      other layers:
     *         CW: right arrow
     *        CCW: left arrow
     */
    if (index == 0) {
        switch (get_highest_layer(layer_state)) {
            case 0:
                // main layer - move mouse right (CW) and left (CCW)
                if (clockwise) {
                    tap_code(KC_MS_WH_RIGHT);
                } else {
                    tap_code(KC_MS_WH_LEFT);
                }

            // default:
            //     // other layers - =/+ (quals/plus) (CW) and -/_ (minus/underscore) (CCW)
            //     if (clockwise) {
            //         tap_code(KC_EQL);
            //     } else {
            //         tap_code(KC_MINS);
            //     }
                break;
        }
    } else if (index == 1) {
        switch (get_highest_layer(layer_state)) {
            case 0:
                // main layer - volume up (CW) and down (CCW)
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }
                break;

            // default:
            //     // other layers - right (CW) and left (CCW)
            //     if (clockwise) {
            //         tap_code(KC_RIGHT);
            //     } else {
            //         tap_code(KC_LEFT);
            //     }
                break;
        }
    }
    return true;
}
