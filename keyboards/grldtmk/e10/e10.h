#pragma once

#include "quantum.h"

#define LAYOUT(\
  K00,     K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A \
) \
{ \
  { K00, KC_NO, K02, K03, K04, K05, K06, K07, K08, K09, K0A }, \
  { K10,  K11,  K12, K13, K14, K15, K16, K17, K18, K19, K1A } \
}
