/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BC3D0(s32, s32, s32, s32);
extern s32 func_002F7970(void);
extern void func_001BC360(void);
extern char D_003AB4A8[];
extern char D_003AE970[];
extern char D_003AE998[];
extern char D_003AE9AC[];
extern char D_00592800[];
extern char D_0059295B[];
extern char D_0059295C[];
extern char D_0087F2C0[];
extern M2C_UNK func_0026B7E0;

s32 func_0026BC60(void) {
    M2C_UNK *var_s0_2;
    s16 var_s1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s2_2;
    s8 *var_s0;
    u8 *var_v1;
    u8 *var_v1_2;

    var_s2_2 = 0;
    var_s1 = 0;
    var_s0 = ((void *)D_003AB4A8);
    do {
        if (func_002F7970() != 0) {
            if (var_s2_2 == 0) {
                var_a0 = 0;
            } else {
                var_a0 = -1;
            }
        } else {
            var_a0 = 0;
            var_v1 = ((void *)D_00592800);
loop_7:
            if (var_s2_2 == *var_v1) {

            } else {
                var_a0 += 1;
                var_v1 += 0x28;
                if (var_a0 >= 8) {
                    if ((*(u8 *)D_0059295B) == var_s2_2) {
                        var_a0 = var_s2_2;
                    } else if ((*(u8 *)D_0059295C) == var_s2_2) {
                        var_a0 = var_s2_2;
                    } else {
                        var_a0 = -1;
                    }
                } else {
                    goto loop_7;
                }
            }
        }
        if (var_a0 >= 0) {
            var_s1 |= 1 << *var_s0;
        }
        var_s2_2 += 1;
        var_s0 += 1;
    } while (var_s2_2 < 8);
    (*(s16 *)D_003AE998) = var_s1;
    var_s2 = 0;
    var_s1_2 = 0;
    var_s0_2 = ((void *)D_003AE970);
    do {
        func_001BC360();
        if (func_002F7970() != 0) {
            if (var_s1_2 == 0) {
                var_a0_2 = 0;
            } else {
                var_a0_2 = -1;
            }
        } else {
            var_a0_2 = 0;
            var_v1_2 = ((void *)D_00592800);
loop_25:
            if (var_s1_2 == *var_v1_2) {

            } else {
                var_a0_2 += 1;
                var_v1_2 += 0x28;
                if (var_a0_2 >= 8) {
                    if ((*(u8 *)D_0059295B) == var_s1_2) {
                        var_a0_2 = var_s1_2;
                    } else if ((*(u8 *)D_0059295C) == var_s1_2) {
                        var_a0_2 = var_s1_2;
                    } else {
                        var_a0_2 = -1;
                    }
                } else {
                    goto loop_25;
                }
            }
        }
        if (var_a0_2 != -1) {
            if (func_002F7970() != 0) {
                M2C_FIELD(var_s0_2, s32 *, 0x3C) = func_001BC3D0(var_s1_2, 0xE, 0, (s32) ((void *)D_0087F2C0));
            } else {
                M2C_FIELD(var_s0_2, s32 *, 0x3C) = func_001BC3D0(var_s1_2, 0xE, 0, (s32) &func_0026B7E0);
            }
            var_s2 += 1;
        } else {
            M2C_FIELD(var_s0_2, s32 *, 0x3C) = -1;
        }
        var_s1_2 += 1;
        var_s0_2 += 4;
    } while (var_s1_2 < 8);
    if (var_s2 == 0) {
        (*(s32 *)D_003AE9AC) = func_001BC3D0(0, 0xE, 0, (s32) &func_0026B7E0);
    }
    return var_s2;
}
