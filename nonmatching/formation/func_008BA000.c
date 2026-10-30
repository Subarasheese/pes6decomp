/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001F1F10(void);
extern void func_001F3C80(void *, f32);
extern s32 func_001F3D10(s32, u8);
M2C_UNK func_001F3D80(void *, s32, M2C_UNK);        /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
void *func_008BA000(s32 arg0, f32 fparg0) {
    void *temp_v0;

    temp_v0 = func_001F1F10();
    func_001F3C80(temp_v0, fparg0);
    func_001F3D10((s32) temp_v0, 1U);
    if (arg0 != 0) {
        func_001F3D80(temp_v0, arg0, 0);
    }
    return temp_v0;
}
