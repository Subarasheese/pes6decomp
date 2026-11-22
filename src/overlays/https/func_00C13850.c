/* compiler: ee-gcc-3.2-Os-G0 */
#include "types.h"
extern s32 DelayThread(s32 microseconds);
void func_00C13850(s32 milliseconds) { DelayThread(milliseconds * 1000); }
