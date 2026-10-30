/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001EE5D0(s32, void *);                 /* extern */
M2C_UNK func_001EF370(s32, f32 *);                  /* extern */

void func_00CF2270(void *arg0) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f2;
    f32 var_f2_2;

    sp20 = M2C_FIELD(arg0, f32 *, 0x28);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x30);
    if (!(temp_f1 <= 16.0f)) {
        var_f2 = (temp_f1 - 16.0f) / 2.0f;
    } else {
        var_f2 = 0.0f;
    }
    sp20 += var_f2;
    sp24 = M2C_FIELD(arg0, f32 *, 0x2C);
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x34);
    if (!(temp_f1_2 <= 16.0f)) {
        var_f2_2 = (temp_f1_2 - 16.0f) / 2.0f;
    } else {
        var_f2_2 = 0.0f;
    }
    var_f0 = 16.0f;
    sp24 += var_f2_2;
    temp_f1_3 = M2C_FIELD(arg0, f32 *, 0x30);
    if (temp_f1_3 <= 16.0f) {
        var_f0 = temp_f1_3;
    }
    sp28 = var_f0;
    temp_f1_4 = M2C_FIELD(arg0, f32 *, 0x34);
    var_f0_2 = 16.0f;
    if (temp_f1_4 <= 16.0f) {
        var_f0_2 = temp_f1_4;
    }
    sp2C = var_f0_2;
    func_001EF370(M2C_FIELD(arg0, s32 *, 0x14), &sp20);
    func_001EE5D0(M2C_FIELD(arg0, s32 *, 0x14), arg0 + 0xB0);
    sp20 = M2C_FIELD(arg0, f32 *, 0x28) - 16.0f;
    sp28 = 16.0f;
    sp2C = 16.0f;
    sp24 = M2C_FIELD(arg0, f32 *, 0x2C) - 16.0f;
    func_001EF370(M2C_FIELD(arg0, s32 *, 4), &sp20);
    func_001EE5D0(M2C_FIELD(arg0, s32 *, 4), arg0 + 0x70);
    sp20 = M2C_FIELD(arg0, f32 *, 0x28) - 16.0f;
    sp24 = M2C_FIELD(arg0, f32 *, 0x2C);
    sp28 = 16.0f;
    sp2C = M2C_FIELD(arg0, f32 *, 0x34);
    func_001EF370(M2C_FIELD(arg0, s32 *, 8), &sp20);
    func_001EE5D0(M2C_FIELD(arg0, s32 *, 8), arg0 + 0x80);
    sp20 = M2C_FIELD(arg0, f32 *, 0x28) - 16.0f;
    sp28 = 16.0f;
    sp2C = 16.0f;
    sp24 = M2C_FIELD(arg0, f32 *, 0x2C) + M2C_FIELD(arg0, f32 *, 0x34);
    func_001EF370(M2C_FIELD(arg0, s32 *, 0xC), &sp20);
    func_001EE5D0(M2C_FIELD(arg0, s32 *, 0xC), arg0 + 0x90);
    sp20 = M2C_FIELD(arg0, f32 *, 0x28);
    sp24 = M2C_FIELD(arg0, f32 *, 0x2C) - 16.0f;
    sp28 = M2C_FIELD(arg0, f32 *, 0x30);
    sp2C = 16.0f;
    func_001EF370(M2C_FIELD(arg0, s32 *, 0x10), &sp20);
    func_001EE5D0(M2C_FIELD(arg0, s32 *, 0x10), arg0 + 0xA0);
    sp20 = M2C_FIELD(arg0, f32 *, 0x28);
    sp24 = M2C_FIELD(arg0, f32 *, 0x2C) + M2C_FIELD(arg0, f32 *, 0x34);
    sp28 = M2C_FIELD(arg0, f32 *, 0x30);
    sp2C = 16.0f;
    func_001EF370(M2C_FIELD(arg0, s32 *, 0x18), &sp20);
    func_001EE5D0(M2C_FIELD(arg0, s32 *, 0x18), arg0 + 0xC0);
    sp20 = M2C_FIELD(arg0, f32 *, 0x28) + M2C_FIELD(arg0, f32 *, 0x30);
    sp28 = 16.0f;
    sp2C = 16.0f;
    sp24 = M2C_FIELD(arg0, f32 *, 0x2C) - 16.0f;
    func_001EF370(M2C_FIELD(arg0, s32 *, 0x1C), &sp20);
    func_001EE5D0(M2C_FIELD(arg0, s32 *, 0x1C), arg0 + 0xD0);
    sp20 = M2C_FIELD(arg0, f32 *, 0x28) + M2C_FIELD(arg0, f32 *, 0x30);
    sp24 = M2C_FIELD(arg0, f32 *, 0x2C);
    sp28 = 16.0f;
    sp2C = M2C_FIELD(arg0, f32 *, 0x34);
    func_001EF370(M2C_FIELD(arg0, s32 *, 0x20), &sp20);
    func_001EE5D0(M2C_FIELD(arg0, s32 *, 0x20), arg0 + 0xE0);
    sp20 = M2C_FIELD(arg0, f32 *, 0x28) + M2C_FIELD(arg0, f32 *, 0x30);
    sp28 = 16.0f;
    sp2C = 16.0f;
    sp24 = M2C_FIELD(arg0, f32 *, 0x2C) + M2C_FIELD(arg0, f32 *, 0x34);
    func_001EF370(M2C_FIELD(arg0, s32 *, 0x24), &sp20);
    func_001EE5D0(M2C_FIELD(arg0, s32 *, 0x24), arg0 + 0xF0);
}
