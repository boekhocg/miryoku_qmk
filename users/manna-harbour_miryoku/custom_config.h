// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once


#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,           \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),      \
LT(U_MOUSE,KC_Z), ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_FUN,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP
/*
#if defined (KEYBOARD_bastardkb_charybdis_3x5_v2_splinky_3)

    #define MIRYOKU_LAYER_FUN \
    TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              KC_PSCR,           KC_F7,             KC_F8,             KC_F9,             KC_F12,            \
    KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_SCRL,           KC_F4,             KC_F5,             KC_F6,             KC_F11,            \
    U_UND,             DRGSCRL, 		  SNIPING,           DPI_MOD, 			S_D_MOD,              KC_PAUS,           KC_F1,             KC_F2,             KC_F3,             KC_F10,            \
    U_NP,              U_NP,              KC_BTN3,           KC_BTN1,           KC_BTN2,             KC_TAB,            KC_SPC,            KC_APP,            U_NP,              U_NP

#endif

#if defined (KEYBOARD_fingerpunch_ximi)


    #define MIRYOKU_LAYER_FUN \
    TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              KC_PSCR,           KC_F7,             KC_F8,             KC_F9,             KC_F12,            \
    KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_SCRL,           KC_F4,             KC_F5,             KC_F6,             KC_F11,            \
    U_UND,             FP_SCROLL_MOMENT,  FP_SNIPE_MOMENT,   FP_POINT_DPI_UP, 	FP_SNIPE_DPI_UP,   KC_PAUS,           KC_F1,             KC_F2,             KC_F3,             KC_F10,            \
    U_NP,              U_NP,              KC_BTN3,           KC_BTN1,           KC_BTN2,           KC_TAB,            KC_SPC,            KC_APP,            U_NP,              U_NP

#endif
*/

#if defined (KEYBOARD_bastardkb_charybdis_3x5_v2_splinky_3)

    #define MIRYOKU_LAYER_MOUSE \
   TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
   KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              U_NU,              KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,           \
   U_UND,             DRGSCRL, 		     SNIPING,           DPI_MOD, 		   S_D_MOD,  U_NA,    U_NU,              KC_WH_L,           KC_WH_D,           KC_WH_U,           KC_WH_R,           \
   U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP
#endif

#if defined (KEYBOARD_fingerpunch_ximi)

  #define MIRYOKU_LAYER_MOUSE \
   TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  FP_POINT_DPI_RESET, FP_SCROLL_DPI_RESET,  U_RDO,   FP_SCROLL_DPI_RESET,             U_CPY,             U_CUT,             U_UND,             \
   KC_LGUI,           KC_LALT,           KC_LCTL,           FP_POINT_DPI_UP,    FP_SNIPE_DPI_UP,     U_NU,     FP_SCROLL_DPI_UP,           KC_MS_D,           KC_MS_U,           KC_MS_R,           \
   U_UND,             FP_SCROLL_MOMENT,  FP_SNIPE_MOMENT,   FP_POINT_DPI_DN,    FP_SNIPE_DPI_DN,     U_NA,     FP_SCROLL_DPI_DN,              KC_WH_L,           KC_WH_D,           KC_WH_U,           KC_WH_R,           \
   U_NP,              U_NP,              U_NA,              U_NA,               U_NA,                KC_BTN2,  KC_BTN1,           KC_BTN3,           U_NP,              U_NP
   
#endif

#define U_TAP U_NUM 
#define U_TD_U_TAP U_TD_U_NUM
#define U_EXTRA U_NUM 
#define U_TD_U_EXTRA U_TD_U_NUM
#define U_MOUSE U_NUM 
#define U_TD_U_MOUSE U_TD_U_NUM

#define U_BUTTON U_NUM 
#define U_TD_U_BUTTON U_TD_U_NUM

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun")

#define TAPPING_TERM_PER_KEY


/**
 * \brief Prevent normal rollover on alphas from accidentally triggering mods.
 *
 * Ignores key presses that interrupt a mod-tap.  Must-have for Home Row mod.
 *
 * Without `IGNORE_MOD_TAP_INTERRUPT`, within `TAPPING_TERM`:
 *   Mod(a)🠗 e🠗 Mod(a)🠕 e🠕 ➞ Mod+e
 * With `IGNORE_MOD_TAP_INTERRUPT`, within `TAPPING_TERM`:
 *   Mod(a)🠗 e🠗 Mod(a)🠕 e🠕 ➞ ae
 */
//#define IGNORE_MOD_TAP_INTERRUPT

/* Charybdis-specific features. */

#ifdef POINTING_DEVICE_ENABLE
// Automatically enable the pointer layer when moving the trackball.  See also:
// - `CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_TIMEOUT_MS`
// - `CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD`
// #define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
#endif // POINTING_DEVICE_ENABLE

/*
Disables autorepeat, enables rapid layer swithching.
When the user holds a key after tapping it, the tapping function is repeated by default, 
rather than activating the hold function. This allows keeping the ability to auto-repeat 
the tapping function of a dual-role key. TAPPING_FORCE_HOLD removes that ability to
let the user activate the hold function instead, in the case of holding the 
dual-role key after having tapped it.
*/
//#define TAPPING_FORCE_HOLD



/*
This makes tap and hold keys (like Layer Tap) work better for fast typists, or for high TAPPING_TERM settings.

If you press a dual-role key, tap another key (press and release) and then release the dual-role key, 
all within the tapping term, by default the dual-role key will perform its tap action. 
If the PERMISSIVE_HOLD option is enabled, the dual-role key will perform its hold action instead.*/
//#define PERMISSIVE_HOLD

#define BILATERAL_COMBINATIONS 700

