/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0010F760(s32 arg0) {
    s32 var_v1;

    var_v1 = 0x1F;
    if (arg0 >= 0) {
        var_v1 = 0x1E;
loop_2:
        if (var_v1 > 0) {
            if (!((arg0 >> var_v1) & 1)) {
                var_v1 -= 1;
                goto loop_2;
            }
        }
    }
    return var_v1 + ((1 << var_v1) < arg0);
}
