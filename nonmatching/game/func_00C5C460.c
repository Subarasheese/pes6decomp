/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00C132C0(void *);
extern u8 func_00C132B0(void *);
extern u32 func_00C137B0(u32);
s32 func_002C4B50(void *, s32);                     /* extern */
void *func_00C13280(void *);                        /* extern */
f32 func_00C18BB0(u16, f32, M2C_UNK);               /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64], gap at: 0x8. */
s32 func_00C5C460(u32 arg0, u32 arg1, s32 arg2, s32 (*arg3)(f32 *)) {
    f32 sp7C;
    f32 temp_f20;
    s32 var_s2;
    u32 var_s1;

    var_s2 = 0;
    var_s1 = -1U;
    if ((arg0 != -1U) && (arg1 != -1U)) {
        var_s1 = arg1;
        if (arg1 < arg0) {
            goto block_3;
        }
loop_5:
        if (((func_00C132C0((void *) var_s1) & 0xFF) != 0xA) || ((arg2 & 0xFF) != (func_00C132B0((void *) var_s1) & 0xFF))) {
            var_s1 = func_00C137B0(var_s1);
            if (var_s1 < arg0) {
block_3:
                var_s1 = -1U;
            } else {
                goto loop_5;
            }
        }
    }
    if (var_s1 != -1U) {
        temp_f20 = (f32) func_002C4B50((void *) var_s1, ((s32) (func_00C132B0((void *) var_s1) & 0xFF) >> 5) & 1);
        sp7C = func_00C18BB0(M2C_FIELD(func_00C13280((void *) var_s1), u16 *, 2), 13465.0f * temp_f20, 0);
        var_s2 = arg3(&sp7C);
    }
    return var_s2;
}
