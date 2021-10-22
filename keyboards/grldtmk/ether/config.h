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
#define PRODUCT_ID      0x0640
#define DEVICE_VER      0x0002
#define MANUFACTURER    grldtmk
#define PRODUCT         Ether
#define DESCRIPTION     40 percent ergo keyboard with normal key size and arrows

#define VIAL_KEYBOARD_UID {0x1F, 0xDF, 0xDA, 0x30, 0x15, 0x3C, 0x3F, 0x52}

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 7

/* key matrix pins */
#define MATRIX_ROW_PINS { D3, D2, F4, D1, D0, D4, C6, D7 }
#define MATRIX_COL_PINS { E6, B4, B5, F5, F6, F7, B1 }

#define ENCODERS_PAD_A { B3 }
#define ENCODERS_PAD_B { B2 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 200
