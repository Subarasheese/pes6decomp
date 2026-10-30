/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00CCBDF4;

void func_00C76AE0(f32 *arg0, f32 *arg1) {
    f32 var_f2;
    f32 var_f3;

    var_f3 = 0.0f;
    var_f2 = 0.0f;
    if (D_00CCBDF4 != NULL) {
        var_f2 = M2C_FIELD(D_00CCBDF4, f32 *, 0x1D0);
        var_f3 = M2C_FIELD(D_00CCBDF4, f32 *, 0x1CC);
        if (M2C_FIELD(D_00CCBDF4, f32 *, 0x1D4) < 0.0f) {
            var_f3 = -var_f3;
            var_f2 = -var_f2;
        }
    }
    if (arg0 != NULL) {
        *arg0 = var_f3;
    }
    if (arg1 != NULL) {
        *arg1 = var_f2;
    }
}
