/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009A8D00(s32, s32);                    /* extern */

void func_009A8560(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;

    if (arg0 != 0) {
        var_s2 = 0;
        if (arg1 > 0) {
            var_s1 = arg2;
            var_s0 = arg0;
            do {
                func_009A8D00(var_s0, var_s1);
                var_s2 += 1;
                var_s1 += 0x10;
                var_s0 += 0x80;
            } while (var_s2 < arg1);
        }
    }
}
