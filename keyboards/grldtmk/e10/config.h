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
#define PRODUCT_ID      0x1010
#define DEVICE_VER      0x0001
#define MANUFACTURER    sntlkb
#define PRODUCT         E10
#define DESCRIPTION     E10 DEEZ NUTS

#define VIAL_KEYBOARD_UID {0x15, 0x4F, 0x9B, 0x6C, 0x1D, 0xA4, 0x03, 0x88}

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 11

/* key matrix pins */
#define MATRIX_ROW_PINS { D0, D4 }
#define MATRIX_COL_PINS { C6, D7, E6, B4, B5, F4, F5, F6, F7, B1, B3 }

// B2, B6
#define ENCODERS_PAD_A { B2 }
#define ENCODERS_PAD_B { B6 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL
