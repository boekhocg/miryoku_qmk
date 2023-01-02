// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include QMK_KEYBOARD_H
// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.
//Added by Caspar
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_T):
        case LSFT_T(KC_N):
           return TAPPING_TERM - 65;
        case LGUI_T(KC_A):
        case LGUI_T(KC_O):
            return TAPPING_TERM + 100;
        default:
            return TAPPING_TERM;
    }
}


#define CHARYBDIS_AUTO_SNIPING_ON_LAYER MIRYOKU_LAYER_BUTTON

