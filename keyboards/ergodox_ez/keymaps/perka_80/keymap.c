#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"
#include "version.h"
#include "keymap_swedish.h"

#define BASE 0 // default layer

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 */
// If it accepts an argument (i.e, is a function), it doesn't need KC_.
// Otherwise, it needs KC_*
[BASE] = LAYOUT_ergodox_80(  // layer 0 : default
        // left hand
        KC_ESC,   KC_1,         KC_2,    KC_3,   KC_4,   KC_5,   KC_BSLASH,
        KC_TAB,   KC_Q,         KC_W,    KC_E,   KC_R,   KC_T,   SE_CIRC,
        KC_LCTRL, KC_A,         KC_S,    KC_D,   KC_F,   KC_G,
        KC_LSFT,  KC_Z,         KC_X,    KC_C,   KC_V,   KC_B,   KC_TRNS,
        KC_LALT,  KC_TRNS,      KC_NUBS, KC_LGUI, KC_SPC,
                                                         KC_F1,     KC_F2,
                                               KC_F3,    KC_F4,     KC_HOME,
                                               KC_F5,    KC_F6,     KC_END,
        // right hand
        KC_DELETE,  KC_6,   KC_7,   KC_8,   KC_9,   KC_0,       KC_MINS,
        KC_BSPACE,  KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,       KC_LBRACKET,
                    KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,    KC_QUOT,
        KC_ENTER,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,    KC_RALT,
		                    KC_SPC,KC_TRNS, KC_TRNS, KC_TRNS,   KC_FN1,
        KC__VOLDOWN,        KC__VOLUP,
        KC_PGUP,KC_UP,   KC_PGDN,
        KC_LEFT,KC_DOWN, KC_RIGHT
    ),
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
        if (record->event.pressed) {
          SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        }
        break;
      }
    return MACRO_NONE;
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        default:
            // none
            break;
    }

};
