/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void *D_003EA60C;

s32 func_009009D0(void) {
    s32 var_s0;

    var_s0 = 0;
    if (D_003EA60C != NULL) {
        var_s0 = M2C_FIELD(D_003EA60C, s32 *, 0x10);
        func_00153FA0(D_003EA60C);
        D_003EA60C = NULL;
    }
    return var_s0;
}
