/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
extern s32 D_003E77AC;
extern void *D_003E77B0;

void *func_0022C2D0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a2;
    s32 temp_a5;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a3;
    u8 temp_a4;
    void *temp_a1;
    void *temp_a7;
    void *var_v0;

    if ((func_00309420() != 0) == 1) {
        var_a3 = 0;
    } else {
        var_a3 = D_003E77AC + 0xC;
    }
    var_v0 = NULL;
    if (var_a3 == 0) {
        return NULL;
    }
    temp_v1 = arg1 & 0xFF;
    if (temp_v1 >= 0x58) {
        return NULL;
    }
    temp_a2 = arg0 & 0xFF;
    if (M2C_FIELD(D_003E77B0, u8 *, 0x2C) == temp_a2) {
        var_a0 = 0;
        goto block_11;
    }
    if (M2C_FIELD(D_003E77B0, u8 *, 0x2D) == temp_a2) {
        var_a0 = 1;
block_11:
        temp_a5 = arg2 & 0xFF;
        var_a0_2 = 0;
loop_12:
        temp_a1 = var_a3 + ((var_a0 & 0xFF) * 0x160) + ((var_a0_2 & 0xFF) * 4);
        temp_a4 = M2C_FIELD(temp_a1, u8 *, 0x7D0);
        temp_a7 = temp_a1 + 0x7D0;
        if (temp_v1 == (temp_a4 & 0x3F)) {
            switch (temp_a5) {                      /* irregular */
            case 1:
            case 0:
                if ((u64) ((u64) ((s64) M2C_FIELD(temp_a1, u8 *, 0x7D0) << 0x38) >> 0x3E) < 2U) {
                    var_v0 = temp_a7;
                }
block_23:
                if (var_v0 == NULL) {
                    goto block_24;
                }
                /* Duplicate return node #26. Try simplifying control flow for better match */
                return var_v0;
            case 2:
                if (((u64) ((s64) temp_a4 << 0x38) >> 0x3E) == 2) {
                    var_v0 = temp_a7;
                }
                goto block_23;
            default:
                return NULL;
            }
        } else {
block_24:
            var_a0_2 = (var_a0_2 + 1) & 0xFF;
            if (var_a0_2 >= 0x58) {
                /* Duplicate return node #26. Try simplifying control flow for better match */
                return var_v0;
            }
            goto loop_12;
        }
    } else {
        return var_v0;
    }
}
