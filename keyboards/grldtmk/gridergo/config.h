/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6227
#define PRODUCT_ID      0x3126
#define DEVICE_VER      0x0001
#define MANUFACTURER    grldtmk
#define PRODUCT         ErgoGrid
#define DESCRIPTION     ErgoDox variant by grldt

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 7

// Vial Keyboard ID - "python3 util/vial_generate_keyboard_uid.py"
// #define VIAL_KEYBOARD_UID {0x90, 0x10, 0x9C, 0xE7, 0xBC, 0x4F, 0x5A, 0x34}

// wiring of each half
#define MATRIX_ROW_PINS { F5, F6, F7, B1, B3, B2 }
#define MATRIX_COL_PINS { F4, D3, D0, D4, C6, D7, E6 }
#define MATRIX_COL_PINS_RIGHT { F4, D3, D0, D4, C6, D7, E6 }

#define DIODE_DIRECTION COL2ROW

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D1
#define SPLIT_HAND_PIN D2

#define ENCODERS_PAD_A { B4 }
#define ENCODERS_PAD_B { B5 }
#define ENCODERS_PAD_A_RIGHT { B4 }
#define ENCODERS_PAD_B_RIGHT { B5 }

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
#define RGB_DI_PIN B6
#define RGBLIGHT_ANIMATIONS
// #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
// #define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLED_NUM 20    // Number of LEDs
#define RGBLED_SPLIT { 10, 10 }

#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define FORCE_NKRO
