/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

// Define layer names
#define _NORMAL 0
#define _FNONE 1
#define _FNTWO 2

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_NORMAL] = LAYOUT_G84(
  KC_ESC , KC_F1, KC_F2  , KC_F3  , KC_F4   , KC_F5, KC_F6, KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_NUMLOCK, KC_PSCR, KC_SLCK, KC_PAUSE , \
       KC_1     , KC_2   , KC_3   , KC_4    , KC_5 , KC_6 , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS   , KC_EQL , KC_BSPC, KC_HOME  , \
  KC_TAB , KC_Q , KC_W   , KC_E   , KC_R    , KC_T , KC_Y , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC   , KC_RBRC, KC_BSLS, KC_PGUP  , \
  KC_CAPS, KC_A , KC_S   , KC_D   , KC_F    , KC_G , KC_H , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT   ,     KC_ENTER    , KC_PGDOWN, \
      KC_LSFT   , KC_Z   , KC_X   , KC_C    , KC_V , KC_B , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLASH  , KC_RSFT, KC_UP  , KC_END   , \
  KC_LCTL, KC_NO, KC_LWIN, KC_LALT, KC_GRAVE,   KC_SPACE  , KC_RALT, KC_RWIN, KC_MENU, KC_INS , KC_DEL    , KC_LEFT, KC_DOWN, KC_RIGHT),
};

/* Layer based ilumination, just binary */
uint32_t layer_state_set_user(uint32_t state) {
  switch (biton32(state)) {
  case _FNONE:
    palSetPad(GPIOB, 1);  //OFF Color A
    palClearPad(GPIOB, 11); //ON Color B
    break;
  case _FNTWO:
    palClearPad(GPIOB, 1); //ON Color A
    palClearPad(GPIOB, 11);  //ON Color B
    break;
  default: //  for any other layers, or the default layer
    palClearPad(GPIOB, 1); //ON Color A
    palSetPad(GPIOB, 11);  //OFF Color B
    break;
  }
  return state;
}
