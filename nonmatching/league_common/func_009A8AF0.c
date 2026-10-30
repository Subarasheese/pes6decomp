/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00229280(s32);
extern s32 func_0022C140(s32);
extern u8 func_0022BC60(s32);
s32 func_00221500(s32);                             /* extern */
s32 func_00224BC0(s32, s32);                        /* extern */
s32 func_00229010(s32);                             /* extern */
s32 func_00236680(s32);                             /* extern */
s32 func_00970870(s32);                             /* extern */

void func_009A8AF0(s32 arg0, s32 arg1, u8 *arg2, s32 arg3) {
    s32 spAC;
    s8 spB0;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s6;
    s32 temp_s6_2;
    s32 temp_s7;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a4;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4_2;
    s8 *var_a1;
    s8 *var_a5;
    s8 *var_s0;
    s8 *var_s3_2;
    s8 var_s1_3;
    s8 var_s4;
    u8 temp_v1;
    u8 var_s5;
    void *temp_a3;
    void *temp_v0;

    temp_a0 = arg0 & 0xFF;
    spAC = arg3;
    if (temp_a0 == 0) {
        temp_v0 = func_0022C140(arg1);
        var_s5 = M2C_FIELD(temp_v0, u8 *, 9);
        var_s3 = 0;
        if ((s32) var_s5 > 0) {
            var_s1 = M2C_FIELD(temp_v0, u8 *, 8) & 0xFF;
            var_s0 = &spB0;
            do {
                temp_s6 = func_0022BC60(var_s1 & 0xFF) & 0xFF;
                var_s4 = 0;
loop_4:
                temp_s2 = func_00224BC0(temp_s6, var_s4 & 0xFF) & 0xFFFF;
                if ((temp_s2 != 0) && (func_00970870(temp_s2) != 0) && (func_00221500(temp_s2) == 0)) {
                    var_s4 += 1;
                    if (var_s4 < 0x20) {
                        goto loop_4;
                    }
                }
                var_s3 += 1;
                *var_s0 = var_s4;
                var_s1 += 1;
                var_s0 += 1;
            } while (var_s3 < (s32) var_s5);
        }
    } else if (temp_a0 != 1) {
        var_s5 = 0;
        var_a0 = 0;
        var_a1 = &spB0;
        do {
            M2C_FIELD(var_a1, s8 *, 0) = 0;
            var_a0 += 8;
            M2C_FIELD(var_a1, s8 *, 1) = 0;
            M2C_FIELD(var_a1, s8 *, 2) = 0;
            M2C_FIELD(var_a1, s8 *, 3) = 0;
            M2C_FIELD(var_a1, s8 *, 4) = 0;
            M2C_FIELD(var_a1, s8 *, 5) = 0;
            M2C_FIELD(var_a1, s8 *, 6) = 0;
            M2C_FIELD(var_a1, s8 *, 7) = 0;
            var_a1 += 8;
        } while (var_a0 < 0x48);
    } else {
        var_s5 = 0;
        var_s0_2 = 0;
        var_s1_2 = arg1 & 0xFF;
        do {
            temp_v1 = M2C_FIELD(func_00229280(var_s1_2), u8 *, 2);
            var_s0_2 += 1;
            var_s1_2 += 1;
            var_s5 = (var_s5 + temp_v1) & 0xFF;
        } while (var_s0_2 < 4);
        temp_s6_2 = var_s5 & 0xFF;
        temp_v1_2 = func_00236680(arg1) & 0xFF;
        var_s2 = 0;
        if (temp_s6_2 > 0) {
            var_s4_2 = temp_v1_2 & 0xFF;
            var_s3_2 = &spB0;
            do {
                temp_s7 = func_00229010(var_s4_2 & 0xFF) & 0xFF;
                var_s1_3 = 0;
loop_18:
                temp_s0 = func_00224BC0(temp_s7, var_s1_3 & 0xFF) & 0xFFFF;
                if ((temp_s0 != 0) && (func_00970870(temp_s0) != 0) && (func_00221500(temp_s0) == 0)) {
                    var_s1_3 += 1;
                    if (var_s1_3 < 0x20) {
                        goto loop_18;
                    }
                }
                var_s2 += 1;
                *var_s3_2 = var_s1_3;
                var_s4_2 += 1;
                var_s3_2 += 1;
            } while (var_s2 < temp_s6_2);
        }
    }
    if (arg2 != NULL) {
        *arg2 = var_s5;
    }
    if (spAC != 0) {
        var_a4 = 0;
        var_a5 = &spB0;
        do {
            temp_a3 = spAC + var_a4;
            M2C_FIELD(temp_a3, u8 *, 0) = (u8) M2C_FIELD(var_a5, s8 *, 0);
            var_a4 += 8;
            M2C_FIELD(temp_a3, u8 *, 1) = (u8) M2C_FIELD(var_a5, u8 *, 1);
            M2C_FIELD(temp_a3, u8 *, 2) = (u8) M2C_FIELD(var_a5, u8 *, 2);
            M2C_FIELD(temp_a3, u8 *, 3) = (u8) M2C_FIELD(var_a5, u8 *, 3);
            M2C_FIELD(temp_a3, u8 *, 4) = (u8) M2C_FIELD(var_a5, u8 *, 4);
            M2C_FIELD(temp_a3, u8 *, 5) = (u8) M2C_FIELD(var_a5, u8 *, 5);
            M2C_FIELD(temp_a3, u8 *, 6) = (u8) M2C_FIELD(var_a5, u8 *, 6);
            M2C_FIELD(temp_a3, u8 *, 7) = (u8) M2C_FIELD(var_a5, u8 *, 7);
            var_a5 += 8;
        } while (var_a4 < 0x48);
    }
}
