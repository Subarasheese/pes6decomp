/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00253D80(s32, s32, s32, s32, s32, s32, M2C_UNK *, s32, s64); /* extern */
s32 func_00253F60(s64, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_003D8EE8[];
extern s32 D_003E9B68;
extern s32 D_003E9B6C;
extern s32 D_003E9B9C;
extern char D_00585430[];

void func_00254590(void) {
    s32 *temp_a1_2;
    s32 *temp_a1_3;
    s32 *temp_a1_4;
    s32 *temp_a1_5;
    s32 *temp_s0;
    s32 *temp_s0_2;
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v1_3;
    s32 var_v1_2;
    s64 temp_a0;
    s64 var_a0;
    s64 var_v1;
    s64 var_v1_3;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_4;
    void *var_a0_2;

    D_003E9B6C = 0;
    var_a0 = 0;
loop_1:
    temp_a0 = (s64) (var_a0 << 0x20) >> 0x20;
    temp_v1 = ((void *)D_00585430) + (temp_a0 * 0x1CB0);
    if (M2C_FIELD(temp_v1, s32 *, 0xC) == 1) {
        M2C_FIELD(temp_v1, s32 *, 8) = (s32) (M2C_FIELD(temp_v1, s32 *, 8) + 1);
        M2C_FIELD(temp_v1, s32 *, 4) = (s32) (M2C_FIELD(temp_v1, s32 *, 4) + 1);
        if (M2C_FIELD(temp_v1, s32 *, 4) < 8) {

        } else {
            M2C_FIELD(temp_v1, s32 *, 4) = 0;
        }
        M2C_FIELD((((void *)D_00585430) + (temp_a0 * 0x1CB0)), s32 *, 0xC) = 0;
    }
    if ((M2C_FIELD(temp_v1, s32 *, 8) != 0) || (M2C_FIELD((temp_v1 + (M2C_FIELD(temp_v1, s32 *, 0) * 0x394)), s32 *, 0x20) != 0)) {
        temp_a1 = M2C_FIELD((temp_v1 + (M2C_FIELD(temp_v1, s32 *, 0) * 0x394)), s32 *, 0x20);
        switch (temp_a1) {                          /* irregular */
        case 1:
            if ((func_00253F60(0, 6, 0, 0, 0, 0, 0) == 0) && (func_00253F60(1, 6, 0, 0, 0, 0, 0) == 0)) {
                temp_a1_2 = ((void *)D_00585430) + (D_003E9B6C * 0x1CB0);
                temp_a0_2 = temp_a1_2 + (*temp_a1_2 * 0x394);
                M2C_FIELD(temp_a0_2, s32 *, 0x20) = (s32) (M2C_FIELD(temp_a0_2, s32 *, 0x20) + 1);
            }
            goto block_22;
        case 2:
            func_00253F60(temp_a0, 1, 0, 0, 0, 0, 0);
            temp_s1 = D_003E9B6C;
            D_003E9B68 = 0;
            temp_s0 = ((void *)D_00585430) + (temp_s1 * 0x1CB0);
            var_v1 = 0;
            if (M2C_FIELD((temp_s0 + (*temp_s0 * 0x394)), s32 *, 0x1C) > 0) {
                do {
                    temp_v1_2 = temp_s0 + (*temp_s0 * 0x394) + (((s64) (var_v1 << 0x20) >> 0x20) * 0x1C);
                    func_00253D80(temp_s1, M2C_FIELD(temp_v1_2, s32 *, 0x24), M2C_FIELD(temp_v1_2, s32 *, 0x28), M2C_FIELD(temp_v1_2, s32 *, 0x2C), M2C_FIELD(temp_v1_2, s32 *, 0x30), M2C_FIELD(temp_v1_2, s32 *, 0x34), ((void *)D_003D8EE8), M2C_FIELD(temp_v1_2, s32 *, 0x38), (s64) M2C_FIELD(temp_v1_2, s32 *, 0x3C));
                    var_v1 = D_003E9B68 + 1;
                    D_003E9B68 = (s32) var_v1;
                } while (var_v1 < M2C_FIELD((temp_s0 + (*temp_s0 * 0x394)), s32 *, 0x1C));
            }
            temp_a1_3 = ((void *)D_00585430) + (D_003E9B6C * 0x1CB0);
            temp_a0_3 = temp_a1_3 + (*temp_a1_3 * 0x394);
            M2C_FIELD(temp_a0_3, s32 *, 0x20) = (s32) (M2C_FIELD(temp_a0_3, s32 *, 0x20) + 1);
            goto block_22;
        case 3:
            if ((func_00253F60(0, 0xA, 0, 0, 0, 0, 0) == 1) && (func_00253F60(1, 0xA, 0, 0, 0, 0, 0) == 1)) {
                func_00253F60((s64) D_003E9B6C, 2, 0, 0, 0, 0, 0);
                temp_a1_4 = ((void *)D_00585430) + (D_003E9B6C * 0x1CB0);
                M2C_FIELD((temp_a1_4 + (*temp_a1_4 * 0x394)), s32 *, 0x20) = 0;
                temp_v1_3 = *temp_a1_4;
                M2C_FIELD((temp_a1_4 + (temp_v1_3 * 0x394)), s32 *, 0x1C) = 0;
                *temp_a1_4 = temp_v1_3 + 1;
                if (*temp_a1_4 >= 8) {
                    *temp_a1_4 = 0;
                }
                var_a0_2 = ((void *)D_00585430) + (D_003E9B6C * 0x1CB0);
                var_v1_2 = M2C_FIELD(var_a0_2, s32 *, 8) - 1;
block_21:
                M2C_FIELD(var_a0_2, s32 *, 8) = var_v1_2;
            }
            goto block_22;
        case 0:
            if (D_003E9B9C != 0) {
                goto block_35;
            }
            if ((func_00253F60(0, 6, 0, 0, 0, 0, 0) != 1) && (func_00253F60(1, 6, 0, 0, 0, 0, 0) != 1)) {
block_35:
                temp_s1_2 = D_003E9B6C;
                D_003E9B68 = 0;
                temp_s0_2 = ((void *)D_00585430) + (temp_s1_2 * 0x1CB0);
                var_v1_3 = 0;
                if (M2C_FIELD((temp_s0_2 + (*temp_s0_2 * 0x394)), s32 *, 0x1C) <= 0) {

                } else {
                    do {
                        temp_v1_4 = temp_s0_2 + (*temp_s0_2 * 0x394) + (((s64) (var_v1_3 << 0x20) >> 0x20) * 0x1C);
                        func_00253D80(temp_s1_2, M2C_FIELD(temp_v1_4, s32 *, 0x24), M2C_FIELD(temp_v1_4, s32 *, 0x28), M2C_FIELD(temp_v1_4, s32 *, 0x2C), M2C_FIELD(temp_v1_4, s32 *, 0x30), M2C_FIELD(temp_v1_4, s32 *, 0x34), ((void *)D_003D8EE8), M2C_FIELD(temp_v1_4, s32 *, 0x38), (s64) M2C_FIELD(temp_v1_4, s32 *, 0x3C));
                        var_v1_3 = D_003E9B68 + 1;
                        D_003E9B68 = (s32) var_v1_3;
                    } while (var_v1_3 < M2C_FIELD((temp_s0_2 + (*temp_s0_2 * 0x394)), s32 *, 0x1C));
                }
                temp_a1_5 = ((void *)D_00585430) + (D_003E9B6C * 0x1CB0);
                M2C_FIELD((temp_a1_5 + (*temp_a1_5 * 0x394)), s32 *, 0x1C) = 0;
                *temp_a1_5 += 1;
                if (*temp_a1_5 >= 8) {
                    *temp_a1_5 = 0;
                }
                var_a0_2 = ((void *)D_00585430) + (D_003E9B6C * 0x1CB0);
                var_v1_2 = M2C_FIELD(var_a0_2, s32 *, 8) - 1;
                goto block_21;
            }
            break;
        }
    } else {
block_22:
        var_a0 = D_003E9B6C + 1;
        D_003E9B6C = (s32) var_a0;
        if (var_a0 >= 2) {

        } else {
            goto loop_1;
        }
    }
}
