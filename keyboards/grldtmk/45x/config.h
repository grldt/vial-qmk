/*
Copyright 2018 Danny Nguyen <danny@keeb.io>

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
#define PRODUCT_ID      0x0045
#define DEVICE_VER      0x0001
#define MANUFACTURER    grldt.mk
#define PRODUCT         45x
#define DESCRIPTION     40 percent keyboard with normal key size

#define VIAL_KEYBOARD_UID {0x85, 0xA8, 0x0D, 0x59, 0xF0, 0x65, 0xA1, 0xDA}

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

// Enable Split Functions if you're using two pro micros
// #define SOFT_SERIAL_PIN D2
// #define SPLIT_HAND_PIN D3

/* key matrix pins */
#define MATRIX_ROW_PINS {F5, F4, B2, B6, F7, F6, C6, D4}
#define MATRIX_COL_PINS {D7, E6, B4, B5, B3, B1}

// r0 r1 r2 r3 r4 r5 r6 r7
// F5 F4 B2 B6 F7 F6 C6 D4

// c0 c1 c2 c3 c4 c5
// D7 E6 B4 B5 B3 B1

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL
