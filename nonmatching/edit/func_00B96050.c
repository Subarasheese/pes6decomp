/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001E6B70(s32);
void func_00B96050(s32 arg0) {
    s32 var_s0;
    s32 var_s0_2;

    if (arg0 == 3) {
        var_s0 = 0x7387;
        do {
            func_001E6B70(var_s0);
            var_s0 += 1;
        } while (var_s0 < 0x73A5);
        return;
    }
    var_s0_2 = 0x7347;
    do {
        func_001E6B70(var_s0_2);
        var_s0_2 += 1;
    } while (var_s0_2 < 0x7365);
}
