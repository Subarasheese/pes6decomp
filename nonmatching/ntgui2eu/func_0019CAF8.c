/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019CA68(s32);                             /* extern */
s32 func_0019DA90(M2C_UNK (*)(s32, s32 *, M2C_UNK), s32, s32 *, M2C_UNK *, s32); /* extern */
s32 func_001AAE38(s32);                             /* extern */
s32 func_001AB4F8(M2C_UNK, s32);                    /* extern */
s32 func_001AB560(s32, s64);                        /* extern */
s32 func_001AB7E8(s32, s64);                        /* extern */
s32 func_001AB928(s32, s64);                        /* extern */
extern char D_006002D8[];
extern char D_006002E0[];
extern char D_006002E8[];
extern char D_006002F0[];
extern char D_006002F8[];

s32 func_0019CAF8(M2C_UNK (*arg0)(s32, s32 *, M2C_UNK), s32 arg1, s32 *arg2, s32 arg3) {
    M2C_UNK *var_a3;
    s32 temp_s4;
    s32 var_s0;
    s32 var_s2;
    s32 var_s4;

    var_s4 = 0;
    var_s2 = 0;
    var_s0 = arg3;
    if (*arg2 == 0) {
        return 0;
    }
    if (func_001AB928(var_s0, 0) < 0) {
        var_s4 = 1;
        var_s0 = func_001AB4F8(0, var_s0);
        arg0(arg1, arg2, 0x2D);
        *arg2 -= 1;
    }
    if (func_001AB928(var_s0, (*(s64 *)D_006002E8)) < 0) {
loop_7:
        if (func_001AB928(var_s0, (*(s64 *)D_006002F0)) < 0) {
            var_s2 -= 1;
            var_s0 = func_001AB560(var_s0, 0x8048 << 0x2F);
            goto loop_7;
        }
    } else if (func_001AB928(var_s0, 0xFFC0 << 0x2E) >= 0) {
loop_13:
        if (func_001AB928(var_s0, 0xFFC0 << 0x2E) >= 0) {
            var_s2 += 1;
            var_s0 = func_001AB7E8(var_s0, 0x8048 << 0x2F);
            goto loop_13;
        }
    }
    temp_s4 = var_s4 + func_0019DA90(arg0, arg1, arg2, (M2C_UNK *)0x6002D0, func_0019CA68(func_001AAE38(func_001AB560(var_s0, (*(s64 *)D_006002F8)))));
    if (var_s2 >= 0) {
        var_a3 = ((void *)D_006002D8);
    } else {
        var_a3 = ((void *)D_006002E0);
    }
    return temp_s4 + func_0019DA90(arg0, arg1, arg2, var_a3, var_s2);
}
