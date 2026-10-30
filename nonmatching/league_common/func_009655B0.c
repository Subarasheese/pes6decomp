/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0094C790(M2C_UNK);                     /* extern */
M2C_UNK func_009999E0();                            /* extern */
extern void *D_003E77AC;

s32 func_009655B0(void) {
    s32 var_s0;

    var_s0 = -1;
    if (M2C_FIELD(D_003E77AC, s32 *, 4) != 0) {

    } else {
        func_009999E0();
        var_s0 = 0xA;
    }
    if (var_s0 != -1) {
        func_0094C790(0);
    }
    return var_s0;
}
