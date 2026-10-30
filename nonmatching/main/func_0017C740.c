/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00131A40(void *, s32, f32);
M2C_UNK func_00132500(void *);                      /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64], gap at: 0x8. */
void func_0017C740(void *arg0, s32 arg1, f32 fparg0) {
    s32 var_s0;
    s32 var_s1;
    void *temp_s4;

    var_s1 = 0;
    if (M2C_FIELD(arg0, s8 *, 3) > 0) {
        var_s0 = 0;
        do {
            temp_s4 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0xC) + var_s0), void **, 4);
            func_00131A40(temp_s4, arg1, fparg0);
            func_00132500(temp_s4);
            var_s1 += 1;
            var_s0 += 8;
        } while (var_s1 < M2C_FIELD(arg0, s8 *, 3));
    }
}
