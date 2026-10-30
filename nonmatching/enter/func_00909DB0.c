/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0027B2E0(void *);
extern void func_001A58E0(void *, signed char);
void **func_00299FE0(s32);                          /* extern */
extern char D_0092F0D0[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
void func_00909DB0(void) {
    s32 temp_s1;
    s32 var_s0;

    if (!((*(s32 *)D_0092F0D0) & 0x80)) {
        var_s0 = 0;
        do {
            temp_s1 = var_s0 & 0xFF;
            func_0027B2E0(*func_00299FE0(temp_s1));
            func_001A58E0(*func_00299FE0(temp_s1), 0);
            var_s0 = (var_s0 + 1) & 0xFF;
            M2C_FIELD(M2C_FIELD(*func_00299FE0(temp_s1), void **, 0x1D8), f32 *, 4) = -50000.0f;
        } while (var_s0 < 3);
        (*(s32 *)D_0092F0D0) |= 0x80;
    }
}
