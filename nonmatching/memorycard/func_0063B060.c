/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EDAE0(void *, s8);
extern void func_001EDA30(void *, s32);
extern void func_001ED880(void *, f32);
void *func_001EE0D0();                              /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
s32 func_0063B060(void **arg0, s32 arg1, f32 fparg0) {
    if (*arg0 == NULL) {
        *arg0 = func_001EE0D0();
        if (!(fparg0 <= 0.0f)) {
            func_001ED880(*arg0, fparg0);
        }
        func_001EDA30(*arg0, arg1 & 0xFF);
        func_001EDAE0(*arg0, 0);
        return 1;
    }
    return 0;
}
