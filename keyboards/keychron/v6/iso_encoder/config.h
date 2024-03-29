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

#pragma once

/* Key matrix pins */
#define MATRIX_ROW_PINS { B5, B4, B3, A15, A14, A13 }
#define MATRIX_COL_PINS { A10, A9, A8, B1, B0, A7, A6, A5, A4, A3, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN }

/* Pin connected to DS of 74HC595 */
#define DATA_PIN_74HC595 C15
/* Pin connected to SH_CP of 74HC595 */
#define CLOCK_PIN_74HC595 A1
/* Pin connected to ST_CP of 74HC595 */
#define LATCH_PIN_74HC595 A0
/* Pin used number of 74HC595 */
#define PIN_USED_74HC595 10
/* Pin used index start of 74HC595 */
#define PIN_START_74HC595 10

/* Encoder Configuration */
#define ENCODER_DEFAULT_POS 0x3

/* Enable caps-lock LED*/
#define CAPS_LOCK_LED_INDEX 60

/* Enable NUM_LOCK_LED_INDEX */
// #define NUM_LOCK_LED_INDEX 37

#define LSPO_KEYS KC_LSFT, KC_LSFT, KC_8
#define RSPC_KEYS KC_RSFT, KC_LSFT, KC_9
#define LCPO_KEYS KC_LCTL, KC_RALT, KC_7
#define RCPC_KEYS KC_RCTL, KC_RALT, KC_0
#define LAPO_KEYS KC_LALT, KC_RALT, KC_8
#define RAPC_KEYS KC_RALT, KC_RALT, KC_9

#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR
