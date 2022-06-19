/* Copyright 2019 Ryota Goto
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#define TST_G_S LGUI_T(KC_S)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_5x4(  /*Base: Navigation and major macros needed*/
    TO(0), TO(1), TO(2), TO(3), \
	KC__MUTE,   KC__VOLDOWN,   KC__VOLUP, KC_MS_WH_UP, \
	KC_PGUP,   KC_UP,   KC_PGDOWN,   KC_MS_WH_DOWN, \
	KC_LEFT,   KC_DOWN,   KC_RIGHT,   C(KC_C), \
	S(KC_PSCREEN),   KC_PSCREEN,   KC_CAPS, C(KC_V)  \
  ),  /*My "CAPS" is actually control/escape on my computer, so...*/
  [1] = LAYOUT_ortho_5x4( /*App level macros*/
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
	KC_F13,   KC_F14,   KC_F15,   KC_F16, \
	KC_F17,   KC_F18,   KC_F19,   KC_F20, \
	KC_F21,   KC_F22,   KC_F23,   KC_F24, \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS \
  ),
  [2] = LAYOUT_ortho_5x4( /*QMK Testing layer atm*/
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
	KC_KP_7,   TST_G_S,   KC_MEDIA_PLAY_PAUSE,   KC_KP_SLASH, \
	KC_KP_4,   KC_KP_5,   KC_KP_6,   KC_KP_ASTERISK, \
	KC_KP_1,   KC_KP_2,   KC_KP_3,   KC_KP_MINUS, \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS \
  ),
  [3] = LAYOUT_ortho_5x4( /*Numpad regular*/
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
	KC_KP_7,   KC_KP_8,   KC_KP_9,   KC_BSPACE, \
	KC_KP_4,   KC_KP_5,   KC_KP_6,   KC_KP_ASTERISK, \
	KC_KP_1,   KC_KP_2,   KC_KP_3,   C(KC_C), \
	KC_KP_0,   KC_KP_DOT,   KC_NUMLOCK, C(KC_V)  \
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
