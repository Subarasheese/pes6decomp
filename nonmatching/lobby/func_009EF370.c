/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009F0610(s32);                         /* extern */
M2C_UNK func_009F0650(s32);                         /* extern */

void func_009EF370(s32 *arg0, s32 arg1, s32 arg2) {
    M2C_UNK (*var_s0)(s32);
    s32 *var_s1;
    s32 var_s2;

    if (arg2 != 0) {
        var_s0 = func_009F0610;
    } else {
        var_s0 = func_009F0650;
    }
    var_s2 = 0;
    if (arg1 > 0) {
        var_s1 = arg0;
        do {
            var_s0(*var_s1);
            var_s2 += 1;
            var_s1 += 4;
        } while (var_s2 < arg1);
    }
}
