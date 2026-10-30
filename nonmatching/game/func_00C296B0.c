/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00277220(void *, M2C_UNK);                 /* extern */
s32 func_0028F230(s32, void *, M2C_UNK, s32 *, s32); /* extern */
s32 func_00292F00(u8);                              /* extern */
s32 func_009A0270();                                /* extern */
s32 func_00C32010(void *, u8);                      /* extern */
extern char Pes6MatchSquads[];
extern char D_00CB3880[];

s32 func_00C296B0(void *arg0, s32 arg1) {
    s32 spA0;
    s32 spA4;
    s32 spA8;
    s32 temp_s0;
    s32 var_a4;
    s32 var_a4_2;
    s32 var_fp;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    u8 *var_a5;
    u8 temp_a1;
    u8 temp_s3;
    u8 temp_s6;
    u8 temp_v1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_s0_2;
    void *temp_s2;
    void *temp_v1;

    var_s1 = 0;
    var_s0 = 0;
    temp_s2 = ((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0) * 0x6900);
    do {
        temp_a0 = arg0 + var_s1;
        if (M2C_FIELD((temp_s2 + (M2C_FIELD(temp_a0, u8 *, 0x8C) * 0x348)), u8 *, 0xD4) != 0) {
            if ((func_00292F00(M2C_FIELD(temp_a0, u8 *, 0xC0)) & 0xFF) == 3) {
                var_s0 += 1;
            }
        }
        var_s1 += 1;
    } while (var_s1 < 0xB);
    if (var_s0 == 0) {
        spA0 = 0;
        spA4 = 0xD080;
        var_s4 = 0;
        spA8 = 0;
        var_fp = -1;
        var_s1_2 = 0;
        do {
            temp_a0_2 = arg0 + var_s1_2;
            temp_s3 = M2C_FIELD(temp_a0_2, u8 *, 0x8C);
            temp_s0 = temp_s3 * 0x348;
            if (M2C_FIELD((temp_s2 + temp_s0), u8 *, 0xD4) != 0) {
                if ((func_00292F00(M2C_FIELD(temp_a0_2, u8 *, 0xC0)) & 0xFF) == 2) {
                    temp_a2 = temp_s2 + temp_s0;
                    var_a4 = (s32) M2C_FIELD(temp_a2, s32 *, 0xD8) / (s32) ((M2C_FIELD(temp_a2, u32 *, 0x18) / 100) + ((u32) M2C_FIELD(temp_a2, u32 *, 0x18) >> 0x1F));
                    if (var_a4 >= 0x3D) {
                        var_a4 = 0x64;
                    }
                    temp_s0_2 = temp_s0 + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0) * 0x6900));
                    var_s3 = func_0028F230(arg1, temp_s0_2 + 0x68, 0x26, &spA0, var_a4);
                    if (func_00C32010(arg0, temp_s3) == 0) {
                        goto block_34;
                    }
                    if ((M2C_FIELD(temp_s0_2, u8 *, 0xF8) == 0) && (M2C_FIELD(temp_s0_2, u8 *, 0xF9) == 0)) {
                        temp_s6 = M2C_FIELD(temp_s0_2, u8 *, 0x102);
                        if (((func_009A0270() & 0xFF) - 5) < (s32) temp_s6) {
                            goto block_34;
                        }
                        var_v0 = func_00277220(temp_s0_2 + 0xF0, 1);
                    } else {
block_34:
                        var_v0 = 0;
                    }
                    if (var_v0 != 2) {

                    } else {
                        var_v0_2 = var_s3 >> 1;
                        if (var_s3 < 0) {
                            var_v0_2 = (s32) (var_s3 + 1) >> 1;
                        }
                        var_s3 = var_v0_2;
                    }
                    if (var_s4 < var_s3) {
                        var_s4 = var_s3;
                        var_fp = var_s1_2;
                    }
                }
            }
            var_s1_2 += 1;
        } while (var_s1_2 < 0xB);
        if (var_fp != -1) {
            temp_v1 = var_fp + arg0;
            temp_v1_2 = M2C_FIELD(temp_v1, u8 *, 0x8C);
            var_a5 = ((void *)D_00CB3880) + (((M2C_FIELD((temp_s2 + (temp_v1_2 * 0x348)), u8 *, 0x68) & 1) != 0) * 0xD);
            if (*var_a5 != 0x29) {
loop_14:
                var_a4_2 = 0;
loop_15:
                temp_a2_2 = arg0 + var_a4_2;
                if (M2C_FIELD(temp_a2_2, u8 *, 0xC0) != *var_a5) {
                    var_a4_2 += 1;
                    if (var_a4_2 >= 0xB) {
                        var_a5 += 1;
                        if (*var_a5 == 0x29) {
                            goto block_22;
                        }
                        goto loop_14;
                    }
                    goto loop_15;
                }
                temp_a1 = M2C_FIELD(temp_a2_2, u8 *, 0x8C);
                M2C_FIELD(temp_a2_2, u8 *, 0x8C) = temp_v1_2;
                M2C_FIELD(temp_v1, u8 *, 0x8C) = temp_a1;
                M2C_FIELD(arg0, s8 *, 0x14) = 1;
                return 1;
            }
block_22:
            goto block_46;
        }
        goto block_46;
    }
block_46:
    return 0;
}
