/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_008C5740(void *);
extern f32 func_001D79A0(void *, u16);
s32 func_008B9F90(s32, s32 *, f32);                 /* extern */
s32 func_008BA000(s32 *, M2C_UNK);                  /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
void func_008D1A20(void *arg0) {
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    f32 var_f0;
    s32 temp_v0;
    u32 temp_v0_2;

    sp40 = 0;
    sp44 = 0;
    sp48 = 0;
    sp4C = 0;
    temp_v0 = func_008BA000(&sp40, 0);
    M2C_FIELD(arg0, s32 *, 0x3C) = temp_v0;
    temp_v0_2 = func_008C5740(arg0 + 0x214);
    if (M2C_FIELD(arg0, u8 *, 1) == 1) {
        var_f0 = func_001D79A0((void *) temp_v0_2, 0x97U);
    } else {
        M2C_FIELD(arg0, s32 *, 0x40) = func_008B9F90(temp_v0, &sp40, func_001D79A0((void *) temp_v0_2, 0x65U));
        var_f0 = func_001D79A0(M2C_FIELD(arg0, void **, 0x1F4), 0x70U);
    }
    M2C_FIELD(arg0, s32 *, 0x4C) = func_008B9F90(temp_v0, NULL, var_f0);
    M2C_FIELD(arg0, s32 *, 0x44) = func_008B9F90(temp_v0, &sp40, var_f0);
    M2C_FIELD(arg0, s32 *, 0x48) = func_008B9F90(temp_v0, NULL, var_f0);
}
