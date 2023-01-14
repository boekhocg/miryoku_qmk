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

#define BASE 0
#define NAV 1
#define MEDIA 2
#define NUM 3
#define SYM 4
#define FUN 5

#define DILEMMA_AUTO_SNIPING_ON_LAYER FUN //Fun Layer

#    ifdef DILEMMA_AUTO_SNIPING_ON_LAYER
layer_state_t layer_state_set_user(layer_state_t state) {
    dilemma_set_pointer_sniping_enabled(layer_state_cmp(state, DILEMMA_AUTO_SNIPING_ON_LAYER));
    return state;
}
#    endif // DILEMMA_AUTO_SNIPING_ON_LAYERLAYER


//define layer compbos
const uint16_t PROGMEM thumbcombos_base_right[] = {LT(SYM, KC_ENT), LT(NUM, KC_BSPC), COMBO_END};
const uint16_t PROGMEM thumbcombos_base_left[] = {LT(NAV, KC_SPC), LT(FUN, KC_TAB), COMBO_END};

//define open parant left thumb combo
const uint16_t PROGMEM thumbcombos_sym[] = {KC_RPRN, KC_UNDS, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  COMBO(thumbcombos_base_right, LT(FUN, KC_DEL)),
  COMBO(thumbcombos_base_left, LT(MEDIA, KC_ESC)),
  COMBO(thumbcombos_sym, KC_LPRN)
};
//#endif
