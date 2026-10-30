/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBD390[];

s32 func_00BC8BC0(void) {
    s32 *var_v1;
    s32 var_a0;

    var_a0 = 0;
    var_v1 = ((void *)D_00CBD390);
loop_1:
    if (*var_v1 != 0) {
        var_a0 += 1;
        var_v1 += 4;
        if (var_a0 >= 6) {

        } else {
            goto loop_1;
        }
    }
    return var_a0 & 0xFF;
}
