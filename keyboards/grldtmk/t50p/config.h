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
#define PRODUCT_ID      0x0150
#define DEVICE_VER      0x0001
#define MANUFACTURER    grldtmk
#define PRODUCT         t50p
#define DESCRIPTION     50 percent keyboard compatible with TOFU

// vial uid python3 util/vial_generate_keyboard_uid.py
#define VIAL_KEYBOARD_UID {0xEF, 0x8B, 0x34, 0x05, 0xC1, 0x32, 0x83, 0x9F}

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 7

/* key matrix pins */
#define MATRIX_ROW_PINS { F4, F5, F6, F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { D1, D0, D4, C6, D7, E6, B4 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
