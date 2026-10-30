/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CFF57C[];

s32 func_00CE7AA0(s32 *arg0, s32 arg1) {
    s32 *var_a0;
    s32 *var_a1;
    s32 var_v1;

    var_a0 = arg0;
    if (var_a0 == NULL) {
        return 0;
    }
    if (arg1 < 0) {
        return 0;
    }
    if (arg1 < 4) {
        var_v1 = 0x25;
        var_a1 = ((void *)D_00CFF57C) + (arg1 * 0x94);
        do {
            var_v1 -= 1;
            *var_a0 = *var_a1;
            var_a1 += 4;
            var_a0 += 4;
        } while (var_v1 > 0);
        return 1;
    }
    return 0;
}
