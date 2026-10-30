/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0050AD90[];

void func_00149260(s32 arg0, s32 arg1) {
    M2C_UNK *temp_v1_2;
    M2C_UNK *temp_v1_4;
    M2C_UNK *var_a3;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_v1;
    void *temp_v1_3;
    void *temp_v1_5;

    temp_v1 = (arg1 << 5) + (((void *)D_0050AD90) + (arg0 * 0x44));
    temp_a1 = temp_v1 + 0x18;
    if (M2C_FIELD(temp_v1, s32 *, 0x24) != 0) {
        var_a3 = M2C_FIELD(temp_v1, M2C_UNK **, 0x18);
        do {
            if (M2C_FIELD(var_a3, s32 *, 0x1C) == 0) {
                if (M2C_FIELD(var_a3, M2C_UNK **, 4) != NULL) {
loop_5:
                    if (M2C_FIELD(M2C_FIELD(var_a3, M2C_UNK **, 4), s32 *, 0x1C) == 0) {
                        M2C_FIELD(var_a3, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(M2C_FIELD(var_a3, M2C_UNK **, 4), M2C_UNK **, 4);
                        temp_v1_2 = M2C_FIELD(var_a3, M2C_UNK **, 4);
                        if (temp_v1_2 == NULL) {
                            M2C_FIELD(temp_a1, M2C_UNK **, 4) = var_a3;
                        } else {
                            *temp_v1_2 = var_a3;
                        }
                        M2C_FIELD(var_a3, u8 *, 0x69) = (u8) (M2C_FIELD(var_a3, u8 *, 0x69) + M2C_FIELD(M2C_FIELD(var_a3, M2C_UNK **, 4), u8 *, 0x69));
                        temp_a0 = M2C_FIELD(M2C_FIELD(var_a3, M2C_UNK **, 4), void **, 8);
                        temp_v1_3 = M2C_FIELD(M2C_FIELD(var_a3, M2C_UNK **, 4), void **, 0xC);
                        if (temp_a0 != NULL) {
                            goto block_12;
                        }
                        if (temp_v1_3 != NULL) {
block_12:
                            if (temp_a0 != NULL) {
                                M2C_FIELD(temp_a0, void **, 0xC) = temp_v1_3;
                            } else {
                                M2C_FIELD(temp_a1, void **, 8) = temp_v1_3;
                            }
                            if (temp_v1_3 != NULL) {
                                M2C_FIELD(temp_v1_3, void **, 8) = temp_a0;
                            }
                            M2C_FIELD(M2C_FIELD(var_a3, M2C_UNK **, 4), void **, 8) = NULL;
                            M2C_FIELD(M2C_FIELD(var_a3, M2C_UNK **, 4), void **, 0xC) = NULL;
                        }
                        temp_v1_4 = M2C_FIELD(temp_a1, M2C_UNK **, 0x10);
                        if (temp_v1_4 != NULL) {
                            M2C_FIELD(M2C_FIELD(var_a3, M2C_UNK **, 4), M2C_UNK **, 4) = temp_v1_4;
                            *M2C_FIELD(M2C_FIELD(var_a3, M2C_UNK **, 4), M2C_UNK **, 4) = M2C_FIELD(var_a3, M2C_UNK **, 4);
                        } else {
                            M2C_FIELD(M2C_FIELD(var_a3, M2C_UNK **, 4), M2C_UNK **, 4) = NULL;
                        }
                        M2C_FIELD(temp_a1, M2C_UNK **, 0x10) = M2C_FIELD(var_a3, M2C_UNK **, 4);
                        *M2C_FIELD(var_a3, M2C_UNK **, 4) = NULL;
                        M2C_FIELD(M2C_FIELD(var_a3, M2C_UNK **, 4), s32 *, 0x1C) = 0;
                        if (M2C_FIELD(var_a3, M2C_UNK **, 4) != NULL) {
                            goto loop_5;
                        }
                    }
                }
                temp_a0_2 = M2C_FIELD(var_a3, void **, 8);
                temp_v1_5 = M2C_FIELD(var_a3, void **, 0xC);
                if (temp_a0_2 != NULL) {
                    goto block_22;
                }
                if (temp_v1_5 != NULL) {
block_22:
                    if (temp_a0_2 != NULL) {
                        M2C_FIELD(temp_a0_2, void **, 0xC) = temp_v1_5;
                    } else {
                        M2C_FIELD(temp_a1, void **, 8) = temp_v1_5;
                    }
                    if (temp_v1_5 != NULL) {
                        M2C_FIELD(temp_v1_5, void **, 8) = temp_a0_2;
                    }
                    M2C_FIELD(var_a3, void **, 8) = NULL;
                    M2C_FIELD(var_a3, void **, 0xC) = NULL;
                }
            }
            var_a3 = M2C_FIELD(var_a3, M2C_UNK **, 4);
        } while (var_a3 != NULL);
    }
}
