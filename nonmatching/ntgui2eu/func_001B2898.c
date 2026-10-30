/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B2D08(void *);                      /* extern */
M2C_UNK func_001B2EB8(void *, s32);                 /* extern */
M2C_UNK func_001B3880(void *, s32);                 /* extern */
extern void *D_005CC508;

s32 func_001B2898(void *arg0) {
    s32 temp_a1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1_2;
    u16 temp_v0;
    u16 temp_v1;
    u16 var_a0;
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
    if (var_a0 & 8) {
        goto block_19;
    }
    var_v0 = -1;
    if (var_a0 & 0x10) {
        if (!(var_a0 & 4)) {

        } else {
            temp_a1 = M2C_FIELD(arg0, s32 *, 0x30);
            if (temp_a1 != 0) {
                if (temp_a1 != (arg0 + 0x40)) {
                    func_001B2EB8(M2C_FIELD(arg0, void **, 0x54), temp_a1);
                }
                M2C_FIELD(arg0, s32 *, 0x30) = 0;
            }
            temp_v0 = M2C_FIELD(arg0, u16 *, 0xC) & ~0x24;
            M2C_FIELD(arg0, s32 *, 4) = 0;
            M2C_FIELD(arg0, u16 *, 0xC) = temp_v0;
            var_a0 = temp_v0;
            M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
        }
        M2C_FIELD(arg0, u16 *, 0xC) = (u16) (var_a0 | 8);
block_19:
        if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
            func_001B3880(arg0, M2C_FIELD(arg0, s32 *, 0x10));
        }
        temp_v1 = M2C_FIELD(arg0, u16 *, 0xC);
        if (temp_v1 & 1) {
            M2C_FIELD(arg0, s32 *, 8) = 0;
            M2C_FIELD(arg0, s32 *, 0x18) = (s32) -M2C_FIELD(arg0, s32 *, 0x14);
        } else {
            var_v1_2 = 0;
            if (!(temp_v1 & 2)) {
                var_v1_2 = M2C_FIELD(arg0, s32 *, 0x14);
            }
            M2C_FIELD(arg0, s32 *, 8) = var_v1_2;
        }
        var_v0 = 0;
    }
    return var_v0;
}
