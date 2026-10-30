/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002643F0(void);
s32 func_00CDCCB0();                                /* extern */

void func_00808E30(void *arg0, void *arg1) {
    f32 sp38;
    f32 sp3C;
    f32 *var_a0;
    f32 temp_f0;
    s32 var_a1;
    s32 var_v1;

    if (func_00CDCCB0() != 1) {
        var_a1 = M2C_FIELD(arg1, s32 *, 0x218);
    } else {
        var_a1 = func_002643F0();
    }
    var_a0 = &sp38;
    var_v1 = 8;
    if (var_a0 != NULL) {
        do {
            *var_a0 = 0;
            var_v1 -= 1;
            var_a0 += 1;
        } while (var_v1 != 0);
    }
    sp38 = (f32) M2C_FIELD(var_a1, s16 *, 0x164);
    temp_f0 = (f32) M2C_FIELD(var_a1, s16 *, 0x166);
    sp3C = temp_f0;
    M2C_FIELD(arg0, f32 *, 0) = sp38;
    M2C_FIELD(arg0, f32 *, 4) = temp_f0;
}
