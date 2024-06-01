#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(
        CW_TOGG,    KC_Q,         KC_W,         KC_E,         KC_R,          KC_T,    KC_Y,          KC_U,         KC_I,         KC_O,         KC_P,             KC_NUHS,
        KC_TAB,     LALT_T(KC_A), LCTL_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F),  KC_G,    KC_H,          RSFT_T(KC_J), RGUI_T(KC_K), RCTL_T(KC_L), RALT_T(KC_SCLN),  KC_QUOT,
        KC_LSFT,    KC_Z,         KC_X,         KC_C,         KC_V,          KC_B,    KC_N,          KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,          KC_RSFT,
                                                KC_NO,        LT(1,KC_QUOT), KC_LSFT, LSFT(KC_BSPC), LT(2,KC_SPC), MO(3)
    ),
	[1] = LAYOUT_split_3x6_3(
        KC_GRV,   KC_EXLM,         KC_AT,           KC_HASH,         KC_DLR,          KC_PERC,   KC_PLUS,  KC_7,         KC_8,         KC_9,         KC_UNDS,         KC_BSPC,
        KC_TILD,  LALT_T(KC_CIRC), LCTL_T(KC_AMPR), LGUI_T(KC_ASTR), LSFT_T(KC_LPRN), KC_RPRN,   KC_EQL,   RSFT_T(KC_4), RGUI_T(KC_5), RCTL_T(KC_6), LALT_T(KC_MINS), KC_ENT,
        KC_TRNS,  KC_NO,           KC_LBRC,         KC_RBRC,         KC_LCBR,         KC_RCBR,   KC_0,     KC_1,         KC_2,         KC_3,         KC_DOT,          KC_BSPC,
                                                    TO(0),           KC_NO,           KC_NO,     KC_ESC,   KC_ENT,       KC_NO
    ),
	[2] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_VOLU, KC_NO,
        KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_VOLD, KC_NO,
        KC_NO, KC_NO, KC_WH_L, KC_BTN3, KC_WH_R, KC_NO,   KC_MRWD, KC_MPLY, KC_MSTP, KC_MFFD, KC_MUTE, KC_NO,
                               TO(0),   MO(3),   KC_SPC,  KC_ENT,  KC_TRNS, KC_RALT
    ),
	[3] = LAYOUT_split_3x6_3(
        QK_BOOT, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_M_K, RGB_M_T, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, RGB_M_X, RGB_M_G, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                   TO(0),   KC_NO,   KC_SPC,  KC_ENT,  KC_NO, KC_NO
    )

};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)





const uint16_t PROGMEM combo_qw[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_jk[] = {KC_J, KC_K, COMBO_END};
combo_t key_combos[] = {
    COMBO(combo_qw, CW_TOGG),
    COMBO(combo_jk, KC_ESC), // keycodes with modifiers are possible too!
};
