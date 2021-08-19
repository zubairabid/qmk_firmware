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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_5x4( /* Base */
    TO(0), TO(1), TO(2), TO(3), \
	KC_F13,   KC_F14,   KC_F15,   KC_F16, \
	KC_F17,   KC_F17,   KC_F18,   KC_F20, \
	KC_F21,   KC_F22,   KC_F23,   KC_F24, \
	S(KC_PSCREEN),   KC_PSCREEN,   C(KC_C), C(KC_V)  \
  ),
  [1] = LAYOUT_ortho_5x4( /*Navigation*/
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
	KC_MS_BTN1,   KC_MS_BTN2,   KC_MS_BTN3,   KC_MS_WH_UP, \
	KC_PGDOWN,   KC_UP,   KC_PGUP,   KC_MS_WH_DOWN, \
	KC_LEFT,   KC_DOWN,   KC_RIGHT,   KC_KP_ASTERISK, \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS \
  ),
  [2] = LAYOUT_ortho_5x4( /*Art*/
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
	KC_KP_7,   KC_KP_8,   KC_KP_9,   KC_KP_SLASH, \
	KC_KP_4,   KC_KP_5,   KC_KP_6,   KC_KP_ASTERISK, \
	KC_KP_1,   KC_KP_2,   KC_KP_3,   KC_KP_MINUS, \
	KC_KP_0,   KC_KP_DOT,   KC_NUMLOCK, KC_KP_PLUS  \
  ),
  [3] = LAYOUT_ortho_5x4( /*Games*/
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
	KC_KP_7,   KC_KP_8,   KC_KP_9,   KC_KP_SLASH, \
	KC_KP_4,   KC_KP_5,   KC_KP_6,   KC_KP_ASTERISK, \
	KC_KP_1,   KC_KP_2,   KC_KP_3,   KC_KP_MINUS, \
	KC_KP_0,   KC_KP_DOT,   KC_NUMLOCK, KC_KP_PLUS  \
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
