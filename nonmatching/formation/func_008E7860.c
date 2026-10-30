/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern f32 func_001D79A0(void *, u16);
M2C_UNK func_001D7A20(void *, M2C_UNK32 *, M2C_UNK); /* extern */
s32 func_008B9B70(s32, M2C_UNK32 *, M2C_UNK);       /* extern */
s32 func_008B9F90(s32, M2C_UNK32 *, f32);           /* extern */
s32 func_008BA000(M2C_UNK32 *, f32);                /* extern */
void *func_008C1490(M2C_UNK, M2C_UNK32 *);          /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
void func_008E7860(void *arg0, void *arg1) {
    M2C_UNK32 sp40;
    M2C_UNK32 sp44;
    f32 sp48;
    M2C_UNK32 sp50;
    M2C_UNK32 sp54;
    s32 sp58;
    s32 sp5C;
    f32 temp_f12;
    f32 temp_f20;
    s32 temp_s0;
    s32 temp_v0_2;
    void *temp_a0;
    void *temp_v0;

    temp_a0 = M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0) * 4) + arg0), void **, 0x14);
    if ((temp_a0 != NULL) && (M2C_FIELD(arg0, s32 *, 4) == 0) && (M2C_FIELD(arg0, void **, 0x10) == NULL)) {
        if (M2C_FIELD(arg0, s32 *, 8) != 0) {
            return;
        }
        func_001D7A20(temp_a0, &sp50, 0xFE);
        sp40 = sp50;
        sp44 = sp54;
        sp48 = M2C_FIELD(arg1, f32 *, 8);
        temp_v0 = func_008C1490(0x34, &sp40);
        M2C_FIELD(arg0, void **, 0x10) = temp_v0;
        temp_f20 = func_001D79A0(temp_v0, 0x101U);
        temp_f12 = temp_f20;
        sp50 = 0;
        sp54 = 0;
        sp58 = 0;
        sp5C = 0;
        temp_v0_2 = func_008BA000(&sp50, temp_f12);
        M2C_FIELD(arg0, s32 *, 4) = temp_v0_2;
        temp_s0 = func_008B9F90(temp_v0_2, &sp50, temp_f20);
        func_001D7A20(M2C_FIELD(arg0, void **, 0x10), &sp50, 0x101);
        M2C_FIELD(arg0, s32 *, 8) = func_008B9B70(temp_s0, &sp50, 0);
    }
}
