// Copyright 2023 Kael Soares Augusto (@Dwctor)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_number {
  _BASE = 0,
  _LOWER = 1,
  _RAISE = 2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     
     /* _BASE Layer Keymap - Alphas & Modifiers Keys
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Esc│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Tab│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Alt│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Gui│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │Mo1├───┐           ┌───┤Mo2│
      *               └───┤Ctl├───┐   ┌───┤Sft├───┘
      *                   └───┤Spc│   │Ent├───┘
      *                       └───┘   └───┘
      */

    [_BASE] = LAYOUT_split_3x6_3(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LALT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RGUI,
                                            MO(_LOWER), KC_LCTL, KC_SPC,    KC_ENT, KC_RSFT, MO(_RAISE)
    ),

     /* _LOWER Layer Keymap - Number row, Modifiers & Arrow keys.
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │       │ 6 │ 7 │ 8 │ 9 │ 0 │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Tab│   │ ` │ - │ = │   │       │   │   │ ↑ │   │   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Alt│   │ [ │ ] │ \ │   │       │   │ ← │ ↓ │ → │   │Gui│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │Mo1├───┐           ┌───┤   │
      *               └───┤Ctl├───┐   ┌───┤Sft├───┘
      *                   └───┤Spc│   │Bsp├───┘
      *                       └───┘   └───┘
      */

    [_LOWER] = LAYOUT_split_3x6_3(
        _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,
        _______, XXXXXXX,  KC_GRV, KC_MINS,  KC_EQL, XXXXXXX,                            XXXXXXX, XXXXXXX,   KC_UP, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, KC_LBRC, KC_RBRC, KC_BSLS, XXXXXXX,                            XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, _______,
                                            _______, _______, _______,          KC_BSPC, _______, XXXXXXX
    ),

     /* _RAISE Layer Keymap - Function, Modifiers & Media keys
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Esc│F1 │F2 │F3 │F4 │F5 │       │F6 │F7 │F8 │F9 │F10│Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Tab│   │Ins│Hom│Pup│   │       │   │Mut│Vld│Vlu│   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Alt│   │Del│End│Pdn│   │       │   │Ply│Prv│Nxt│   │Gui│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │   ├───┐           ┌───┤Mo2│
      *               └───┤Ctl├───┐   ┌───┤Sft├───┘
      *                   └───┤   │   │Ent├───┘
      *                       └───┘   └───┘
      */

    [_RAISE] = LAYOUT_split_3x6_3(
        _______,   KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,                               KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, _______,
        _______, XXXXXXX, KC_INS, KC_HOME, KC_PGUP,  KC_F11,                              KC_F12, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, KC_DEL,  KC_END, KC_PGDN, XXXXXXX,                             XXXXXXX, KC_MPLY, KC_MPRV, KC_MNXT, XXXXXXX, _______,
                                            XXXXXXX, _______, XXXXXXX,          _______, _______, _______
    ),
};
