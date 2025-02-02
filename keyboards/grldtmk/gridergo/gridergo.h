#pragma once

#include "quantum.h"

#define LAYOUT( \
    LA1, LA2, LA3, LA4, LA5, LA6, LA7,           RA7, RA6, RA5, RA4, RA3, RA2, RA1, \
    LB1, LB2, LB3, LB4, LB5, LB6, LB7,           RB7, RB6, RB5, RB4, RB3, RB2, RB1, \
    LC1, LC2, LC3, LC4, LC5, LC6,                     RC6, RC5, RC4, RC3, RC2, RC1, \
    LD1, LD2, LD3, LD4, LD5, LD6, LD7,           RD7, RD6, RD5, RD4, RD3, RD2, RD1, \
    LE1, LE2, LE3, LE4, LE5,                               RE5, RE4, RE3, RE2, RE1, \
                                 LF6, LF7,   RF7, RF6,                              \
                                      LF5,   RF5,                                   \
                            LF3, LF4, LF2,   RF2, RF4, RF3                          \
    ) \
    { \
        { LA1,   LA2, LA3, LA4, LA5, LA6,   LA7 }, \
        { LB1,   LB2, LB3, LB4, LB5, LB6,   LB7 }, \
        { LC1,   LC2, LC3, LC4, LC5, LC6,   KC_NO }, \
        { LD1,   LD2, LD3, LD4, LD5, LD6,   LD7 }, \
        { LE1,   LE2, LE3, LE4, LE5, KC_NO, KC_NO }, \
        { KC_NO, LF2, LF3, LF4, LF5, LF6,   LF7 }, \
        { RA1,   RA2, RA3, RA4, RA5, RA6,   RA7 }, \
        { RB1,   RB2, RB3, RB4, RB5, RB6,   RB7 }, \
        { RC1,   RC2, RC3, RC4, RC5, RC6,   KC_NO }, \
        { RD1,   RD2, RD3, RD4, RD5, RD6,   RD7 }, \
        { RE1,   RE2, RE3, RE4, RE5, KC_NO, KC_NO }, \
        { KC_NO, RF2, RF3, RF4, RF5, RF6,   RF7 } \
    }
