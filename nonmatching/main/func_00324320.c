/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00235B60(void);
extern s32 func_002371A0(s32);
s32 func_002321B0(s32);                             /* extern */
s32 func_00235360(s32);                             /* extern */
s8 func_002355C0(s32);                              /* extern */
s32 func_00235CB0(s32);                             /* extern */
s32 func_00235E30(s32);                             /* extern */
s16 func_00235F70(s32);                             /* extern */
s16 func_002360B0(s32);                             /* extern */
extern char D_00591C09[];

void func_00324320(void *arg0) {
    s16 temp_a2;
    s16 temp_a2_2;
    s16 temp_a4;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_s1;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a3;
    s32 var_a5;
    s32 var_a5_2;
    s32 var_s3;
    s32 var_v1;
    s8 temp_v0;
    u16 temp_s2;
    void *temp_s0;
    void *var_a0;
    void *var_a0_2;
    void *var_a2;
    void *var_a2_2;
    void *var_a3_2;
    void *var_a3_3;
    void *var_a4;
    void *var_a6;
    void *var_s4;

    var_a3 = 0;
    M2C_FIELD(arg0, s16 *, 0x8F8) = 0;
    temp_s0 = arg0 + 0x8F8;
    M2C_FIELD(arg0, s8 *, 0x8FA) = 0;
    var_a0 = temp_s0;
    do {
        M2C_FIELD(var_a0, s16 *, 4) = 0xFFFF;
        var_a3 += 1;
        M2C_FIELD(var_a0, s16 *, 6) = -1;
        M2C_FIELD(var_a0, s16 *, 8) = -1;
        M2C_FIELD(var_a0, s16 *, 0xA) = -1;
        M2C_FIELD(var_a0, s16 *, 0xC) = -1;
        M2C_FIELD(var_a0, s8 *, 0xE) = 0;
        M2C_FIELD(var_a0, s8 *, 0xF) = 0;
        M2C_FIELD(var_a0, s8 *, 0x10) = 0;
        M2C_FIELD(var_a0, s8 *, 0x11) = 0;
        M2C_FIELD(var_a0, s8 *, 0x12) = 0;
        var_a0 += 0x10;
    } while (var_a3 < 0x14);
    M2C_FIELD(temp_s0, s16 *, 0x144) = 0xFFFF;
    M2C_FIELD(temp_s0, s16 *, 0x146) = -1;
    M2C_FIELD(temp_s0, s16 *, 0x148) = -1;
    M2C_FIELD(temp_s0, s16 *, 0x154) = 0xFFFF;
    M2C_FIELD(temp_s0, s16 *, 0x156) = -1;
    M2C_FIELD(temp_s0, s16 *, 0x158) = -1;
    if ((*(u8 *)D_00591C09) != 0xE) {
        if (M2C_FIELD(arg0, s32 *, 0) != 6) {
            return;
        }
        M2C_FIELD(arg0, s16 *, 0x8F8) = (s16) (func_002321B0(func_00235B60()) & 0xFF);
        M2C_FIELD(temp_s0, s8 *, 2) = 1;
        var_s3 = 0;
        if (M2C_FIELD(arg0, s16 *, 0x8F8) > 0) {
            var_s4 = temp_s0;
            do {
                temp_s2 = func_00235360(var_s3 & 0xFF) & 0xFFFF;
                temp_v0 = func_002355C0(var_s3 & 0xFF);
                M2C_FIELD(var_s4, s8 *, 0x13) = temp_v0;
                temp_s1 = temp_v0 & 0xFF;
                if ((temp_s2 != 0x127) && (temp_s2 != 0x126)) {
                    M2C_FIELD(var_s4, u16 *, 4) = temp_s2;
                } else {
                    M2C_FIELD(var_s4, u16 *, 4) = func_002371A0(temp_s2 & 0xFFFF);
                }
                M2C_FIELD(var_s4, s16 *, 6) = (s16) (func_00235E30(temp_s1 & 0xFF) & 0xFF);
                M2C_FIELD(var_s4, s16 *, 8) = (s16) (func_00235CB0(temp_s1 & 0xFF) & 0xFF);
                M2C_FIELD(var_s4, s16 *, 0xA) = func_002360B0(temp_s1 & 0xFF);
                M2C_FIELD(var_s4, s16 *, 0xC) = func_00235F70(temp_s1 & 0xFF);
                if (M2C_FIELD(var_s4, u16 *, 4) == M2C_FIELD(arg0, u16 *, 0x3A)) {
                    var_a3_2 = var_s4 + 4;
                    var_a2 = temp_s0 + 0x144;
                    var_a1 = 4;
                    do {
                        var_a1 -= 1;
                        temp_v1 = M2C_FIELD(var_a3_2, s16 *, 2);
                        M2C_FIELD(var_a2, s16 *, 0) = (s16) M2C_FIELD(var_a3_2, s16 *, 0);
                        var_a3_2 += 4;
                        M2C_FIELD(var_a2, s16 *, 2) = temp_v1;
                        var_a2 += 4;
                    } while (var_a1 > 0);
                }
                if (M2C_FIELD(var_s4, u16 *, 4) == M2C_FIELD(arg0, u16 *, 0x3C)) {
                    var_a3_3 = var_s4 + 4;
                    var_a2_2 = temp_s0 + 0x154;
                    var_a1_2 = 4;
                    do {
                        var_a1_2 -= 1;
                        temp_v1_2 = M2C_FIELD(var_a3_3, s16 *, 2);
                        M2C_FIELD(var_a2_2, s16 *, 0) = (s16) M2C_FIELD(var_a3_3, s16 *, 0);
                        var_a3_3 += 4;
                        M2C_FIELD(var_a2_2, s16 *, 2) = temp_v1_2;
                        var_a2_2 += 4;
                    } while (var_a1_2 > 0);
                }
                var_s3 += 1;
                var_s4 += 0x10;
            } while (var_s3 < M2C_FIELD(arg0, s16 *, 0x8F8));
        }
        var_v1 = 0;
        var_a0_2 = temp_s0;
        do {
            temp_a4 = M2C_FIELD(var_a0_2, s16 *, 0x148);
            if (temp_a4 == 1) {
                temp_a2 = M2C_FIELD(arg0, s16 *, 0x8F8);
                var_a5 = 0;
                if (temp_a2 > 0) {
                    var_a4 = temp_s0;
loop_24:
                    if (M2C_FIELD(var_a4, s16 *, 8) != 1) {
                        M2C_FIELD(var_a0_2, s8 *, 0x150) = (s8) (M2C_FIELD(var_a0_2, s16 *, 0x146) - M2C_FIELD((temp_s0 + (var_a5 * 0x10)), s16 *, 6));
                    } else {
                        var_a5 += 1;
                        var_a4 += 0x10;
                        if (var_a5 >= temp_a2) {

                        } else {
                            goto loop_24;
                        }
                    }
                }
            } else {
                temp_a2_2 = M2C_FIELD(arg0, s16 *, 0x8F8);
                var_a5_2 = 0;
                if (temp_a2_2 > 0) {
                    var_a6 = temp_s0;
loop_30:
                    if (M2C_FIELD(var_a6, s16 *, 8) == temp_a4) {
                        M2C_FIELD(var_a0_2, s8 *, 0x150) = (s8) (M2C_FIELD((temp_s0 + (var_a5_2 * 0x10)), s16 *, -0xA) - M2C_FIELD(var_a0_2, s16 *, 0x146));
                    } else {
                        var_a5_2 += 1;
                        var_a6 += 0x10;
                        if (var_a5_2 < temp_a2_2) {
                            goto loop_30;
                        }
                    }
                }
            }
            var_v1 += 1;
            var_a0_2 += 0x10;
        } while (var_v1 < 2);
    }
}
