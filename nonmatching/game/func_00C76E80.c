/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *Pes6Ball_Current;

void func_00C76E80(f32 *arg0, f32 *arg1, f32 *arg2) {
    f32 var_f0;
    f32 var_f1;
    f32 var_f2;

    var_f2 = 0.0f;
    var_f1 = 0.0f;
    var_f0 = 0.0f;
    if (Pes6Ball_Current != NULL) {
        var_f2 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x10);
        var_f1 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x14);
        var_f0 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x18);
    }
    if (arg0 != NULL) {
        *arg0 = var_f2;
    }
    if (arg1 != NULL) {
        *arg1 = var_f1;
    }
    if (arg2 != NULL) {
        *arg2 = var_f0;
    }
}
