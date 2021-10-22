#pragma once

#ifdef KEYBOARD_fourier_rev1
    #include "rev1.h"
#endif

#include "quantum.h"

#define LAYOUT( \
         L01, L02, L03, L04, L05, L06,          R36, R35, R34, R33, R32, R31, R30, \
         L11, L12, L13, L14, L15, L16,          R26, R25, R24, R23, R22, R21, R20, \
    L20, L21, L22, L23, L24, L25, L26,          R16, R15, R14, R13, R12, R11, \
    L30, L31, L32,      L34,      L36,          R06,      R04, R03, R02, R01 \
    ) \
    { \
        { KC_NO, L01, L02, L03,   L04, L05,   L06   }, \
        { KC_NO, L11, L12, L13,   L14, L15,   L16   }, \
        { L20,   L21, L22, L23,   L24, L25,   L26   }, \
        { L30,   L31, L32, KC_NO, L34, KC_NO, L36   }, \
        { KC_NO, R01, R02, R03,   R04, KC_NO, R06 }, \
        { KC_NO, R11, R12, R13,   R14, R15,   R16 }, \
        { R20,   R21, R22, R23,   R24, R25,   R26 }, \
        { R30,   R31, R32, R33,   R34, R35,   R36 } \
    }
