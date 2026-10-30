/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005F0970[];
extern char D_005F0974[];

s32 func_003324B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a0;
    s32 var_a5;
    void *temp_v0;

    if ((arg1 == 0) && (arg0 == 0)) {
        return 0;
    }
    var_a5 = (*(s32 *)D_005F0974) - 1;
    if (var_a5 < 0) {
        var_a5 = 0x1F;
    }
    if ((M2C_FIELD((((void *)D_005F0970) + (var_a5 * 0x14)), s32 *, 0x14) == arg1) && (arg0 == 0)) {
        return 0;
    }
    if (((s32) (M2C_FIELD(((void *)D_005F0970), s32 *, 4) + 1) % 32) == M2C_FIELD(((void *)D_005F0970), s32 *, 0)) {
        return 0;
    }
    temp_v0 = ((void *)D_005F0970) + (M2C_FIELD(((void *)D_005F0970), s32 *, 4) * 0x14);
    M2C_FIELD(temp_v0, s32 *, 0x10) = arg0;
    M2C_FIELD(temp_v0, s32 *, 0x14) = arg1;
    M2C_FIELD(temp_v0, s32 *, 0x18) = arg2;
    M2C_FIELD(temp_v0, s32 *, 0x1C) = arg3;
    M2C_FIELD(temp_v0, s32 *, 0x20) = arg4;
    temp_a0 = M2C_FIELD(((void *)D_005F0970), s32 *, 4) + 1;
    M2C_FIELD(((void *)D_005F0970), s32 *, 4) = temp_a0;
    M2C_FIELD(((void *)D_005F0970), s32 *, 4) = (s32) (temp_a0 % 32);
    M2C_FIELD(((void *)D_005F0970), s32 *, 8) = (s32) (M2C_FIELD(((void *)D_005F0970), s32 *, 8) + 1);
    return 1;
}
