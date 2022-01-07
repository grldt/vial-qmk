#pragma once

#include "quantum.h"

#define LAYOUT(\
  K10, K00, K01, K02, K03, K04, K05, K06,     K57, K56, K55, K54, K53, K52, K51, K50, \
  K20,    K11,   K12, K13, K14, K15, K16,     K67, K66, K65, K64, K63, K62, K61, K60, \
  K30,    K21,   K22, K23, K24, K25, K26,     K77, K76, K75, K74, K73, K72,   K71,    \
          K31,   K32, K33, K34, K35, K36,     K87, K86, K85, K84, K83, K82, K81,   K80, \
          K41,             K43, K44, K46,     K97,           K94,    K93,     K92, K91, K90 \
) \
{ \
  { K00,   K01, K02,   K03,   K04, K05,   K06,   KC_NO }, \
  { K10,   K11, K12,   K13,   K14, K15,   K16,   KC_NO }, \
  { K20,   K21, K22,   K23,   K24, K25,   K26,   KC_NO }, \
  { K30,   K31, K32,   K33,   K34, K35,   K36,   KC_NO }, \
  { KC_NO, K41, KC_NO, K43,   K44, KC_NO, K46,   KC_NO }, \
  { K50,   K51, K52,   K53,   K54, K55,   K56,   K57   }, \
  { K60,   K61, K62,   K63,   K64, K65,   K66,   K67   }, \
  { KC_NO, K71, K72,   K73,   K74, K75,   K76,   K77   }, \
  { K80,   K81, K82,   K83,   K84, K85,   K86,   K87   }, \
  { K90,   K91, K92,   K93,   K94, KC_NO, KC_NO, K97   } \
}
