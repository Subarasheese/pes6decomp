/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0093FB00(void *, u8 *, s32);           /* extern */
M2C_UNK func_0093FB30(M2C_UNK, s32, u8);            /* extern */
M2C_UNK func_0093FCB0(s32);                         /* extern */
s32 func_00BA9430(M2C_UNK, u8);                     /* extern */
extern char D_00591A90[];
extern char D_00591E00[];
extern char D_00CB63B0[];
extern char D_00CB63BF[];

void func_009A0700(void) {
    M2C_UNK *var_s2;
    M2C_UNK *var_s4_2;
    M2C_UNK *var_s5_2;
    M2C_UNK *var_s6;
    s32 temp_a0_4;
    s32 var_a2;
    s32 var_s0;
    s32 var_s1_2;
    s32 var_s4;
    s32 var_s5;
    u8 *var_s3;
    u8 *var_s3_2;
    u8 temp_a0_2;
    u8 temp_a0_6;
    u8 temp_a1;
    u8 temp_a1_2;
    u8 temp_a2;
    u8 temp_a2_2;
    u8 temp_a2_3;
    u8 temp_a4;
    u8 temp_a5;
    u8 temp_a6;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 var_s0_2;
    u8 var_t0;
    void *temp_a0;
    void *temp_a0_3;
    void *temp_a0_5;
    void *temp_a0_7;
    void *var_a7;
    void *var_s1;
    void *var_s2_2;

    var_s4 = 0;
    if (((*(u8 *)D_00CB63B0) == 0) && ((*(u8 *)D_00CB63BF) == 0)) {
        var_s4 = 1;
    }
    var_s5 = 0;
    var_s3 = ((void *)D_00CB63B0);
    var_s6 = ((void *)D_00591E00);
    var_s2 = ((void *)D_00591A90);
loop_4:
    if (var_s4 == 0) {
        temp_a6 = *var_s3;
        temp_a5 = M2C_FIELD(var_s6, u8 *, 0xF6);
        if ((s32) temp_a5 >= (s32) temp_a6) {
            temp_a4 = M2C_FIELD(var_s6, u8 *, 0xF8);
            var_t0 = temp_a4;
            var_a7 = var_s2 + (temp_a4 * 8);
loop_7:
            if ((s32) var_t0 < (temp_a4 + temp_a6)) {
                temp_a2 = M2C_FIELD(var_a7, u8 *, 0x52);
                if (temp_a2 != 0xFF) {
                    temp_a0 = var_s3 + ((var_t0 - temp_a4) * 2);
                    if (M2C_FIELD(temp_a0, u8 *, 1) == temp_a2) {
                        if (M2C_FIELD(temp_a0, u8 *, 2) == M2C_FIELD(var_a7, u8 *, 0x53)) {
                            var_a7 += 8;
                            var_t0 += 1;
                            goto loop_7;
                        }
                        var_s4 = 1;
                    } else {
                        var_s4 = 1;
                    }
                }
            }
            if (var_s4 == 0) {
                if (temp_a5 != temp_a6) {
                    var_s0 = temp_a4 + temp_a6;
                    var_s1 = var_s2 + (var_s0 * 8);
loop_19:
                    temp_a1 = M2C_FIELD(var_s6, u8 *, 0xF6);
                    temp_a0_2 = M2C_FIELD(var_s6, u8 *, 0xF8);
                    if (var_s0 < (temp_a0_2 + temp_a1)) {
                        temp_a2_2 = M2C_FIELD(var_s1, u8 *, 0x52);
                        if (temp_a2_2 != 0xFF) {
                            temp_v1 = M2C_FIELD(var_s1, u8 *, 0x53);
                            temp_a0_3 = var_s3 + ((var_s0 - temp_a0_2) * 2);
                            M2C_FIELD(temp_a0_3, u8 *, 1) = temp_a2_2;
                            M2C_FIELD(temp_a0_3, u8 *, 2) = temp_v1;
                            if (M2C_FIELD(var_s2, u8 *, 7) == temp_v1) {
                                func_0093FB30(0, var_s5, M2C_FIELD(var_s1, u8 *, 0x52));
                            } else {
                                func_0093FB30(1, var_s5, temp_a2_2);
                            }
                            var_s1 += 8;
                            var_s0 += 1;
                            goto loop_19;
                        }
                    }
                    *var_s3 = temp_a1;
                }
                var_s5 += 1;
                var_s3 += 0xF;
                var_s6 += 1;
                var_s2 += 0x8B;
                if (var_s5 < 2) {
                    goto loop_4;
                }
            }
        } else {
            var_s4 = 1;
        }
    }
    if (var_s4 & 0xFF) {
        var_a2 = 0;
        do {
            temp_a0_4 = var_a2 & 0xFF;
            var_a2 = (var_a2 + 1) & 0xFF;
            temp_a0_5 = ((void *)D_00CB63B0) + (temp_a0_4 * 0xF);
            M2C_FIELD(temp_a0_5, s8 *, 0) = 0;
            M2C_FIELD(temp_a0_5, s8 *, 1) = 0xFF;
            M2C_FIELD(temp_a0_5, s8 *, 2) = 0xFF;
            M2C_FIELD(temp_a0_5, s8 *, 3) = 0xFF;
            M2C_FIELD(temp_a0_5, s8 *, 4) = 0xFF;
            M2C_FIELD(temp_a0_5, s8 *, 5) = 0xFF;
            M2C_FIELD(temp_a0_5, s8 *, 6) = 0xFF;
            M2C_FIELD(temp_a0_5, s8 *, 7) = 0xFF;
            M2C_FIELD(temp_a0_5, s8 *, 8) = 0xFF;
            M2C_FIELD(temp_a0_5, s8 *, 9) = 0xFF;
            M2C_FIELD(temp_a0_5, s8 *, 0xA) = 0xFF;
            M2C_FIELD(temp_a0_5, s8 *, 0xB) = 0xFF;
            M2C_FIELD(temp_a0_5, s8 *, 0xC) = 0xFF;
            M2C_FIELD(temp_a0_5, s8 *, 0xD) = 0xFF;
            M2C_FIELD(temp_a0_5, s8 *, 0xE) = 0xFF;
        } while (var_a2 < 2);
        func_0093FB00(temp_a0_5, ((void *)D_00CB63B0), var_a2);
        var_s1_2 = 0;
        var_s5_2 = ((void *)D_00591E00);
        var_s4_2 = ((void *)D_00591A90);
        var_s3_2 = ((void *)D_00CB63B0);
        do {
            var_s0_2 = M2C_FIELD(var_s5_2, u8 *, 0xF8);
            var_s2_2 = var_s4_2 + (var_s0_2 * 8);
loop_33:
            temp_a1_2 = M2C_FIELD(var_s5_2, u8 *, 0xF6);
            temp_a0_6 = M2C_FIELD(var_s5_2, u8 *, 0xF8);
            if ((s32) var_s0_2 < (temp_a0_6 + temp_a1_2)) {
                temp_a2_3 = M2C_FIELD(var_s2_2, u8 *, 0x52);
                if (temp_a2_3 != 0xFF) {
                    temp_v1_2 = M2C_FIELD(var_s2_2, u8 *, 0x53);
                    temp_a0_7 = var_s3_2 + ((var_s0_2 - temp_a0_6) * 2);
                    M2C_FIELD(temp_a0_7, u8 *, 1) = temp_a2_3;
                    M2C_FIELD(temp_a0_7, u8 *, 2) = temp_v1_2;
                    if (M2C_FIELD(var_s4_2, u8 *, 7) == temp_v1_2) {
                        func_0093FB30(0, var_s1_2, M2C_FIELD(var_s2_2, u8 *, 0x52));
                    } else {
                        func_0093FB30(1, var_s1_2, temp_a2_3);
                    }
                    var_s2_2 += 8;
                    var_s0_2 += 1;
                    goto loop_33;
                }
            }
            var_s1_2 += 1;
            *var_s3_2 = temp_a1_2;
            var_s5_2 += 1;
            var_s4_2 += 0x8B;
            var_s3_2 += 0xF;
        } while (var_s1_2 < 2);
        if ((s32) (*(u8 *)D_00CB63B0) > 0) {
            goto block_43;
        }
        if ((s32) (*(u8 *)D_00CB63BF) > 0) {
block_43:
            if (((*(u8 *)D_00CB63B0) + (*(u8 *)D_00CB63BF)) < 3) {
                func_0093FCB0(func_00BA9430(3, temp_a1_2));
            }
        }
    }
}
