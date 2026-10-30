/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0050AD90[];

void *func_001485A0(s32 arg0, s32 arg1) {
    M2C_UNK *var_a4;
    s32 var_a5;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a2;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *var_v0;

    var_a5 = 0;
    var_a4 = ((void *)D_0050AD90);
loop_1:
    temp_v0 = var_a4 + (arg0 << 5);
    temp_a0 = M2C_FIELD(temp_v0, void **, 0x20);
    temp_a2 = temp_v0 + 0x18;
    if (temp_a0 != NULL) {
        var_v0 = temp_a0;
loop_3:
        if (M2C_FIELD(var_v0, s32 *, 0x1C) == arg1) {
            if (temp_a0 != var_v0) {
                temp_a0_2 = M2C_FIELD(var_v0, void **, 8);
                temp_v1 = M2C_FIELD(var_v0, void **, 0xC);
                if (temp_a0_2 != NULL) {
                    goto block_6;
                }
                if (temp_v1 != NULL) {
block_6:
                    if (temp_a0_2 != NULL) {
                        M2C_FIELD(temp_a0_2, void **, 0xC) = temp_v1;
                    } else {
                        M2C_FIELD(temp_a2, void **, 8) = temp_v1;
                    }
                    if (temp_v1 != NULL) {
                        M2C_FIELD(temp_v1, void **, 8) = temp_a0_2;
                    }
                    M2C_FIELD(var_v0, void **, 8) = NULL;
                    M2C_FIELD(var_v0, void **, 0xC) = NULL;
                }
                temp_v1_2 = M2C_FIELD(temp_a2, void **, 8);
                M2C_FIELD(temp_a2, void **, 8) = var_v0;
                M2C_FIELD(var_v0, void **, 8) = NULL;
                M2C_FIELD(var_v0, void **, 0xC) = temp_v1_2;
                if (temp_v1_2 != NULL) {
                    M2C_FIELD(temp_v1_2, void **, 8) = var_v0;
                }
            }
        } else {
            var_v0 = M2C_FIELD(var_v0, void **, 0xC);
            if (var_v0 == NULL) {
                goto block_15;
            }
            goto loop_3;
        }
    } else {
block_15:
        var_v0 = NULL;
    }
    if (var_v0 == NULL) {
        var_a5 += 1;
        var_a4 += 0x44;
        if (var_a5 >= 2) {
            return NULL;
        }
        goto loop_1;
    }
    return var_v0;
}
