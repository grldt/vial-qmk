#pragma once

#include "quantum.h"

#define LAYOUT( \
    LA1, LB1, LA2, LB2, LA3, LB3, RA1, RB1, RA2, RB2, RA3, RD3, RB3, \
    LC1, LD1, LC2, LD2, LC3, LD3, RC1, RD1, RC2, RD2, RC3, RF3, \
    LE1, LF1, LE2, LF2, LE3, LF3, RE1, RF1, RE2, RF2, RE3, RH3, \
    LG1, LH1, LG2, LH2,      LH3, RG1, RH1, RG2, RH2, RG3 \
    ) \
    { \
        { LA1, LA2, LA3 }, \
        { LB1, LB2, LB3 }, \
        { LC1, LC2, LC3 }, \
        { LD1, LD2, LD3 }, \
        { LE1, LE2, LE3 }, \
        { LF1, LF2, LF3 }, \
        { LG1, LG2, KC_NO }, \
        { LH1, LH2, LH3 }, \
        { RA1, RA2, RA3 }, \
        { RB1, RB2, RB3 }, \
        { RC1, RC2, RC3 }, \
        { RD1, RD2, RD3 }, \
        { RE1, RE2, RE3 }, \
        { RF1, RF2, RF3 }, \
        { RG1, RG2, RG3 }, \
        { RH1, RH2, RH3 } \
    }
