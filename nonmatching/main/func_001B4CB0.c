/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001E5A10(void *, f32);
extern void func_001E59D0(void *, s8);
/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24], gap at: 0x8. */
void func_001B4CB0(void *arg0, f32 fparg0, f32 fparg1) {
    if (arg0 != NULL) {
        func_001E5A10(M2C_FIELD(arg0, void **, 0), fparg0);
        func_001E5A10(M2C_FIELD(arg0, void **, 4), fparg1);
        if (arg0 != NULL) {
            func_001E59D0(M2C_FIELD(arg0, void **, 0), 1);
            func_001E59D0(M2C_FIELD(arg0, void **, 4), 1);
            M2C_FIELD(arg0, s32 *, 8) = 1;
        }
    }
}
