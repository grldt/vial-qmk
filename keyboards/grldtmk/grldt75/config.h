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
#define PRODUCT_ID      0x0075
#define DEVICE_VER      0x0001
#define MANUFACTURER    grldtmk
#define PRODUCT         grldt75

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 8

// wiring of each half
#define MATRIX_ROW_PINS { B3, B1, F7, F6, F5, F4 }
#define MATRIX_COL_PINS { D1, D0, D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS_RIGHT { D1, D0, D4, C6, D7, E6 }
#define MATRIX_COL_PINS_RIGHT { B6, B2, B3, B1, F7, F6, F5, F4 }

#define DIODE_DIRECTION COL2ROW

#define VIAL_KEYBOARD_UID {0x3C, 0x83, 0x94, 0x5B, 0x38, 0x61, 0x86, 0x50}

#define SPLIT_USB_DETECT
// Handedness, disable for left
// #define MASTER_RIGHT

#define USE_SERIAL

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D2


/* define if matrix has ghost */
// #define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
#define RGB_DI_PIN D3
#define RGBLIGHT_SPLIT
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 12    // Number of LEDs
#define RGBLED_SPLIT { 6, 6 }

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
