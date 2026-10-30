/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_0011D238(M2C_UNK, M2C_UNK, M2C_UNK, f32);  /* extern */
M2C_UNK func_00296330(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, f32 *, M2C_UNK, M2C_UNK); /* extern */
extern char D_005A24C0[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24], gap at: 0x8. */
void func_00BA99D0(void **arg0) {
    f32 sp30;
    s32 sp34;
    f32 sp38;
    s32 sp40;
    f32 sp44;
    s32 sp48;
    f32 temp_f1;
    f32 temp_f20;
    f32 var_f0;
    f32 var_f20;
    f32 var_f2;
    f32 var_f4;
    s32 var_a0;
    void *temp_v1;

    temp_v1 = *arg0;
    var_f4 = 8985.0f;
    var_f2 = 10098.75f;
    var_a0 = 0xC000 & 0xFFFF;
    if (M2C_FIELD(temp_v1, f32 *, 0x6C) < 0.0f) {
        var_f2 = 10098.75f * -1.0f;
    }
    if (M2C_FIELD(temp_v1, f32 *, 0x70) < 0.0f) {
        var_a0 = 0x4000;
        var_f4 = 8985.0f * -1.0f;
    }
    sp34 = 0;
    sp40 = 0;
    sp30 = 0.2f * -var_f2;
    sp38 = 0.2f * var_f4;
    if (var_a0 >= 0) {
        var_f0 = (f32) var_a0;
    } else {
        var_f0 = 2.0f * (f32) (((u32) var_a0 >> 1) | (var_a0 & 1));
    }
    temp_f1 = -1.0f * (1.5707964f + ((3.1415927f * (2.0f * var_f0)) / 65536.0f));
    sp44 = temp_f1;
    temp_f20 = 0.15915494f * temp_f1;
    var_f20 = temp_f20 - func_0011D238(0x3FC90FDB, 0x47800000, 0x40490FDB, temp_f20);
    if (!(var_f20 <= 0.5f)) {
        var_f20 -= 1.0f;
    }
    sp48 = 0;
    sp44 = 3.1415927f * (2.0f * var_f20);
    func_00296330(((void *)D_005A24C0), 0, 0xFF, 0, &sp30, 0, 0);
}
