// Copyright 2023 Kael Soares Augusto (@Dwctor)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_number {
  _BASE = 0,
  _LOWER = 1,
  _RAISE = 2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     
     /* _BASE Layer Keymap - Alphas & Homerow Mods Implementation.
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │ = │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │ - │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Esc│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Tab│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Bsp│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │ [ ├───┐           ┌───┤ ] │
      *               └───┤Mo1├───┐   ┌───┤Mo2├───┘
      *                   └───┤Spc│   │Ent├───┘
      *                       └───┘   └───┘
      */

    [_BASE] = LAYOUT_split_3x6_3(
        KC_EQL,          KC_Q,         KC_W,          KC_E,          KC_R,    KC_T,                               KC_Y,          KC_U,          KC_I,          KC_O,             KC_P,    KC_MINS,
        KC_ESC,  LGUI_T(KC_A), LALT_T(KC_S),  LCTL_T(KC_D),  LSFT_T(KC_F),    KC_G,                               KC_H,  RSFT_T(KC_J),  RCTL_T(KC_K),  RALT_T(KC_L),  RGUI_T(KC_SCLN),    KC_QUOT,
        KC_TAB,          KC_Z,         KC_X,          KC_C,          KC_V,    KC_B,                               KC_N,          KC_M,       KC_COMM,        KC_DOT,          KC_SLSH,    KC_BSPC,
                                                                 KC_LBRC , MO(_LOWER), KC_SPC,      KC_ENT, MO(_RAISE), KC_RBRC 
    ),

     /* _LOWER Layer Keymap - Number row, Multimedia & Arrow keys.
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │       │ 6 │ 7 │ 8 │ 9 │ 0 │ \ │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Esc│   │Mut│Vld│Vlu│   │       │   │   │ ↑ │   │   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Tab│   │Ply│Prv│Nxt│   │       │   │ ← │ ↓ │ → │   │Bsp│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │   ├───┐           ┌───┤   │
      *               └───┤Mo1├───┐   ┌───┤   ├───┘
      *                   └───┤Spc│   │Bsp├───┘
      *                       └───┘   └───┘
      */

    [_LOWER] = LAYOUT_split_3x6_3(
         KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSLS,
        _______, XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX,                            XXXXXXX, XXXXXXX,   KC_UP, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, KC_MPLY, KC_MPRV, KC_MNXT, XXXXXXX,                            XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, _______,
                                            XXXXXXX, _______, _______,          KC_BSPC, XXXXXXX, XXXXXXX
    ),

     /* _RAISE Layer Keymap - Function, Arrow & Navigation keys.
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │F12│F1 │F2 │F3 │F4 │F5 │       │F6 │F7 │F8 │F9 │F10│F11│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Esc│   │   │ ↑ │   │   │       │   │Ins│Hom│Pup│   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Tab│   │ ← │ ↓ │ → │   │       │   │Del│End│Pdn│   │Bsp│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │   ├───┐           ┌───┤   │
      *               └───┤   ├───┐   ┌───┤Mo2├───┘
      *                   └───┤   │   │Ent├───┘
      *                       └───┘   └───┘
      */

    [_RAISE] = LAYOUT_split_3x6_3(
         KC_F12,   KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,                                KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
        _______, XXXXXXX, XXXXXXX,    KC_UP, XXXXXXX, XXXXXXX,                              XXXXXXX,  KC_INS, KC_HOME, KC_PGUP, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, KC_LEFT,  KC_DOWN, KC_RGHT, XXXXXXX,                              XXXXXXX,  KC_DEL,  KC_END, KC_PGDN, XXXXXXX, _______,
                                             XXXXXXX, XXXXXXX, XXXXXXX,          _______, _______, XXXXXXX
    ),
};
