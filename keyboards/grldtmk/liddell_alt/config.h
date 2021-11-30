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
#define PRODUCT_ID      0xA002
#define DEVICE_VER      0x0001
#define MANUFACTURER    grldtmk
#define PRODUCT         Liddell Alt
#define DESCRIPTION     Alice layout keyboard with pro micro

/* vial uid python3 util/vial_generate_keyboard_uid.py */
#define VIAL_KEYBOARD_UID {0x71, 0x6A, 0xF2, 0xF0, 0x1F, 0x04, 0x89, 0x4D}

/* key matrix size */
#define MATRIX_ROWS 9
#define MATRIX_COLS 8

/* key matrix pins */
#define MATRIX_ROW_PINS { D3, D2, D0, C6, E6, D1, D4, D7, B4 }
#define MATRIX_COL_PINS { F4, F5, F6, B2, B3, B1, F7, B6 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
