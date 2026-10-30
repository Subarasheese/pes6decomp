/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_002B9DA8[];

void func_00106FB8(s32 arg0, u32 arg1, s32 arg2) {
    s32 temp_v1;

    temp_v1 = (arg0 - 0x64) * 0xC8;
    if (arg1 < (u32) M2C_FIELD((((void *)D_002B9DA8) + temp_v1), u32 *, 4)) {
        M2C_FIELD((((void *)D_002B9DA8) + ((arg1 * 0xC) + temp_v1)), s32 *, 0x10) = arg2;
    }
}
