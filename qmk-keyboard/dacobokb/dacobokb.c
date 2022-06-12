#include "dacobokb.h"
#include "config.h"

bool is_keyboard_left(void)
{
#ifdef LEFT
#pragma message "kb.c: Compiled left version"
	return true;
#else
#pragma message "kb.c: Compiled right version"
	return false;
#endif
}
