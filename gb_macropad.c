#include "quantum.h"



bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_user(index, clockwise)) { return false; }

    if (index == 0) {
        switch (get_highest_layer(layer_state)) {
            case 0:
                if (clockwise) {
                    tap_code(KC_MS_WH_RIGHT);
                } else {
                    tap_code(KC_MS_WH_LEFT);
                }
                break;

            // default:
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
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }
                break;

            // default:
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
