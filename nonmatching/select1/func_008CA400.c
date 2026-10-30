/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001ED880(void *, f32);
extern f32 func_001D79A0(void *, u16);
extern void Pes6Sprite_SetPositionZ(void *, float);
/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
void func_008CA400(void *arg0, f32 fparg0) {
    f32 temp_f20;
    s32 var_s0;
    void *var_s1;

    var_s1 = arg0;
    if (var_s1 != NULL) {
        Pes6Sprite_SetPositionZ(M2C_FIELD(var_s1, void **, 4), fparg0);
        Pes6Sprite_SetPositionZ(M2C_FIELD(var_s1, void **, 0x174), fparg0);
        Pes6Sprite_SetPositionZ(M2C_FIELD(var_s1, void **, 8), fparg0);
        temp_f20 = func_001D79A0(M2C_FIELD(var_s1, void **, 8), 1U);
        var_s0 = 0;
        do {
            func_001ED880(M2C_FIELD(var_s1, void **, 0x178), temp_f20);
            var_s0 += 1;
            var_s1 += 4;
        } while (var_s0 < 2);
    }
}
