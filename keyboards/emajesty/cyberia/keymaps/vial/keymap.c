// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
     * │     │     │     │     │     │  │     │     │     │     │     │
     * │   q │   w │   e │   r │   t │  │   y │   u │   i │   o │   p │
     * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
     * │GUI_T│ALT_T│CTL_T│SFT_T│     │  │     │SFT_T│CTL_T│ALT_T│GUI_T│
     * │   a │   s │   d │   f │   g │  │   h │   j │   k │   l │   ; │
     * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
     * │     │     │     │     │     │  │     │     │     │     │     │
     * │   z │   x │   c │   v │   b │  │   n │   m │   , │   . │   / │
     * └─────┴─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┴─────┘
     *             │     │     │  LT1│  │  LT2│     │     │
     *             │  TAB│  SPC│  DEL│  │  ENT│  BSP│ RALT│
     *             └─────┴─────┴─────┘  └─────┴─────┴─────┘
     */
    [0] = LAYOUT(
        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,
        GUI_T(KC_A),    ALT_T(KC_S),    CTL_T(KC_D),    SFT_T(KC_F),    KC_G,           KC_H,           SFT_T(KC_J),    CTL_T(KC_K),    ALT_T(KC_L),    GUI_T(KC_SCLN),
        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,
                                        KC_TAB,         KC_SPC,         LT(1, KC_DEL),  LT(2, KC_ENT),  KC_BSPC,        KC_RALT
    ),

    /*
     * ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
     * │     │     │     │     │     │  │     │     │     │     │     │
     * │  ESC│   { │   [ │   ( │     │  │ F24 │   ) │   ] │   } │     │
     * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
     * │     │     │     │     │     │  │     │     │     │     │     │
     * │     │     │     │     │     │  │ Left│ Down│  Up │Right│   ' │
     * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
     * │     │     │     │     │     │  │     │     │     │     │     │
     * │ PREV│ PLAY│ NEXT│     │     │  │   - │   _ │   = │   + │   " │
     * └─────┴─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┴─────┘
     *             │     │     │     │  │     │     │     │
     *             │     │     │     │  │ MO3 │     │     │
     *             └─────┴─────┴─────┘  └─────┴─────┴─────┘
     */
    [1] = LAYOUT(
        KC_ESC,     LSFT(KC_LBRC),  KC_LBRC,    LSFT(KC_9), KC_NO,   KC_F24,    LSFT(KC_0),        KC_RBRC,    LSFT(KC_RBRC),  KC_NO,
        KC_NO,      KC_NO,          KC_NO,      KC_NO,      KC_NO,   KC_LEFT,   KC_DOWN,        KC_UP,      KC_RGHT,        KC_QUOT,
        KC_MPRV,    KC_MPLY,        KC_MNXT,    KC_NO,      KC_NO,   KC_MINS,   LSFT(KC_MINS),  KC_EQL,     LSFT(KC_EQL),   LSFT(KC_QUOT),
                                    KC_NO,      KC_NO,      KC_NO,   MO(3),     KC_NO,          KC_NO
    ),

    /*
     * ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
     * │     │     │     │     │     │  │     │     │     │     │     │
     * │   1 │   2 │   3 │   4 │   5 │  │   6 │   7 │   8 │   9 │   0 │
     * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
     * │     │     │     │     │     │  │     │     │     │     │     │
     * │   ! │   @ │   # │   $ │   % │  │   ^ │   & │   * │   \ │   ` │
     * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
     * │     │     │     │     │     │  │     │     │     │     │     │
     * │     │     │     │     │     │  │     │     │     │   | │   ~ │
     * └─────┴─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┴─────┘
     *             │     │     │     │  │     │     │     │
     *             │     │     │ MO3 │  │     │     │     │
     *             └─────┴─────┴─────┘  └─────┴─────┴─────┘
     */
    [2] = LAYOUT(
        KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,           KC_0,
        LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5), LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), KC_BSLS,        KC_GRV,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      LSFT(KC_BSLS),  LSFT(KC_GRV),
                                KC_NO,      KC_NO,      MO(3),      KC_NO,      KC_NO,      KC_NO
    ),

    /*
     * ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
     * │     │     │     │     │     │  │ LGUI│ LGUI│ LGUI│ LGUI│ LGUI│
     * │  F1 │  F2 │  F3 │  F4 │  F5 │  │   1 │   2 │   3 │   4 │   5 │
     * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
     * │     │     │     │     │     │  │     │     │     │     │     │
     * │  F6 │  F7 │  F8 │  F9 │ F10 │  │     │     │     │     │     │
     * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
     * │     │     │     │     │     │  │     │     │     │     │     │
     * │ F11 │ F12 │     │     │     │  │     │     │     │     │     │
     * └─────┴─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┴─────┘
     *             │     │     │     │  │     │     │     │
     *             │     │     │     │  │     │     │     │
     *             └─────┴─────┴─────┘  └─────┴─────┴─────┘
     */
    [3] = LAYOUT(
        KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), LGUI(KC_4), LGUI(KC_5),
        KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_F11, KC_F12, KC_NO,  KC_NO,  KC_NO,  KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
                                KC_NO,  KC_NO,  KC_NO,      KC_NO,      KC_NO,      KC_NO
    )
};
