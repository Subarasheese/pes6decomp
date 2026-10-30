/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229DF0(void);
extern void * func_0022C1E0(void);
extern s32 func_0022C140(s32);
extern s32 func_002293F0(void);
s32 func_00225B20(u8);                              /* extern */
s32 func_00236680(s32);                             /* extern */

void func_0099A890(void) {
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_v0_13;
    s32 temp_v0_16;
    s32 temp_v0_19;
    s32 temp_v0_21;
    s32 temp_v1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_s5;
    u8 *var_s1;
    u8 *var_s4_2;
    u8 *var_s4_3;
    u8 temp_a0;
    u8 temp_a0_2;
    void *temp_s6;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_14;
    void *temp_v0_15;
    void *temp_v0_17;
    void *temp_v0_18;
    void *temp_v0_20;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    void *var_s2_4;

    temp_s0 = func_002293F0();
    temp_s6 = func_0022C1E0();
    if ((temp_s0 != 0) && (temp_s6 != NULL)) {
        temp_v0 = func_00229DF0();
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s32 *, 8) = (s32) (M2C_FIELD(temp_v0, s32 *, 8) & ~1);
        }
        temp_v0_2 = func_00229DF0();
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 8) & ~2);
        }
        temp_v0_3 = func_00229DF0();
        if (temp_v0_3 != NULL) {
            M2C_FIELD(temp_v0_3, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_3, s32 *, 8) & ~4);
        }
        temp_v0_4 = func_00229DF0();
        if (temp_v0_4 != NULL) {
            M2C_FIELD(temp_v0_4, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_4, s32 *, 8) & ~8);
        }
        temp_v0_5 = func_00229DF0();
        if (temp_v0_5 != NULL) {
            M2C_FIELD(temp_v0_5, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_5, s32 *, 8) & ~0x40);
        }
        temp_v0_6 = func_00229DF0();
        if (temp_v0_6 != NULL) {
            M2C_FIELD(temp_v0_6, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_6, s32 *, 8) & ~0x80);
        }
        temp_v0_7 = func_00229DF0();
        if (temp_v0_7 != NULL) {
            M2C_FIELD(temp_v0_7, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_7, s32 *, 8) & ~0x100);
        }
        temp_v0_8 = func_00229DF0();
        if (temp_v0_8 != NULL) {
            M2C_FIELD(temp_v0_8, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_8, s32 *, 8) & ~0x200);
        }
        temp_v0_9 = func_00229DF0();
        if (temp_v0_9 != NULL) {
            M2C_FIELD(temp_v0_9, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_9, s32 *, 8) & ~0x20);
        }
        temp_v0_10 = func_00229DF0();
        if (temp_v0_10 != NULL) {
            M2C_FIELD(temp_v0_10, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_10, s32 *, 8) | 0x10);
        }
        var_s2 = 0;
        var_s4 = 0;
loop_23:
        temp_s3 = var_s4 & 0xFF;
        var_s5 = 0;
        var_s1 = temp_s0 + (func_00236680(temp_s3) & 0xFF);
loop_24:
        if (func_00225B20(*var_s1) == 1) {
            temp_v0_11 = func_00229DF0();
            if (temp_v0_11 != NULL) {
                M2C_FIELD(temp_v0_11, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_11, s32 *, 8) | 1);
            }
            temp_v0_12 = func_00229DF0();
            if (temp_v0_12 != NULL) {
                M2C_FIELD(temp_v0_12, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_12, s32 *, 8) | 2);
            }
            temp_v0_13 = func_0022C140(temp_s3);
            if (temp_v0_13 != 0) {
                M2C_FIELD(temp_v0_13, s8 *, 0xA) = 1;
            }
            var_s2 = 1;
        } else {
            var_s5 += 1;
            var_s1 += 1;
            if (var_s5 < 0x10) {
                goto loop_24;
            }
        }
        temp_v1 = var_s2 & 0xFF;
        if (temp_v1 != 1) {
            var_s4 += 1;
            if (var_s4 < 4) {
                goto loop_23;
            }
        }
        if (temp_v1 == 0) {
            temp_v0_14 = func_00229DF0();
            if (temp_v0_14 != NULL) {
                M2C_FIELD(temp_v0_14, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_14, s32 *, 8) | 4);
            }
            temp_v0_15 = func_00229DF0();
            if (temp_v0_15 != NULL) {
                M2C_FIELD(temp_v0_15, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_15, s32 *, 8) | 8);
            }
            temp_v0_16 = func_0022C140(4);
            if (temp_v0_16 != 0) {
                M2C_FIELD(temp_v0_16, s8 *, 0xA) = 1;
            }
        }
        var_s3 = 0;
        var_s2_2 = 0;
loop_43:
        var_s1_2 = 0;
        var_s4_2 = temp_s0 + (func_00236680((var_s2_2 + 5) & 0xFF) & 0xFF);
loop_44:
        temp_a0 = *var_s4_2;
        if (((s32) temp_a0 < 0x48) && (func_00225B20(temp_a0) == 1)) {
            temp_v0_17 = func_00229DF0();
            if (temp_v0_17 != NULL) {
                M2C_FIELD(temp_v0_17, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_17, s32 *, 8) | 0x40);
            }
            var_s3 = 1;
        } else {
            var_s1_2 += 1;
            var_s4_2 += 1;
            if (var_s1_2 < 4) {
                goto loop_44;
            }
        }
        if ((var_s3 & 0xFF) != 1) {
            var_s2_2 += 1;
            if (var_s2_2 < 4) {
                goto loop_43;
            }
        }
        var_s3_2 = 0;
        var_s2_3 = 0;
loop_53:
        var_s1_3 = 0;
        var_s4_3 = temp_s0 + (func_00236680((var_s2_3 + 9) & 0xFF) & 0xFF);
loop_54:
        temp_a0_2 = *var_s4_3;
        if (((s32) temp_a0_2 < 0x48) && (func_00225B20(temp_a0_2) == 1)) {
            temp_v0_18 = func_00229DF0();
            if (temp_v0_18 != NULL) {
                M2C_FIELD(temp_v0_18, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_18, s32 *, 8) | 0x80);
            }
            var_s3_2 = 1;
        } else {
            var_s1_3 += 1;
            var_s4_3 += 1;
            if (var_s1_3 < 4) {
                goto loop_54;
            }
        }
        if ((var_s3_2 & 0xFF) != 1) {
            var_s2_3 += 1;
            if (var_s2_3 < 4) {
                goto loop_53;
            }
        }
        temp_v0_19 = func_0022C140(5);
        if ((temp_v0_19 != 0) && (var_s1_4 = 0, ((s32) M2C_FIELD(temp_v0_19, u8 *, 9) > 0))) {
            var_s2_4 = temp_s6 + (M2C_FIELD(temp_v0_19, u8 *, 8) & 0xFF);
loop_65:
            if (func_00225B20(M2C_FIELD(var_s2_4, u8 *, 0xC4)) != 1) {
                var_s1_4 += 1;
                var_s2_4 += 1;
                if (var_s1_4 >= (s32) M2C_FIELD(temp_v0_19, u8 *, 9)) {

                } else {
                    goto loop_65;
                }
            } else {
                temp_v0_20 = func_00229DF0();
                if (temp_v0_20 != NULL) {
                    M2C_FIELD(temp_v0_20, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_20, s32 *, 8) | 0x200);
                }
                temp_v0_21 = func_0022C140(5);
                if (temp_v0_21 != 0) {
                    M2C_FIELD(temp_v0_21, s8 *, 0xA) = 1;
                }
            }
        }
    }
}
