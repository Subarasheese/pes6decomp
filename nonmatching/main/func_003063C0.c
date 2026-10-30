/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00251BE0(void);
M2C_UNK func_00306600(s64, s32, void *);            /* extern */
extern s32 D_003E9EF8;
extern char D_005EB270[];

void func_003063C0(void) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 var_a1;
    s64 var_a0;
    s64 var_a0_2;
    void *temp_a2_4;
    void *temp_a2_5;
    void *temp_a5;
    void *temp_a5_2;
    void *temp_v1;

    if (func_00251BE0() != 1) {
        D_003E9EF8 = 0;
        var_a0 = 0;
        do {
            var_a0_2 = (s64) (var_a0 << 0x20) >> 0x20;
            var_a1 = var_a0_2 * 0x258;
            temp_v1 = ((void *)D_005EB270) + var_a1;
            if ((M2C_FIELD(temp_v1, s32 *, 0x144) != 0) && (M2C_FIELD(temp_v1, s32 *, 0x14C) != 0)) {
                temp_a2 = M2C_FIELD(temp_v1, s32 *, 0x138);
                if (temp_a2 != -1) {
                    temp_a3 = temp_a2 + 1;
                    M2C_FIELD(temp_v1, s32 *, 0x138) = temp_a3;
                    if (temp_a3 >= M2C_FIELD(temp_v1, s32 *, 0x48)) {
                        M2C_FIELD(temp_v1, s32 *, 0x138) = -1;
                        goto block_7;
                    }
                } else {
block_7:
                    if (M2C_FIELD(temp_v1, s32 *, 0x44) == 0) {
                        temp_a5 = ((void *)D_005EB270) + var_a1;
                        temp_a3_2 = M2C_FIELD(temp_a5, s32 *, 0x134) + 1;
                        M2C_FIELD(temp_a5, s32 *, 0x134) = temp_a3_2;
                        if (temp_a3_2 >= M2C_FIELD(temp_a5, s32 *, 0x4C)) {
                            M2C_FIELD(temp_v1, s32 *, 0x144) = 0;
                            M2C_FIELD(temp_a5, s32 *, 0x134) = 0;
                        } else {
                            if (M2C_FIELD(temp_v1, s32 *, 0x58) != 0) {
                                temp_a2_2 = M2C_FIELD(temp_v1, s32 *, 0x140);
                                if ((temp_a2_2 < 0x20) && (M2C_FIELD((temp_a5 + (temp_a2_2 * 8)), s32 *, 0x19C) < temp_a3_2)) {
                                    temp_a2_3 = M2C_FIELD(temp_a5, s32 *, 0x140) + 1;
                                    M2C_FIELD(temp_a5, s32 *, 0x140) = temp_a2_3;
                                    if (temp_a2_3 < 0x20) {
                                        M2C_FIELD(temp_a5, s32 *, 0x148) = (s32) M2C_FIELD((temp_a5 + (temp_a2_3 * 8)), s32 *, 0x198);
                                    }
                                }
                            }
                            goto block_15;
                        }
                    } else {
block_15:
                        if (M2C_FIELD(temp_v1, s32 *, 0x184) != 0) {
                            temp_a5_2 = ((void *)D_005EB270) + var_a1;
                            temp_a3_3 = M2C_FIELD(temp_a5_2, s32 *, 0x18C);
                            if (temp_a3_3 < M2C_FIELD(temp_a5_2, s32 *, 0x188)) {
                                M2C_FIELD(temp_a5_2, s32 *, 0x18C) = (s32) (temp_a3_3 + 1);
                                M2C_FIELD(temp_a5_2, s32 *, 0x194) = (s32) (M2C_FIELD(temp_a5_2, s32 *, 0x194) + M2C_FIELD(temp_a5_2, s32 *, 0x190));
                            } else {
                                M2C_FIELD(temp_a5_2, s32 *, 0x194) = 0x20000;
                                M2C_FIELD(temp_v1, s32 *, 0x184) = 0;
                            }
                        }
                        temp_a2_4 = M2C_FIELD(temp_v1, void **, 0x130);
                        if (temp_a2_4 == (void *)1) {
                            func_00306600(var_a0_2, var_a1, temp_a2_4);
                            var_a0_2 = (s64) D_003E9EF8;
                            var_a1 = var_a0_2 * 0x258;
                            M2C_FIELD((((void *)D_005EB270) + var_a1), s32 *, 0x130) = 0;
                        }
                        temp_a2_5 = ((void *)D_005EB270) + var_a1;
                        temp_a1 = M2C_FIELD(temp_a2_5, s32 *, 0x13C) + 1;
                        M2C_FIELD(temp_a2_5, s32 *, 0x13C) = temp_a1;
                        if (temp_a1 >= M2C_FIELD(temp_a2_5, s32 *, 0x50)) {
                            func_00306600(var_a0_2, temp_a1, temp_a2_5);
                            M2C_FIELD((((void *)D_005EB270) + (D_003E9EF8 * 0x258)), s32 *, 0x13C) = 0;
                        }
                    }
                }
            }
            var_a0 = D_003E9EF8 + 1;
            D_003E9EF8 = (s32) var_a0;
        } while (var_a0 < 0x20);
    }
}
