#pragma once
#include "quantum.h"

#define LAYOUT( \
    L00, L01, L02, L03, L04, L05, L06,          R00, R01, R02, R03, R04, R05, R06, R07, \
    L10, L11, L12, L13, L14, L15, L16, L17,     R10, R11, R12, R13, R14, R15,      R17, \
    L20, L21, L22, L23, L24, L25, L26, L27,          R21, R22, R23, R24, R25, R26, R27, \
    L30, L31, L32, L33, L34, L35, L36, L37,          R31, R32, R33, R34,      R36, R37, \
    L40, L41, L42, L43, L44, L45, L46, L47,          R41, R42, R43,      R45, R46, R47, \
    L50, L51, L52,                L56,               R51, R52, R53,      R55, R56, R57 \
    ) \
    { \
        { L00,   L01, L02, L03,   L04,   L05,   L06,   KC_NO }, \
        { L10,   L11, L12, L13,   L14,   L15,   L16,   L17 }, \
        { L20,   L21, L22, L23,   L24,   L25,   L26,   L27 }, \
        { L30,   L31, L32, L33,   L34,   L35,   L36,   L37 }, \
        { L40,   L41, L42, L43,   L44,   L45,   L46,   L47 }, \
        { L50,   L51, L52, KC_NO, KC_NO, KC_NO, L56,   KC_NO }, \
        { R00,   R01, R02, R03,   R04,   R05,   R06,   R07  }, \
        { R10,   R11, R12, R13,   R14,   R15,   KC_NO, R17  }, \
        { KC_NO, R21, R22, R23,   R24,   R25,   R26,   R27  }, \
        { KC_NO, R31, R32, R33,   R34,   KC_NO, R36,   R37  }, \
        { KC_NO, R41, R42, R43,   KC_NO, R45,   R46,   R47  }, \
        { KC_NO, R51, R52, R53,   KC_NO, R55,   R56,   R57  } \
    }
