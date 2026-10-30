/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AECAE0();                                /* extern */
extern u8 D_003EAF30;

s32 func_00AE29C0(void) {
    s32 var_s0;

    var_s0 = 0;
    if (D_003EAF30 & 1) {
        var_s0 = 1;
    } else if (func_00AECAE0() == 1) {
        var_s0 = 1;
        D_003EAF30 = (D_003EAF30 & ~1) | (1 & 1);
    }
    return var_s0;
}
