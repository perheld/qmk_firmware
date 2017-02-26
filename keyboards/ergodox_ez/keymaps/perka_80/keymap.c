#include QMK_KEYBOARD_H
#include "version.h"

#define BASE 0 // default layer

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = LAYOUT_ergodox_80(  // layer 0 : default
        // left hand
        KC_ESC,   KC_1,         KC_2,    KC_3,   KC_4,   KC_5,   KC_BSLS,
        KC_TAB,   KC_Q,         KC_W,    KC_E,   KC_R,   KC_T,   KC_TRNS,
        KC_LCTL,  KC_A,         KC_S,    KC_D,   KC_F,   KC_G,
        KC_LSFT,  KC_Z,         KC_X,    KC_C,   KC_V,   KC_B,   KC_TRNS,
        KC_LGUI,  KC_TRNS,      KC_NUBS, KC_LALT, KC_SPC,
                                               KC_TRNS,  KC_TRNS,
                                               KC_TRNS,  KC_TRNS,   KC_HOME,
                                               KC_SPC,   KC_TRNS,   KC_END,
        // right hand
        KC_DELETE,  KC_6,   KC_7,   KC_8,   KC_9,   KC_0,       KC_MINS,
        KC_BSPC,     KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,      KC_LBRC,
                    KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,    KC_QUOT,
        KC_ENTER,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,    KC_RALT,
		                    KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,
        KC_VOLD,        KC_VOLU,
        KC_PGUP,KC_UP,   KC_PGDN,
        KC_LEFT,KC_DOWN, KC_RIGHT
    ),
};
