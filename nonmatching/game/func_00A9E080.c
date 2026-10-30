/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00A1FE80(s32, s32);
extern s32 func_00A07C60(void *);
extern s32 func_00A13E50(s32, s32);
extern s32 func_009B30B0(s32, s32);
s32 func_00A9E080(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_a0;
    s32 temp_v0;
    s32 var_s4;
    u32 var_s1;

    var_s4 = arg3;
    if ((M2C_FIELD(arg0, s32 *, 0x1C) < 0x801) && (func_00A07C60(arg0) == 0)) {
        return var_s4;
    }
    var_s1 = func_009B30B0(arg1, arg2) & 0xFFFF;
    if (arg5 == 1) {
        if (func_00A07C60(arg0) != 0) {
            temp_a0 = M2C_FIELD(arg0, s32 *, 0x1C);
            var_s4 = func_00A1FE80(func_00A13E50(var_s4, ((temp_a0 * 0x5F) / 100) + ((u32) (temp_a0 * 0x5F) >> 0x1F)), 0x400);
        }
    }
    temp_v0 = var_s1 & 0xFFFF;
    if (temp_v0 >= 0x60) {
        return func_00A13E50(var_s4, 0x400);
    }
    if (temp_v0 < 0x11) {
        return var_s4;
    }
    if (temp_v0 < 0x21) {
        var_s1 = (var_s1 >> 1) & 0xFFFF;
    }
    return (s32) (var_s4 * arg4) / (s32) ((var_s1 & 0xFFFF) + arg4);
}
