/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_002BDE70(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_00C222B0(s32, s32);                        /* extern */
M2C_UNK func_00C22890(u8, u32);                     /* extern */
extern char D_00591A90[];
extern char D_00591C09[];
extern char Pes6MatchSquads[];
extern char D_00C9A710[];

void func_00B7EBD0(void) {
    s8 spA0;
    s32 spA4;
    M2C_UNK32 spA8;
    M2C_UNK spAE;
    M2C_UNK spAF;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a3;
    s32 var_a4;
    s32 var_a4_2;
    s32 var_a4_3;
    s32 var_v1;
    s8 var_s5;
    u32 var_a1_2;
    u8 temp_a0_4;
    u8 temp_a2;
    u8 temp_a3;
    u8 temp_s1;
    void *temp_a0;
    void *temp_a1;
    void *temp_fp;
    void *temp_s0;
    void *temp_v1_3;
    void *var_a0;
    void *var_a1;

    var_s5 = 0;
    do {
        temp_s2 = var_s5 & 0xFF;
        temp_a0 = ((void *)D_00C9A710) + (temp_s2 * 8);
        temp_a3 = M2C_FIELD(temp_a0, u8 *, 0x12);
        if (temp_a3 != 0xFF) {
            temp_s1 = M2C_FIELD(temp_a0, u8 *, 0x14);
            temp_a2 = M2C_FIELD(temp_a0, u8 *, 0x16);
            var_a4 = 0;
            var_a1 = ((void *)D_00591A90) + ((temp_a3 & 0xFF) * 0x8B);
            var_a0 = var_a1;
loop_3:
            if (temp_s1 == M2C_FIELD(var_a0, u8 *, 7)) {

            } else {
                var_a4 += 1;
                var_a0 += 1;
                if (var_a4 < 0x20) {
                    goto loop_3;
                }
            }
            var_a4_2 = 0;
            temp_v1 = temp_a2 & 0xFF;
loop_8:
            if (temp_v1 == M2C_FIELD(var_a1, u8 *, 7)) {

            } else {
                var_a4_2 += 1;
                var_a1 += 1;
                if (var_a4_2 < 0x20) {
                    goto loop_8;
                }
            }
            temp_s3 = temp_a3 & 0xFF;
            var_a1_2 = temp_s3 * 0x6900;
            temp_s0 = ((void *)Pes6MatchSquads) + var_a1_2;
            temp_fp = temp_s0 + ((temp_a2 & 0xFF) * 0x348);
            spA0 = var_s5;
            if (((u64) ((s64) M2C_FIELD(temp_fp, u8 *, 0xCF) << 0x3D) >> 0x3F) != 0) {
                spA4 = 6;
                spA8 = 1;
            } else {
                temp_s4 = temp_v1 & 0xFF;
                if (((s64) (func_002BDE70(temp_s3, temp_s4, 0, 0xA, 0) << 0x30) >> 0x30) > 0) {
                    if ((func_00C222B0(temp_s3, temp_s4) & 0xFF) >= 0xB) {
                        var_v1 = 1;
                    } else {
                        var_v1 = 0;
                    }
                } else if ((func_00C222B0(temp_s3, temp_s4) & 0xFF) >= 0x11) {
                    var_v1 = 1;
                } else {
                    var_v1 = 0;
                }
                if (var_v1 == 0) {
                    var_a1_2 = (u32) (temp_s0 + ((temp_s1 & 0xFF) * 0x348));
                    if (!(M2C_FIELD(var_a1_2, u8 *, 0xCF) & 1)) {
                        temp_a0_2 = M2C_FIELD(temp_fp, u8 *, 0x89) & 7;
                        temp_v1_2 = M2C_FIELD(var_a1_2, u8 *, 0x89) & 7;
                        if (temp_v1_2 != temp_a0_2) {
                            if (temp_a0_2 < temp_v1_2) {
                                spA8 = 0;
                                spA4 = (((temp_v1_2 + 3) / 3) + ((u32) (temp_v1_2 + 3) >> 0x1F)) - 1;
                            } else {
                                var_a1_2 = (u32) (temp_a0_2 + 3) >> 0x1F;
                                spA8 = 1;
                                spA4 = (((temp_a0_2 + 3) / 3) + var_a1_2) - 1;
                            }
                        } else {
                            var_a1_2 = (u32) (temp_v1_2 + 3) >> 0x1F;
                            spA8 = 2;
                            spA4 = (((temp_v1_2 + 3) / 3) + var_a1_2) - 1;
                        }
                    } else {
                        spA8 = 0;
                        spA4 = 5;
                    }
                } else {
                    spA4 = 4;
                    var_a1_2 = 1;
                    spA8 = 1;
                    if (M2C_FIELD((temp_s0 + ((temp_s1 & 0xFF) * 0x348)), u8 *, 0xCF) & 1) {
                        spA8 = 0;
                        spA4 = 5;
                    }
                }
            }
            if (((*(u8 *)D_00591C09) == 4) || ((*(u8 *)D_00591C09) == 0xE)) {
                func_00C22890((*(u8 *)D_00591C09), var_a1_2);
            }
            temp_v1_3 = ((void *)D_00C9A710) + (temp_s2 * 0xC);
            M2C_FIELD(temp_v1_3, f32 *, 0x24) = (f32) spA0;
            M2C_FIELD(temp_v1_3, s32 *, 0x28) = spA4;
            M2C_FIELD(temp_v1_3, M2C_UNK32 *, 0x2C) = spA8;
        }
        var_s5 = (var_s5 + 1) & 0xFF;
    } while (var_s5 < 2);
    var_a3 = 0;
    do {
        var_a4_3 = var_a3 & 0xFF;
loop_20:
        temp_a0_3 = var_a4_3 & 0xFF;
        if ((temp_a0_3 + 1) < 2) {
            temp_a1 = ((void *)D_00C9A710) + (temp_a0_3 * 0xC);
            if (M2C_FIELD(temp_a1, s32 *, 0x28) < M2C_FIELD(temp_a1, s32 *, 0x34)) {
                temp_a0_4 = M2C_FIELD(temp_a1, u8 *, 0x24);
                var_a4_3 = (var_a4_3 + 1) & 0xFF;
                M2C_FIELD(temp_a1, u8 *, 0x24) = (u8) M2C_FIELD(temp_a1, u8 *, 0x30);
                M2C_FIELD(temp_a1, u8 *, 0x30) = temp_a0_4;
                goto loop_20;
            }
        }
        var_a3 = (var_a3 + 1) & 0xFF;
    } while ((var_a3 + 1) < 2);
}
