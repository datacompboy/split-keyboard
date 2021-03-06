#pragma once

#include "quantum.h"

#define LAYOUT( \
	K00, K01, K02, K03, K04, K05, K06, K07, \
	K10, K11, K12, K13, K14, K15, K16, K17, \
	K20,      K22, K23, K24, K25, K26, K27, \
	K30,      K32, K33, K34, K35, K36, K37, \
	K40,      K42, K43, K44, K45, K46, K47, \
	K50,      K52, K53, K54,      K56  \
) { \
	{ K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07 }, \
	{ K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17 }, \
	{ K20,   KC_NO, K22,   K23,   K24,   K25,   K26,   K27 }, \
	{ K30,   KC_NO, K32,   K33,   K34,   K35,   K36,   K37 }, \
	{ K40,   KC_NO, K42,   K43,   K44,   K45,   K46,   K47 }, \
	{ K50,   KC_NO, K52,   K53,   K54,   KC_NO, K56,   KC_NO }  \
}
