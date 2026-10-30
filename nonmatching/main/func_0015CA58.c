/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00378198[];

s8 *func_0015CA58(void) {
    s32 var_a1;
    s8 *temp_v0;
    s8 *var_a3;

    var_a3 = NULL;
    var_a1 = 0;
    if ((*(s8 *)D_00378198) == 0) {
        var_a3 = ((void *)D_00378198);
    } else {
loop_2:
        var_a1 += 1;
        if (var_a1 < 0x10) {
            temp_v0 = (var_a1 * 0x44) + (((void *)D_00378198) - 0x7E68);
            if (*temp_v0 == 0) {
                var_a3 = temp_v0;
            } else {
                goto loop_2;
            }
        }
    }
    return var_a3;
}
