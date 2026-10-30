/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F3C80(void *, f32);
extern void func_002E5A20(int);
/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44], gap at: 0x8. */
void func_002E4BB0(void *arg0, f32 fparg0) {
    s32 var_s1;
    s32 var_s2;

    if (arg0 != NULL) {
        func_001F3C80(M2C_FIELD(arg0, void **, 0x18), fparg0);
        var_s2 = 0;
        if (M2C_FIELD(arg0, s16 *, 0x1C) > 0) {
            var_s1 = 0;
            do {
                func_002E5A20(M2C_FIELD(arg0, s32 *, 0x20) + var_s1);
                var_s2 += 1;
                var_s1 += 0x50;
            } while (var_s2 < M2C_FIELD(arg0, s16 *, 0x1C));
        }
    }
}
