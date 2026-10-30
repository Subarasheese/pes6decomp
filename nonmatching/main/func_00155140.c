/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00154F98(s32);                             /* extern */
extern u8 D_003E9838;

u8 func_00155140(void) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    D_003E9838 = 0;
    var_s0 = 0;
    do {
        if (func_00154F98(var_s1) == 1) {
            D_003E9838 |= (0xF << var_s0) & 0xFF;
        } else {
            D_003E9838 |= (1 << var_s0) & 0xFF;
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2);
    return D_003E9838;
}
