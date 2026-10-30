/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00251860(s32);
extern s32 D_003E9B90;
extern char D_005843F0[];
extern char D_005850E0[];

void func_00251D60(void) {
    M2C_UNK *var_a4_2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_a5;
    s32 temp_a6;
    s32 var_a4;
    s32 var_a5;
    s32 var_a6;
    s64 var_a0;
    s64 var_a2;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a4_2;
    void *temp_a5_2;
    void *temp_s0;
    void *temp_v1;

    D_003E9B90 = 0;
    var_a0 = 0;
    do {
        temp_a1 = ((s64) (var_a0 << 0x20) >> 0x20) * 0xD4;
        temp_s0 = ((void *)D_005850E0) + temp_a1;
        if (M2C_FIELD(temp_s0, s32 *, 0x18) != 0) {
            var_a4 = -1;
            if (M2C_FIELD(temp_s0, s32 *, 0x44) != -1) {
                temp_a3 = M2C_FIELD(temp_s0, s32 *, 0x1C);
                switch (temp_a3) {                  /* irregular */
                case 1:
                    temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x98);
                    if (temp_a0 != -1) {
                        M2C_FIELD(temp_s0, s32 *, 0x20) = func_00251860(temp_a0);
                        if (M2C_FIELD(temp_s0, s32 *, 0x20) != 1) {
                            goto block_11;
                        }
                    } else {
block_11:
                        var_a5 = -1;
                        var_a4_2 = ((void *)D_005843F0);
                        var_a6 = 0;
                        do {
                            if (M2C_FIELD(temp_s0, s32 *, 4) == M2C_FIELD(var_a4_2, s32 *, 0x44)) {
                                if (M2C_FIELD(var_a4_2, s32 *, 0x48) != 2) {
                                    temp_v1 = ((void *)D_005843F0) + (var_a6 * 0x5C);
                                    M2C_FIELD(temp_v1, s32 *, 0) = -1;
                                    M2C_FIELD(temp_v1, s32 *, 0x4C) = 0;
                                    M2C_FIELD(temp_v1, s32 *, 0x44) = -1;
                                    M2C_FIELD(temp_v1, s32 *, 0x48) = 0;
                                } else {
                                    var_a5 = var_a6;
                                }
                            }
                            var_a6 += 1;
                            var_a4_2 += 0x5C;
                        } while (var_a6 < 0x24);
                        temp_a0_2 = ((void *)D_005850E0) + (D_003E9B90 * 0xD4);
                        M2C_FIELD(temp_a0_2, s32 *, 0x20) = var_a5;
                        M2C_FIELD(temp_a0_2, s32 *, 0x1C) = 2;
                    }
                    break;
                case 2:
                    temp_a5 = M2C_FIELD(temp_s0, s32 *, 0x20);
                    var_a2 = 0;
                    if (temp_a5 != -1) {
                        if (temp_a5 >= 0) {
                            var_a4 = M2C_FIELD((((void *)D_005843F0) + (temp_a5 * 0x5C)), s32 *, 0x48);
                        }
                        temp_a5_2 = ((void *)D_005850E0) + temp_a1;
                        M2C_FIELD(temp_a5_2, s32 *, 0x2C) = var_a4;
                        temp_a4 = M2C_FIELD(temp_a5_2, s32 *, 0x2C);
                        if ((temp_a4 == 0) || (temp_a4 == 3)) {
                            temp_a6 = M2C_FIELD(temp_a5_2, s32 *, 0x20);
                            var_a2 = ((s64) (0 << 0x20) >> 0x20) + 1;
                            M2C_FIELD(temp_a5_2, s32 *, 0x20) = -1;
                            temp_a4_2 = ((void *)D_005843F0) + (temp_a6 * 0x5C);
                            M2C_FIELD(temp_a4_2, s32 *, 0) = -1;
                            M2C_FIELD(temp_a4_2, s32 *, 0x4C) = 0;
                            M2C_FIELD(temp_a4_2, s32 *, 0x44) = -1;
                            M2C_FIELD(temp_a4_2, s32 *, 0x48) = 0;
                        }
                    } else {
                        var_a2 = ((s64) (0 << 0x20) >> 0x20) + 1;
                    }
                    if (((s64) (var_a2 << 0x20) >> 0x20) == 1) {
                        M2C_FIELD(temp_s0, s32 *, 0x1C) = 0;
                        if (M2C_FIELD(temp_s0, s32 *, 0x44) == 2) {
                            M2C_FIELD(temp_s0, s32 *, 0x44) = -1;
                        }
                    }
                    temp_a0_3 = ((void *)D_005850E0) + temp_a1;
                    M2C_FIELD(temp_a0_3, s32 *, 0x9C) = 0;
                    M2C_FIELD(temp_a0_3, s32 *, 0xA0) = 0;
                    M2C_FIELD(temp_a0_3, s32 *, 0xA4) = 0;
                    M2C_FIELD(temp_a0_3, s32 *, 0xA8) = 0;
                    M2C_FIELD(temp_a0_3, s32 *, 0xAC) = 0;
                    M2C_FIELD(temp_a0_3, s32 *, 0xB0) = 0;
                    M2C_FIELD(temp_a0_3, s32 *, 0xB4) = 0;
                    M2C_FIELD(temp_a0_3, s32 *, 0xB8) = 0;
                    M2C_FIELD(temp_a0_3, s32 *, 0xBC) = 0;
                    M2C_FIELD(temp_a0_3, s32 *, 0xC0) = 0;
                    M2C_FIELD(temp_a0_3, s32 *, 0x98) = -1;
                    break;
                }
            }
        }
        var_a0 = D_003E9B90 + 1;
        D_003E9B90 = (s32) var_a0;
    } while (var_a0 < 4);
}
