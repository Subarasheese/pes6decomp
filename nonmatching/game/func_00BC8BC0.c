/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char D_00CBD390[];

s32 func_00BC8BC0(void) {
    s32 *var_v1;
    s32 var_a0;

    var_a0 = 0;
    var_v1 = (s32 *)D_00CBD390;
    while (*var_v1 != 0) {
        var_a0 += 1;
        var_v1 += 1;
        if (var_a0 >= 6) {
            break;
        }
    }
    return var_a0 & 0xFF;
}
