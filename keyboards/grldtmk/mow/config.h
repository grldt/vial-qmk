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
#define PRODUCT_ID      0x0440
#define DEVICE_VER      0x0100
#define MANUFACTURER    grldtmk
#define PRODUCT         mow40

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { D4, C6, D7, E6 }
#define MATRIX_COL_PINS { F5, F6, F7, B1, B3, B2, B6 }
// #define MATRIX_ROW_PINS_RIGHT { E6, D7, C6, D4 }
// #define MATRIX_COL_PINS_RIGHT { B6, B2, B3, B1, F7, F6, F5 }


// vial uid python3 util/vial_generate_keyboard_uid.py
#define VIAL_KEYBOARD_UID {0x5C, 0xE2, 0x7F, 0xD3, 0x50, 0xCB, 0x15, 0x9E}

#define DIODE_DIRECTION COL2ROW

#define USE_SERIAL
/* Split Defines */
// #define SPLIT_HAND_PIN F4
#define SPLIT_HAND_PIN D2
/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D3
#define SPLIT_USB_DETECT

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
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
