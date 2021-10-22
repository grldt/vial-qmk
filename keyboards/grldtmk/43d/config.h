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
#define PRODUCT_ID      0x0043
#define DEVICE_VER      0x0001
#define MANUFACTURER    grldt.mk
#define PRODUCT         43d
#define DESCRIPTION     40 percent keyboard with normal key size

#define VIAL_KEYBOARD_UID {0x4C, 0xC0, 0x69, 0xEC, 0x0E, 0x33, 0x2F, 0x16}

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

/* key matrix pins */
#define MATRIX_ROW_PINS {F7, F6, F5, F4, B6, B2, B3, B1}
#define MATRIX_COL_PINS {D4, C6, D7, E6, B4, B5}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

#define TAPPING_TERM 200
