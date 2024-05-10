#include QMK_KEYBOARD_H

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LALT_T(KC_CIRC):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_CIRC); // Send KC_DQUO on tap
                return false;        // Return false to ignore further processing of key
            }
            break;
        case LCTL_T(KC_AMPR):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_AMPR); // Send KC_DQUO on tap
                return false;        // Return false to ignore further processing of key
            }
            break;
        case LGUI_T(KC_ASTR):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_ASTR); // Send KC_DQUO on tap
                return false;        // Return false to ignore further processing of key
            }
            break;
        case LSFT_T(KC_LPRN):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_LPRN); // Send KC_DQUO on tap
                return false;        // Return false to ignore further processing of key
            }
            break;
    }
    return true;
}