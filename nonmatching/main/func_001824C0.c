/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001432B0(void *, void *, s32);
/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54], gap at: 0x8. */
void func_001824C0(void *arg0, s32 arg1, s32 arg2, f32 fparg0) {
    s32 var_s0;
    s32 var_s2;
    void *temp_v0;

    var_s2 = arg1;
    var_s0 = 0;
    if (arg2 > 0) {
        do {
            temp_v0 = func_001432B0(M2C_FIELD(arg0, void **, 0), M2C_FIELD(arg0, void **, 4), var_s2);
            if (temp_v0 != NULL) {
                M2C_FIELD(temp_v0, f32 *, 0x34) = fparg0;
            }
            var_s0 += 1;
            var_s2 += 1;
        } while (var_s0 < arg2);
    }
}
