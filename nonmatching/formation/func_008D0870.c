/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF860(void *, void *);
M2C_UNK func_001EE5D0(void *, s32 *);               /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24], gap at: 0x8. */
void func_008D0870(void *arg0, s64 arg1) {
    s32 sp30;
    f32 sp34;
    f32 temp_f20;

    temp_f20 = (f32) (((s64) (arg1 << 0x30) >> 0x30) * M2C_FIELD(arg0, u8 *, 6));
    func_001EE5D0(M2C_FIELD(arg0, void **, 0x1C0), &sp30);
    sp34 = temp_f20;
    sp30 = 0;
    func_001EF860(M2C_FIELD(arg0, void **, 0x1C0), &sp30);
}
