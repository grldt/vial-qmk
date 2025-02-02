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
#define PRODUCT_ID      0x009C
#define DEVICE_VER      0x0100
#define MANUFACTURER    grldtmk
#define PRODUCT         9PMC

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

// wiring of each half
#define MATRIX_ROW_PINS { F6, B3, B6 }
#define MATRIX_COL_PINS { B1, F7, B2 }


// vial uid python3 util/vial_generate_keyboard_uid.py
#define VIAL_KEYBOARD_UID {0x27, 0x66, 0x59, 0x96, 0x8C, 0xD3, 0xC2, 0x7D}

#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
