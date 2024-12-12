// Copyright 2022 Taro Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "lib/add_keycodes.h"

enum layer_names {
  BASE = 0,
  LOWER,
  LIGHT = 5,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
      LT(LIGHT, KC_ESC),  KC_1, KC_2, KC_3, KC_4, KC_5, KC_MINS, KC_QUOT, KC_EQL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
      KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRC, KC_UP, KC_RBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
      CMD_CTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LEFT,KC_DOWN,KC_RIGHT,KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT,
      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, LALT_T(KC_B), LT(LOWER, KC_SPC), LT(LOWER, KC_SPC), LGUI_T(KC_GRV),  KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT
    ),
    [LOWER] = LAYOUT(
      XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   XXXXXXX, XXXXXXX, XXXXXXX, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_DEL,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LSFT(KC_9), LSFT(KC_0), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_QUOT,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LT(LOWER, KC_SPC), LT(LOWER, KC_SPC), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [LIGHT] = LAYOUT(
      LT(LIGHT, KC_ESC), RGB_MOD, RGB_RMOD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      RGB_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, XXXXXXX, XXXXXXX,
      RGB_LAYERS,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [BASE] =   {
        ENCODER_CCW_CW(KC_A, KC_B),
        ENCODER_CCW_CW(KC_C, KC_D),
        ENCODER_CCW_CW(KC_E, KC_F),
        ENCODER_CCW_CW(KC_G, KC_H)
        },
    [LIGHT] = {
        ENCODER_CCW_CW(RGB_SPI, RGB_SPD),
        ENCODER_CCW_CW(RGB_VAI, RGB_VAD),
        ENCODER_CCW_CW(RGB_SAI, RGB_SAD),
        ENCODER_CCW_CW(RGB_HUI, RGB_HUD)
        }
};
