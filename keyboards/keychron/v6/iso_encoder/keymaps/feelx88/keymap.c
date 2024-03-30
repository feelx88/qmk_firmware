/* Copyright 2023 @ Keychron (https://www.keychron.com)
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
#include "keychron_common.h"

// clang-format off

enum layers{
  MAC_BASE,
  MAC_FN,
  WIN_BASE,
  WIN_FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_iso_110(
        KC_ESC,   QK_REBOOT,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,    KC_MUTE,    KC_SNAP,  KC_SIRI,  QK_USER_31,  KC_F13,   KC_F14,   KC_F15,   KC_F16,
        KC_GRV,   KC_1,       KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,    KC_INS,   KC_HOME,  KC_PGUP,     KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,       KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,                KC_DEL,   KC_END,   KC_PGDN,     KC_P7,    KC_P8,    KC_P9,
        KC_CAPS,  KC_A,       KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,    KC_ENT,                                      KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_LSFT,  KC_NUBS,    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,              KC_UP,                 KC_P1,    KC_P2,    KC_P3,
        KC_LCTL,  KC_LOPTN,   KC_LCMMD,                               KC_SPC,                                 KC_RCMMD, KC_ROPTN, MO(MAC_FN), KC_RCTL,    KC_LEFT,  KC_DOWN,  KC_RGHT,     KC_P0,              KC_PDOT,  KC_PENT),
    [MAC_FN] = LAYOUT_iso_110(
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,     RGB_TOG,    _______,  _______,  RGB_TOG,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                _______,  _______,  _______,  _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,                                  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,              _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,            _______,  _______),
    [WIN_BASE] = LAYOUT_iso_110(
        KC_ESC,   QK_REBOOT,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,     KC_MUTE,    KC_PSCR,  KC_CRTA,  QK_USER_31,  _______,  _______,  _______,  _______,
        KC_GRV,   KC_1,         KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,    KC_INS,   KC_HOME,  KC_PGUP,     KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,         KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,                KC_DEL,   KC_END,   KC_PGDN,     KC_P7,    KC_P8,    KC_P9,
        KC_CAPS,  KC_A,         KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,    KC_ENT,                                      KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        SC_LSPO,  KC_NUBS,      KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              SC_RSPC,              KC_UP,                 KC_P1,    KC_P2,    KC_P3,
        SC_LCPO,  KC_LWIN,      SC_LAPO,                                KC_SPC,                                 SC_RAPC,  KC_RWIN,  MO(WIN_FN), SC_RCPC,    KC_LEFT,  KC_DOWN,  KC_RGHT,     KC_P0,              KC_PDOT,  KC_PENT),
    [WIN_FN] = LAYOUT_iso_110(
        _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,    RGB_TOG,    _______,  _______,  RGB_TOG,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                _______,  _______,  _______,  _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,                                  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,              _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,            _______,  _______),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [MAC_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [WIN_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI) }
};
#endif // ENCODER_MAP_ENABLE

// clang-format on

void housekeeping_task_user(void) {
    housekeeping_task_keychron();
}

bool locked = false;
host_driver_t *host_driver = 0;
int rgb_mode;
HSV rgb_hsv;
int rgb_speed;
uint8_t numpad_count = 10;
int numpad_indices[] = {
  57,  58, 59,
  76,  74,  75,
  92,  93, 94,
  106
};

enum feelx88_custom_keycodes {
  KEYLOCK = QK_USER_31,
};

void lock(void) {
  host_driver = host_get_driver();
  clear_keyboard();
  host_set_driver(0);
  locked = true;

  rgb_speed = rgb_matrix_get_speed();
  rgb_mode = rgb_matrix_get_mode();
  rgb_hsv = rgb_matrix_get_hsv();
  rgb_matrix_set_speed_noeeprom(0);
  rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
  rgb_matrix_sethsv_noeeprom(HSV_OFF);
};

void unlock(void) {
  host_set_driver(host_driver);
  locked = false;
  rgb_matrix_mode_noeeprom(rgb_mode);
  rgb_matrix_sethsv_noeeprom(rgb_hsv.h, rgb_hsv.s, rgb_hsv.v);
  rgb_matrix_set_speed_noeeprom(rgb_speed);
};

#define EXTENDED_LOCK
#ifndef EXTENDED_LOCK

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KEYLOCK: {
        static unsigned short lock_click_count = 0;

        if (record->event.pressed) {
            if (host_get_driver()) {
                lock();
            } else {
                if (lock_click_count < 3) {
                    ++lock_click_count;
                    break;
                }
                lock_click_count = 0;
                unlock();
            }
        }*
        break;
    }

  }
  return true;
};

#else // EXTENDED_LOCK

struct password_entry {
    uint16_t keycode;
    bool entered;
};
uint8_t password_length = 4;
struct password_entry password[] = {
    {KC_KP_1, false},
    {KC_KP_2, false},
    {KC_KP_0, false},
    {KC_KP_9, false},
};

void reset_password(void) {
  for (int x = 0; x < password_length; ++x) {
    password[x].entered = false;
  }
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (locked) {
    if (record->event.pressed) {
      for (uint8_t character_index = 0; character_index < password_length; ++character_index) {
        if (password[character_index].entered == false) {
          if (keycode == password[character_index].keycode) {
            password[character_index].entered = true;

            if (character_index == password_length - 1) {
              reset_password();
              unlock();
            }
          } else {
            reset_password();
          }

          break;
        }
      }
    }

    return false;
  }

  switch (keycode) {
    case KEYLOCK: {
        if (record->event.pressed) {
          lock();
        }
        break;
    }
  }
  return true;
};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
  if (locked) {
    for (uint8_t x = 0; x < numpad_count; ++x) {
      rgb_matrix_set_color(numpad_indices[x], 255, 0, 0);
    }
    return false;
  }

  if (host_keyboard_led_state().num_lock) {
    rgb_matrix_set_color(37, 255, 255, 255);
  }

  return true;
}

#endif // EXTENDED_LOCK
