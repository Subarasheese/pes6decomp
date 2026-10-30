/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AF0980(void);
extern void func_001D7CE0(void *, void *);
extern f32 func_001E4E30(void);
extern void func_001D7BE0(void *, void *);
/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
void func_00AEEA80(s32 arg0) {
    f32 sp40;
    f32 sp44;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    f32 var_f0;
    u32 temp_v0;
    void *temp_v0_2;

    temp_v0 = func_00AF0980();
    if ((temp_v0 != 0) && (M2C_FIELD(temp_v0, s32 *, 0x2D0) == 0)) {
        temp_v0_2 = ((arg0 & 0xFF) * 0x10) + temp_v0;
        sp50 = M2C_FIELD(temp_v0_2, f32 *, 0xA8);
        sp54 = M2C_FIELD(temp_v0_2, f32 *, 0xAC);
        sp58 = M2C_FIELD(temp_v0_2, f32 *, 0xB0);
        sp5C = M2C_FIELD(temp_v0_2, f32 *, 0xB4);
        func_001D7BE0(M2C_FIELD(temp_v0, void **, 0xA0), &sp40);
        sp44 = sp54;
        sp40 = sp50 - 3.0f;
        func_001D7CE0(M2C_FIELD(temp_v0, void **, 0xA0), &sp40);
        func_001D7BE0(M2C_FIELD(temp_v0, void **, 0xA4), &sp40);
        var_f0 = func_001E4E30();
        if (var_f0 > 205.0f) {
            var_f0 = 200.0f;
        }
        sp44 = sp54;
        sp40 = 10.0f + (sp50 + var_f0);
        func_001D7CE0(M2C_FIELD(temp_v0, void **, 0xA4), &sp40);
    }
}
