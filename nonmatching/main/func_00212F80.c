/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern void *D_003E9A00;

void func_00212F80(void *arg0, u8 arg1) {
    void *var_a0;

    var_a0 = arg0;
    if (var_a0 != NULL) {

    } else {
        var_a0 = D_003E9A00;
    }
    if (var_a0 != NULL) {
        func_001F3D10(M2C_FIELD(var_a0, s32 *, 0x590), arg1);
    }
}
