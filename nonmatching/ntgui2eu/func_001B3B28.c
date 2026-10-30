/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001B29E0(void *);                          /* extern */
M2C_UNK func_001B2D08(void *);                      /* extern */
M2C_UNK func_001B2EB8(void *, s32);                 /* extern */
M2C_UNK func_001B3700(void *, M2C_UNK *);           /* extern */
M2C_UNK func_001B3880(void *);                      /* extern */
extern void *D_005CC508;
extern M2C_UNK func_001B3AF0;

s32 func_001B3B28(void *arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_v0_2;
    u16 temp_v1;
    u16 var_a0;
    u16 var_v0_3;
    void *var_v1;

    var_v1 = M2C_FIELD(arg0, void **, 0x54);
    if (var_v1 != NULL) {
        var_v0_2 = M2C_FIELD(var_v1, s32 *, 0x38);
    } else {
        var_v1 = D_005CC508;
        M2C_FIELD(arg0, void **, 0x54) = var_v1;
        var_v0_2 = M2C_FIELD(var_v1, s32 *, 0x38);
    }
    if (var_v0_2 == 0) {
        func_001B2D08(var_v1);
    }
    var_a0 = M2C_FIELD(arg0, u16 *, 0xC);
    var_v0 = -1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    if (!(var_a0 & 0x20)) {
        if (var_a0 & 4) {
            temp_a1 = M2C_FIELD(arg0, s32 *, 0x30);
            if (temp_a1 != 0) {
                if (temp_a1 != (arg0 + 0x40)) {
                    func_001B2EB8(M2C_FIELD(arg0, void **, 0x54), temp_a1);
                }
                temp_v0 = M2C_FIELD(arg0, s32 *, 0x3C);
                M2C_FIELD(arg0, s32 *, 0x30) = 0;
                M2C_FIELD(arg0, s32 *, 4) = temp_v0;
                if (temp_v0 != 0) {
                    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x38);
                    return 0;
                }
                goto block_21;
            }
            goto block_21;
        }
        var_v0 = -1;
        if (var_a0 & 0x10) {
            if (var_a0 & 8) {
                var_v0 = -1;
                if (func_001B29E0(arg0) == 0) {
                    M2C_FIELD(arg0, s32 *, 8) = 0;
                    temp_v0_2 = M2C_FIELD(arg0, u16 *, 0xC) & 0xFFF7;
                    M2C_FIELD(arg0, s32 *, 0x18) = 0;
                    M2C_FIELD(arg0, u16 *, 0xC) = temp_v0_2;
                    var_a0 = temp_v0_2;
                    goto block_14;
                }
            } else {
block_14:
                M2C_FIELD(arg0, u16 *, 0xC) = (u16) (var_a0 | 4);
block_21:
                if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
                    func_001B3880(arg0);
                }
                if (M2C_FIELD(arg0, u16 *, 0xC) & 3) {
                    func_001B3700(M2C_FIELD(arg0, void **, 0x54), &func_001B3AF0);
                }
                temp_a1_2 = M2C_FIELD(arg0, s32 *, 0x10);
                M2C_FIELD(arg0, s32 *, 0) = temp_a1_2;
                temp_v0_3 = M2C_FIELD(arg0, s32 (**)(s32, s32, s32), 0x20)(M2C_FIELD(arg0, s32 *, 0x1C), temp_a1_2, M2C_FIELD(arg0, s32 *, 0x14));
                var_v0 = 0;
                temp_v1 = M2C_FIELD(arg0, u16 *, 0xC) & 0xDFFF;
                M2C_FIELD(arg0, s32 *, 4) = temp_v0_3;
                M2C_FIELD(arg0, u16 *, 0xC) = temp_v1;
                if (temp_v0_3 <= 0) {
                    if (temp_v0_3 != 0) {
                        var_v0_3 = temp_v1 | 0x40;
                        M2C_FIELD(arg0, s32 *, 4) = 0;
                    } else {
                        var_v0_3 = temp_v1 | 0x20;
                    }
                    M2C_FIELD(arg0, u16 *, 0xC) = var_v0_3;
                    var_v0 = -1;
                }
            }
        }
        /* Duplicate return node #33. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
