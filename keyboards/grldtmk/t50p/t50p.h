#pragma once

#include "quantum.h"

#define LAYOUT(\
  K00, K01, K02, K03, K04, K05, K06, K45, K44, K43, K42, K41, K40, K50, \
  K10, K11, K12, K13, K14, K15, K16, K55, K54, K53, K52, K51, K60, \
  K20, K21, K22, K23, K24, K25, K26, K65, K64, K63, K62, K61, K70, \
  K30, K31, K32, K33, K34, K35,           K74, K73, K72, K71 \
) \
{ \
  { K00, K01, K02, K03, K04, K05,   K06 }, \
  { K10, K11, K12, K13, K14, K15,   K16 }, \
  { K20, K21, K22, K23, K24, K25,   K26 }, \
  { K30, K31, K32, K33, K34, K35,   KC_NO }, \
  { K40, K41, K42, K43, K44, K45,   KC_NO }, \
  { K50, K51, K52, K53, K54, K55,   KC_NO }, \
  { K60, K61, K62, K63, K64, K65,   KC_NO }, \
  { K70, K71, K72, K73, K74, KC_NO, KC_NO } \
}
