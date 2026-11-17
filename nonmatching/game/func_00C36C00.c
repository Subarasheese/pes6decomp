/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00291BC0(s32, s32, s32, s32);
extern s32 func_00292B90(void);
extern s32 func_00291FF0(s32, s32, s32, s32);
extern s32 func_00B789F0();
extern s32 func_00B78B60();
extern s32 func_00C01090(s32);
extern char D_00591C09[];
extern char D_005922E9[];
extern char D_00CB3300[];

s32 func_00C36C00(s32 arg0) {
    s16 temp_v1;
    s16 temp_v0_2;
    s16 var_a0;
    s16 var_s0;
    s16 var_s1;
    s32 temp_v0;
    s32 var_s2;

    if (func_00B789F0() == 0) {
        return 0;
    }
    temp_v0 = func_00B78B60();
    if (temp_v0 == 2) {
        var_s2 = 1;
    } else if (temp_v0 == 1 || temp_v0 == 0) {
        if (arg0 != temp_v0) {
            var_s2 = 3;
        } else {
            var_s2 = 2;
        }
    } else {
        var_s2 = 1;
    }
    if (func_00C01090(0x2B) != 0) {
        if ((*(u8 *)D_005922E9) != 0) {
            var_a0 = 3;
            var_s1 = 0;
        } else {
            var_a0 = 0;
            var_s1 = 3;
        }
    } else {
        var_a0 = M2C_FIELD(*(void **)D_00CB3300, s16 *, 8);
        var_s1 = M2C_FIELD(*(void **)D_00CB3300, s16 *, 0x2FC);
        temp_v1 = M2C_FIELD(*(void **)D_00CB3300, s16 *, 0x300);
        temp_v0_2 = M2C_FIELD(*(void **)D_00CB3300, s16 *, 0xC);
        if (temp_v1 < temp_v0_2) {
            var_a0 += 1;
        } else if (temp_v0_2 < temp_v1) {
            var_s1 += 1;
        }
    }
    if (arg0 != 0) {
        var_s0 = var_s1;
        var_s1 = var_a0;
    } else {
        var_s0 = var_a0;
    }
    if (func_00291FF0(arg0, 0, var_s0, var_s1) != 0) {
        return 4;
    }
    if (func_00291FF0(arg0 == 0, 0, var_s1, var_s0) != 0) {
        if (func_00292B90() == 0) {
            return 1;
        }
        return 7;
    }
    if ((*(u8 *)D_00591C09) != 0xE) {
        if (func_00291FF0(arg0, 5, var_s0, var_s1) != 0) {
            return 5;
        }
        if (func_00291FF0(arg0, 4, var_s0, var_s1) != 0) {
            return 6;
        }
        if (func_00291BC0(arg0, 6, var_s0, var_s1) != 0) {
            return 8;
        }
        if (func_00291BC0(arg0, 4, var_s0, var_s1) != 0) {
            return 8;
        }
        return var_s2;
    }
    if (func_00291FF0(arg0, 1, var_s0, var_s1) != 0) {
        return 6;
    }
    if (func_00291FF0(arg0, 4, var_s0, var_s1) != 0) {
        return 6;
    }
    if (func_00291FF0(arg0, 2, var_s0, var_s1) != 0) {
        return 6;
    }
    if (func_00291BC0(arg0, 2, var_s0, var_s1) != 0) {
        return 8;
    }
    if (func_00291BC0(arg0, 1, var_s0, var_s1) != 0) {
        return 8;
    }
    if (func_00291BC0(arg0, 4, var_s0, var_s1) != 0) {
        return 8;
    }
    return var_s2;
}
