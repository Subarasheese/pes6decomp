/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE8E20[];

void func_00BF43B0(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((arg1 * 0x88) + (((void *)D_00CE8E20) + (arg0 * 0x146C))), s32 *, 0x7C) = arg2;
}
