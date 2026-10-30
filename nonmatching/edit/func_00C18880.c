/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001E6B70(s32);
void func_00C18880(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_001E6B70(var_s0 + 0x740B);
        var_s0 += 1;
    } while (var_s0 < 0x54);
}
