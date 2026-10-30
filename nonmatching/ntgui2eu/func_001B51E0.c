/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001B29E0(void *);                          /* extern */
M2C_UNK func_001B2D08(void *);                      /* extern */
s32 func_001B50F8(void *);                          /* extern */
extern void *D_005CC508;

s8 func_001B51E0(s32 arg0, void *arg1) {
    s8 *temp_a0_2;
    s8 *temp_a3;
    s8 temp_s1;
    s8 var_v0;
    u16 temp_a0;
    u32 temp_v0;
    void *var_v1;

    var_v0 = -1;
    if (arg0 != -1) {
        var_v1 = M2C_FIELD(arg1, void **, 0x54);
        if (var_v1 == NULL) {
            var_v1 = D_005CC508;
            M2C_FIELD(arg1, void **, 0x54) = var_v1;
        }
        if (M2C_FIELD(var_v1, s32 *, 0x38) == 0) {
            func_001B2D08(var_v1);
        }
        temp_a0 = M2C_FIELD(arg1, u16 *, 0xC) & 0xFFDF;
        M2C_FIELD(arg1, u16 *, 0xC) = temp_a0;
        if (!(temp_a0 & 4)) {
            var_v0 = -1;
            if (temp_a0 & 0x10) {
                if (temp_a0 & 8) {
                    var_v0 = -1;
                    if (func_001B29E0(arg1) == 0) {
                        M2C_FIELD(arg1, s32 *, 8) = 0;
                        M2C_FIELD(arg1, s32 *, 0x18) = 0;
                        M2C_FIELD(arg1, u16 *, 0xC) = (u16) (M2C_FIELD(arg1, u16 *, 0xC) & 0xFFF7);
                        goto block_10;
                    }
                    /* Duplicate return node #29. Try simplifying control flow for better match */
                    return var_v0;
                }
block_10:
                M2C_FIELD(arg1, u16 *, 0xC) = (u16) (M2C_FIELD(arg1, u16 *, 0xC) | 4);
                goto block_11;
            }
            /* Duplicate return node #29. Try simplifying control flow for better match */
            return var_v0;
        }
block_11:
        temp_s1 = arg0 & 0xFF;
        if (M2C_FIELD(arg1, void **, 0x30) != NULL) {
            if (M2C_FIELD(arg1, s32 *, 4) < M2C_FIELD(arg1, s32 *, 0x34)) {
                goto block_20;
            }
            if (func_001B50F8(arg1) == 0) {
block_20:
                temp_a0_2 = M2C_FIELD(arg1, s8 **, 0) - 1;
                M2C_FIELD(arg1, s8 **, 0) = temp_a0_2;
                *temp_a0_2 = temp_s1;
                goto block_25;
            }
            return -1;
        }
        temp_v0 = M2C_FIELD(arg1, u32 *, 0x10);
        temp_a3 = M2C_FIELD(arg1, s8 **, 0);
        if (temp_v0 != 0) {
            if ((temp_v0 < (u32) temp_a3) && (M2C_FIELD(temp_a3, u8 *, -1) == temp_s1)) {
                M2C_FIELD(arg1, s8 **, 0) = (s8 *) (temp_a3 - 1);
block_25:
                M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) + 1);
                return temp_s1;
            }
            goto block_28;
        }
block_28:
        M2C_FIELD(arg1, s32 *, 0x3C) = M2C_FIELD(arg1, s32 *, 4);
        M2C_FIELD(arg1, s8 **, 0x38) = temp_a3;
        M2C_FIELD(arg1, void **, 0x30) = (void *) (arg1 + 0x40);
        M2C_FIELD(arg1, s32 *, 0x34) = 3;
        M2C_FIELD(arg1, s8 **, 0) = (s8 *) (arg1 + 0x42);
        M2C_FIELD(arg1, s8 *, 0x42) = temp_s1;
        M2C_FIELD(arg1, s32 *, 4) = 1;
        var_v0 = temp_s1;
        /* Duplicate return node #29. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
