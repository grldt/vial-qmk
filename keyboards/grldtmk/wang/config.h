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
#define PRODUCT_ID      0x0022
#define DEVICE_VER      0x0001
#define MANUFACTURER    grldtmk
#define PRODUCT         Wang
#define DESCRIPTION     40 percent ortholinear keyboard with 40s set compatibility

#define VIAL_KEYBOARD_UID {0xE9, 0x3F, 0x30, 0xBC, 0xF3, 0x63, 0x12, 0x58}

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 13

/* key matrix pins */
#define MATRIX_ROW_PINS {F4, F5, F6, F7}
#define MATRIX_COL_PINS {D1, D0, D4, C6, D7, E6, B4, B5, B6, B2, B3, B1, D3}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL
