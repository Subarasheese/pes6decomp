/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00A997C0(void *arg0, f32 fparg0, f32 fparg1) {
    f32 var_f12;
    f32 var_f13;

    var_f12 = fparg0;
    var_f13 = fparg1;
    if (!(var_f12 <= 13449.0f)) {
        var_f12 = 13449.0f;
    }
    if (var_f12 < -13449.0f) {
        var_f12 = -13449.0f;
    }
    if (!(var_f13 <= 8713.0f)) {
        var_f13 = 8713.0f;
    }
    if (var_f13 < -8713.0f) {
        var_f13 = -8713.0f;
    }
    M2C_FIELD(arg0, f32 *, 0x6C) = var_f12;
    M2C_FIELD(arg0, f32 *, 0x70) = var_f13;
}
