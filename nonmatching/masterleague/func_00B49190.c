/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern u8 func_002243B0(s32, s32);
extern void * func_00223C10(void);
void *func_00223E00(s16);                           /* extern */
s32 func_00224BC0(s32, s32);                        /* extern */
u16 func_00225680(u8);                              /* extern */
s32 func_00970870(s16);                             /* extern */
extern void *D_003EAE74;

void func_00B49190(s8 arg0) {
    u16 spA0;
    u16 spB0;
    s16 temp_s2;
    s16 temp_s4;
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_s7_2;
    s32 var_a2;
    s32 var_fp;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_s6;
    u16 temp_s7;
    u16 temp_v1;
    u8 *temp_v0_2;
    u8 temp_a0_2;
    u8 temp_s1;
    void *temp_s5;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;
    void *var_a1;

    temp_s5 = D_003EAE74;
    if (temp_s5 != NULL) {
        M2C_FIELD(temp_s5, s8 *, 0x318) = 0;
        M2C_FIELD(temp_s5, s8 *, 0x319) = arg0;
        M2C_FIELD(temp_s5, s8 *, 0x31B) = 0;
        M2C_FIELD(temp_s5, s8 *, 0x5B0) = 0;
        M2C_FIELD(temp_s5, s8 *, 0x5C4) = 0;
        M2C_FIELD(temp_s5, u8 *, 0x51C) = func_00225820();
        M2C_FIELD(temp_s5, u16 *, 0x51E) = func_00225680(M2C_FIELD(temp_s5, u8 *, 0x51C));
        var_s3 = 0;
        M2C_FIELD(temp_s5, u8 *, 0x520) = 0U;
        temp_s1 = M2C_FIELD(temp_s5, u8 *, 0x51C);
        temp_s7 = M2C_FIELD(temp_s5, u16 *, 0x51E);
loop_2:
        if ((s32) M2C_FIELD(temp_s5, u8 *, 0x520) < 0x20) {
            temp_s4 = func_00224BC0(temp_s1 & 0xFF, var_s3 & 0xFF) & 0xFFFF;
            if ((temp_s4 != 0) && ((func_002243B0(temp_s1 & 0xFF, var_s3 & 0xFF) & 0xFF) != 0xFF) && (func_00970870(temp_s4) != 0)) {
                temp_v0 = func_00223E00(temp_s4);
                if (temp_v0 != NULL) {
                    temp_v0_2 = func_00223C10();
                    if ((temp_v0_2 != NULL) && ((M2C_FIELD(temp_v0, u8 *, 6) & 0x3F) == 3)) {
                        temp_a0 = *temp_v0_2 & 0xF;
                        if ((temp_a0 != 7) && (temp_a0 != 6) && (temp_a0 != 5)) {
                            M2C_FIELD((temp_s5 + (M2C_FIELD(temp_s5, u8 *, 0x520) * 2)), s16 *, 0x522) = temp_s4;
                            M2C_FIELD((temp_s5 + (M2C_FIELD(temp_s5, u8 *, 0x520) * 2)), u16 *, 0x562) = temp_s7;
                            M2C_FIELD(temp_s5, u8 *, 0x520) = (u8) (M2C_FIELD(temp_s5, u8 *, 0x520) + 1);
                        }
                    }
                }
            }
            var_s3 += 1;
            if (var_s3 < 0x20) {
                goto loop_2;
            }
        }
        if (((arg0 & 0xFF) == 1) && ((s32) M2C_FIELD(temp_s5, u8 *, 0x520) < 0x20)) {
loop_16:
            var_fp = 0;
            var_s6 = -1;
            var_s4 = 0;
            do {
                temp_s7_2 = func_00225680(var_s4 & 0xFF) & 0xFFFF;
                if (temp_s7_2 != M2C_FIELD(temp_s5, u16 *, 0x51E)) {
                    var_s3_2 = 0;
                    do {
                        temp_s2 = func_00224BC0(var_s4 & 0xFF, var_s3_2 & 0xFF) & 0xFFFF;
                        if (temp_s2 != 0) {
                            temp_a0_2 = M2C_FIELD(temp_s5, u8 *, 0x520);
                            var_a2 = 0;
                            if ((s32) temp_a0_2 > 0) {
                                var_a1 = temp_s5;
loop_22:
                                if (temp_s2 != M2C_FIELD(var_a1, u16 *, 0x522)) {
                                    var_a2 += 1;
                                    var_a1 += 2;
                                    if (var_a2 >= (s32) temp_a0_2) {

                                    } else {
                                        goto loop_22;
                                    }
                                }
                            }
                            if ((var_a2 >= (s32) temp_a0_2) && ((func_002243B0(var_s4 & 0xFF, var_s3_2 & 0xFF) & 0xFF) != 0xFF) && (func_00970870(temp_s2) != 0)) {
                                temp_v0_3 = func_00223E00(temp_s2);
                                if (temp_v0_3 != NULL) {
                                    temp_v0_4 = func_00223C10();
                                    if ((temp_v0_4 != NULL) && ((M2C_FIELD(temp_v0_3, u8 *, 6) & 0x3F) == 3)) {
                                        temp_a0_3 = M2C_FIELD(temp_v0_4, u8 *, 0) & 0xF;
                                        if ((temp_a0_3 != 7) && (temp_a0_3 != 6) && (temp_a0_3 != 5)) {
                                            temp_v1 = M2C_FIELD(temp_v0_4, u16 *, 2);
                                            if (var_s6 < (s32) temp_v1) {
                                                var_s6 = (s32) temp_v1;
                                                var_fp = 1;
                                                spA0 = temp_s2 & 0xFFFF;
                                                spB0 = temp_s7_2 & 0xFFFF;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        var_s3_2 += 1;
                    } while (var_s3_2 < 0x20);
                }
                var_s4 += 1;
            } while (var_s4 < 0x48);
            if ((var_fp & 0xFF) == 1) {
                M2C_FIELD((temp_s5 + (M2C_FIELD(temp_s5, u8 *, 0x520) * 2)), u16 *, 0x522) = spA0;
                M2C_FIELD((temp_s5 + (M2C_FIELD(temp_s5, u8 *, 0x520) * 2)), u16 *, 0x562) = spB0;
                M2C_FIELD(temp_s5, u8 *, 0x520) = (u8) (M2C_FIELD(temp_s5, u8 *, 0x520) + 1);
                if ((s32) M2C_FIELD(temp_s5, u8 *, 0x520) >= 0x20) {

                } else {
                    goto loop_16;
                }
            }
        }
        M2C_FIELD(temp_s5, s8 *, 0x5A2) = 0;
        M2C_FIELD(temp_s5, s32 *, 0x5A8) = 0;
        M2C_FIELD(temp_s5, s16 *, 0x5AC) = 0;
        M2C_FIELD(temp_s5, s16 *, 0x5AE) = 0;
    }
}
