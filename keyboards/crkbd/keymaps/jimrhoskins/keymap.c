#include QMK_KEYBOARD_H

enum layers {
    ALPHAS,
    SYMNUM,
    NAV,
    META,
    FUNC,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[ALPHAS] = LAYOUT_split_3x5_3_ex2(
        KC_Q,         KC_W,         KC_E,         KC_R,               KC_T,    KC_Z,    KC_A,       KC_Y,          KC_U,           KC_I,         KC_O,         KC_P,
        LALT_T(KC_A), LCTL_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F),       KC_G,    KC_BTN3, KC_MUTE,    KC_H,          RSFT_T(KC_J),   RGUI_T(KC_K), RCTL_T(KC_L), RALT_T(KC_SCLN),
        KC_Z,         KC_X,         KC_C,         KC_V,               KC_B,                         KC_N,          KC_M,           KC_COMM,      KC_DOT,       KC_SLSH,
                                    KC_MEH,       LT(SYMNUM,KC_QUOT), KC_LSFT,                      LSFT(KC_BSPC), LT(NAV,KC_SPC), MO(META)
    ),
	[SYMNUM] = LAYOUT_split_3x5_3(
        KC_EXLM,         KC_AT,           KC_HASH,         KC_DLR,          KC_PERC,   KC_PLUS,  KC_7,         KC_8,         KC_9,         KC_UNDS,
        LALT_T(KC_CIRC), LCTL_T(KC_AMPR), LGUI_T(KC_ASTR), LSFT_T(KC_LPRN), KC_RPRN,   KC_EQL,   RSFT_T(KC_4), RGUI_T(KC_5), RCTL_T(KC_6), LALT_T(KC_MINS),
        KC_GRV,          KC_LBRC,         KC_RBRC,         KC_LCBR,         KC_RCBR,   KC_NUHS,  KC_1,         KC_2,         KC_3,         KC_DOT,
                                          TO(ALPHAS),      KC_NO,           KC_NO,     KC_DEL,   KC_ENT,       KC_0
    ),
	[NAV] = LAYOUT_split_3x5_3(
        KC_NO, KC_BTN1, KC_MS_U,    KC_BTN2,  KC_WH_U, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_VOLU,
        KC_NO, KC_MS_L, KC_MS_D,    KC_MS_R,  KC_WH_D, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_VOLD,
        KC_NO, KC_WH_L, KC_BTN3,    KC_WH_R,  KC_NO,   KC_MPRV, KC_MPLY, KC_MSTP, KC_MNXT, KC_MUTE,
                        TO(ALPHAS), MO(META), KC_SPC,  KC_ENT,  KC_TRNS, KC_RALT
    ),
	[META] = LAYOUT_split_3x5_3(
        RM_TOGG, KC_NO  , KC_NO  ,    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO,
        RM_NEXT, RM_HUEU, RM_SATU,    RM_VALU, RM_SPDU, KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO,
        RM_PREV, RM_HUED, RM_SATD,    RM_VALD, RM_SPDD, KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO,
                          TO(ALPHAS), KC_NO,   QK_BOOT,  KC_ENT, KC_NO  , KC_NO
    ),
	[FUNC] = LAYOUT_split_3x5_3(
        KC_F1, KC_F2,  KC_F3,  KC_F4,  KC_PSCR, KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO,
        KC_F5, KC_F6,  KC_F7,  KC_F8,  KC_SCRL, KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO,
        KC_F9, KC_F10, KC_F11, KC_F12, KC_PAUS, KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO,
                       KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO  , KC_NO
    )

};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT_split_3x5_3(
    'L','L','L','L','L',  'R','R','R','R','R',
    'L','L','*','L','L',  'R','R','R','R','R',
    'L','L','L','L','L',  'R','R','R','R','R',
            '*','*','*',  '*','*','*'
);

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [ALPHAS] = {
        ENCODER_CCW_CW(KC_A, KC_B), // Left Top
        ENCODER_CCW_CW(KC_WH_U, KC_WH_D), // Left Bottom
        ENCODER_CCW_CW(KC_E, KC_F), // Right Top
        ENCODER_CCW_CW(KC_VOLD, KC_VOLU), // Right Bottom
    },
    [SYMNUM] = {
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
    },
    [NAV] = {
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
    },
    [META] = {
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
    },
    [FUNC] = {
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
    },

};
#endif

const uint16_t PROGMEM combo_fj[] = {LSFT_T(KC_F), RSFT_T(KC_J), COMBO_END};
const uint16_t PROGMEM combo_jk[] = {RSFT_T(KC_J), RGUI_T(KC_K), COMBO_END};
const uint16_t PROGMEM combo_commadot[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_12[] = {KC_1, KC_2, COMBO_END};
const uint16_t PROGMEM combo_cv[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo_yu[] = {KC_Y, KC_U, COMBO_END};
combo_t key_combos[] = {
    COMBO(combo_fj, CW_TOGG),
    COMBO(combo_cv, KC_TAB),
    COMBO(combo_12, KC_0),
    COMBO(combo_commadot, KC_ENT),
    COMBO(combo_jk, KC_ESC),
    COMBO(combo_yu, MO(FUNC)),
};
