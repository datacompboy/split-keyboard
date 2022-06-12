#pragma once

#include "quantum.h"

#define LAYOUT( \
	K00, K01, K02, K03, K04, K05, K06, K07, \
	K10, K11, K12, K13, K14, K15, K16, K17, \
	K20,      K22, K23, K24, K25, K26, K27, \
	K30,      K32, K33, K34, K35, K36, K37, \
	K40,      K42, K43, K44, K45, K46, K47, \
	K50,      K52, K53, K54,      K56,  \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, \
	K100, K101, K102, K103, K104, K105, K106, K107,       K109, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, \
	K300, K301, K302, K303, K304, K305, K306,       K308, K309, \
	K400, K401, K402, K403, K404, K405,       K407, K408, K409, \
	      K501,       K503, K504, K505,       K507, K508, K509  \
) { \
	{ K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,  KC_NO,  KC_NO }, \
	{ K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,  KC_NO,  KC_NO }, \
	{ K20,   KC_NO, K22,   K23,   K24,   K25,   K26,   K27,  KC_NO,  KC_NO }, \
	{ K30,   KC_NO, K32,   K33,   K34,   K35,   K36,   K37,  KC_NO,  KC_NO }, \
	{ K40,   KC_NO, K42,   K43,   K44,   K45,   K46,   K47,  KC_NO,  KC_NO }, \
	{ K50,   KC_NO, K52,   K53,   K54,   KC_NO, K56,   KC_NO,KC_NO,  KC_NO },  \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  KC_NO, K109 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209 }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  KC_NO, K308,  K309 }, \
	{ K400,  K401,  K402,  K403,  K404,  K405,  KC_NO, K407,  K408,  K409 }, \
	{ KC_NO, K501,  KC_NO, K503,  K504,  K505,  KC_NO, K507,  K508,  K509 }  \
}

// Override function to hard-code leftness at compile time
bool is_keyboard_left(void);
