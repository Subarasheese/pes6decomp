/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_00129AD0(f32, f32, f32);                   /* extern */
extern f32 D_003E7468;
extern s32 *D_003E98D4;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
void func_001AA4D0(void *arg0) {
    f32 (*temp_v1)(f32, f32);
    f32 temp_f3;
    f32 var_f0;
    f32 var_f20;
    f32 var_f2;
    void *temp_s0;
    void *temp_v0;

    var_f20 = 1.0f;
    temp_s0 = M2C_FIELD(arg0, void **, 0x10);
    if ((*D_003E98D4 != 4) && (temp_v1 = M2C_FIELD(arg0, f32 (**)(f32, f32), 0x1C8), (temp_v1 != NULL))) {
        temp_v0 = M2C_FIELD(arg0, void **, 0x1D8);
        var_f0 = temp_v1(M2C_FIELD(temp_v0, f32 *, 0), M2C_FIELD(temp_v0, f32 *, 8));
    } else {
        var_f0 = 1.0f;
    }
    temp_f3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1D8), f32 *, 4);
    if (temp_f3 < -200.0f) {
        var_f2 = (1200.0f + temp_f3) / 1000.0f;
        if (var_f2 < 0.0f) {
            var_f2 = 0.0f;
        }
        if (var_f2 < var_f0) {
            var_f20 = var_f2;
        }
    }
    if (var_f0 > 1.0f) {
        M2C_FIELD(temp_s0, f32 *, 0x110) = 1.0f;
    } else {
        M2C_FIELD(temp_s0, f32 *, 0x110) = var_f0;
    }
    M2C_FIELD(temp_s0, f32 *, 0x114) = func_00129AD0(var_f0, D_003E7468, var_f20);
}
