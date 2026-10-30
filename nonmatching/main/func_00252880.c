/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00251BE0(void);
M2C_UNK func_00252590(void *, s32, void *, s32, s32); /* extern */
extern s32 D_003E9B84;
extern s32 D_003E9B88;
extern char D_005850E0[];
extern char D_00588DB0[];

void func_00252880(void) {
    s32 *temp_a1_4;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a2_3;
    s32 temp_a3_4;
    s32 temp_a4;
    s64 var_a0;
    s64 var_a0_2;
    s64 var_a0_3;
    void *temp_a1;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_4;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_a3_3;
    void *temp_a4_2;
    void *temp_v1;
    void *temp_v1_2;

    D_003E9B84 = 0;
    var_a0 = 0;
    do {
        temp_a3 = ((void *)D_00588DB0) + (((s64) (var_a0 << 0x20) >> 0x20) * 0x1BF8);
        if (M2C_FIELD(temp_a3, s32 *, 0x34) == 1) {
            if ((M2C_FIELD((((void *)D_005850E0) + (M2C_FIELD(temp_a3, s32 *, 4) * 0xD4)), s32 *, 0x44) < 0) && (M2C_FIELD((((void *)D_005850E0) + (M2C_FIELD(temp_a3, s32 *, 8) * 0xD4)), s32 *, 0x44) < 0)) {
                M2C_FIELD(temp_a3, s32 *, 0x34) = 0;
                goto block_5;
            }
        } else {
block_5:
            D_003E9B88 = 0;
            var_a0_2 = 0;
            do {
                temp_a3_2 = (((s64) (var_a0_2 << 0x20) >> 0x20) * 4) + (((void *)D_00588DB0) + (D_003E9B84 * 0x1BF8));
                temp_a2 = ((void *)D_005850E0) + (M2C_FIELD(temp_a3_2, s32 *, 4) * 0xD4);
                if (M2C_FIELD(temp_a2, s32 *, 0x44) < 0) {
                    if (M2C_FIELD(temp_a3_2, s32 *, 0xC) == 2) {
                        M2C_FIELD(temp_a2, s32 *, 0xB0) = 0;
                        M2C_FIELD(temp_a3_2, s32 *, 0xC) = 0;
                    } else {
                        goto block_9;
                    }
                } else {
block_9:
                    if ((M2C_FIELD(temp_a2, s32 *, 0x9C) != 0) && (M2C_FIELD(temp_a2, s32 *, 0xB0) == 1) && (func_00251BE0() == 0)) {
                        temp_a2_2 = ((void *)D_00588DB0) + (D_003E9B84 * 0x1BF8) + (D_003E9B88 * 4);
                        temp_a1 = ((void *)D_005850E0) + (M2C_FIELD(temp_a2_2, s32 *, 4) * 0xD4);
                        if (M2C_FIELD(temp_a1, s32 *, 0xA4) >= M2C_FIELD(temp_a1, s32 *, 0x9C)) {
                            M2C_FIELD(temp_a1, s32 *, 0xB0) = 0;
                            M2C_FIELD(temp_a2_2, s32 *, 0x14) = 1;
                        }
                    }
                }
                var_a0_2 = D_003E9B88 + 1;
                D_003E9B88 = (s32) var_a0_2;
            } while (var_a0_2 < 2);
            temp_v1 = ((void *)D_00588DB0) + (D_003E9B84 * 0x1BF8);
            temp_a4 = M2C_FIELD(temp_v1, s32 *, 0);
            temp_a3_3 = temp_v1 + (temp_a4 * 4);
            temp_a2_3 = M2C_FIELD(temp_a3_3, s32 *, 0xC);
            if (temp_a2_3 != 0) {
                if ((temp_a2_3 == 1) && (M2C_FIELD(temp_v1, s32 *, 0x30) != 1)) {
                    var_a0_3 = 0;
                    if (temp_a4 == 0) {
                        var_a0_3 = 1;
                    }
                    temp_a4_2 = temp_v1 + (((s64) (var_a0_3 << 0x20) >> 0x20) * 4);
                    if ((M2C_FIELD(temp_a4_2, s32 *, 0xC) != 0) && (M2C_FIELD(temp_a4_2, s32 *, 0x14) != 1)) {

                    } else {
                        M2C_FIELD(temp_a4_2, s32 *, 0x14) = 0;
                        M2C_FIELD((temp_v1 + (M2C_FIELD(temp_v1, s32 *, 0) * 4)), s32 *, 0xC) = 2;
                        M2C_FIELD(temp_v1, s32 *, 0) = (s32) (M2C_FIELD(temp_v1, s32 *, 0) + 1);
                        M2C_FIELD((((void *)D_005850E0) + (M2C_FIELD(temp_a3_3, s32 *, 4) * 0xD4)), s32 *, 0x48) = 0;
                        if (M2C_FIELD(temp_v1, s32 *, 0) >= 2) {
                            M2C_FIELD(temp_v1, s32 *, 0) = 0;
                        }
                    }
                }
            } else {
                temp_a1_2 = M2C_FIELD(temp_v1, s32 *, 0x28);
                if (temp_a1_2 > 0) {
                    temp_a3_4 = M2C_FIELD(temp_a3_3, s32 *, 4);
                    M2C_FIELD(temp_v1, s32 *, 0x28) = (s32) (temp_a1_2 - 1);
                    if (M2C_FIELD(temp_v1, s32 *, 0x1C) < M2C_FIELD(temp_v1, s32 *, 0x24)) {

                    } else {
                        M2C_FIELD(temp_v1, s32 *, 0x1C) = 0;
                    }
                    temp_a2_4 = ((void *)D_00588DB0) + (D_003E9B84 * 0x1BF8);
                    temp_a1_3 = M2C_FIELD(temp_a2_4, s32 *, 0x1C);
                    M2C_FIELD(temp_a2_4, s32 *, 0x1C) = (s32) (temp_a1_3 + 1);
                    temp_v1_2 = temp_a2_4 + (temp_a1_3 * 0x94);
                    M2C_FIELD(temp_v1_2, s32 *, 0x40) = temp_a3_4;
                    M2C_FIELD(temp_v1_2, s32 *, 0x44) = 1;
                    func_00252590(temp_v1_2 + 0x38, temp_a1_3, temp_a2_4, temp_a3_4, temp_a4);
                    temp_a1_4 = ((void *)D_00588DB0) + (D_003E9B84 * 0x1BF8);
                    M2C_FIELD((temp_a1_4 + (*temp_a1_4 * 4)), s32 *, 0xC) = 1;
                }
            }
        }
        var_a0 = D_003E9B84 + 1;
        D_003E9B84 = (s32) var_a0;
    } while (var_a0 < 2);
}
