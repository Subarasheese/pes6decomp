/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CDFA00[];

void func_00B91590(s32 arg0, s8 arg1) {
    M2C_FIELD((((void *)D_00CDFA00) + (arg0 * 0x18)), s8 *, 0x11) = arg1;
}
