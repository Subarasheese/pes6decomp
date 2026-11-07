/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00900500(s32, void *, s32);            /* extern */
extern char D_00900008[];

s32 func_008FC140(s32 arg0, void *arg1, s32 arg2, u32 arg3) {
    s32 temp_v0;
    u32 temp_a0;

    temp_v0 = ((u32) ((M2C_FIELD(arg1, s32 *, 8) + arg3) - 1) / arg3) * arg3;
    temp_a0 = temp_v0 + arg2;
    if ((u32) (M2C_FIELD(arg1, u32 *, 0) + M2C_FIELD(arg1, s32 *, 4)) < temp_a0) {
        func_00900500(arg0, ((void *)D_00900008) + 0x2168, arg0);
        return 0;
    }
    M2C_FIELD(arg1, u32 *, 0) = temp_a0;
    return temp_v0;
}
