/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001ED880(s32);                         /* extern */
M2C_UNK func_001F3C80(s32, f32);                    /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24], gap at: 0x8. */
void func_002F0110(void *arg0, f32 fparg0) {
    if (arg0 != NULL) {
        func_001ED880(M2C_FIELD(arg0, s32 *, 0x90));
        func_001F3C80(M2C_FIELD(arg0, s32 *, 0x60), fparg0);
        func_001F3C80(M2C_FIELD(arg0, s32 *, 0x64), fparg0);
    }
}
