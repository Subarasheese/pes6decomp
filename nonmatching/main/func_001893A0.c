/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_00151CF0(M2C_UNK);                         /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
void func_001893A0(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f20;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f9;

    temp_f20 = func_00151CF0(0x3F800000);
    temp_f0 = func_00151CF0(0x3F800000);
    temp_f8 = M2C_FIELD(arg1, f32 *, 0);
    temp_f5 = M2C_FIELD(arg1, f32 *, 4);
    temp_f3 = M2C_FIELD(arg1, f32 *, 8);
    temp_f7 = M2C_FIELD(arg1, f32 *, 0x18);
    temp_f10 = ((M2C_FIELD(arg1, f32 *, 0xC) - temp_f8) * temp_f20) + temp_f8;
    temp_f9 = ((M2C_FIELD(arg1, f32 *, 0x10) - temp_f5) * temp_f20) + temp_f5;
    temp_f8_2 = ((M2C_FIELD(arg1, f32 *, 0x14) - temp_f3) * temp_f20) + temp_f3;
    temp_f5_2 = M2C_FIELD(arg1, f32 *, 0x1C);
    temp_f4 = M2C_FIELD(arg1, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0) = (f32) ((((((M2C_FIELD(arg1, f32 *, 0x24) - temp_f7) * temp_f20) + temp_f7) - temp_f10) * temp_f0) + temp_f10);
    M2C_FIELD(arg0, f32 *, 4) = (f32) ((((((M2C_FIELD(arg1, f32 *, 0x28) - temp_f5_2) * temp_f20) + temp_f5_2) - temp_f9) * temp_f0) + temp_f9);
    M2C_FIELD(arg0, f32 *, 8) = (f32) ((((((M2C_FIELD(arg1, f32 *, 0x2C) - temp_f4) * temp_f20) + temp_f4) - temp_f8_2) * temp_f0) + temp_f8_2);
}
