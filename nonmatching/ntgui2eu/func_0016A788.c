/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0016AAD8(s32, s64, s32, s64, s32);
extern char D_005BFF94[];

void func_0016A788(void *arg0, u32 arg1, s32 arg2, s64 arg3, s32 arg4) {
    s32 var_a0;
    u32 temp_v0;
    void *var_s0;

    var_s0 = arg0 + 0xFA0;
    var_a0 = M2C_FIELD(var_s0, s32 *, 0x1C);
    temp_v0 = (*(s32 *)D_005BFF94) - M2C_FIELD(arg0, s64 *, 0xFC0);
    if (var_a0 != 0) {
        do {
            var_s0 = M2C_FIELD(var_s0, void **, 0x1C);
        } while (M2C_FIELD(var_s0, s32 *, 0x1C) != 0);
        var_a0 = M2C_FIELD(var_s0, s32 *, 0x1C);
    }
    M2C_FIELD(var_s0, void **, 0x1C) = func_0016AAD8(var_a0, (s64) ((temp_v0 < arg1) ? arg1 : (temp_v0 + 1)), arg2, arg3, arg4);
}
