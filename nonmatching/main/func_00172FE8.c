/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0038C1F8[];

s8 *func_00172FE8(void) {
    s32 var_a1;
    s8 *temp_v0;
    s8 *var_a3;

    var_a3 = NULL;
    var_a1 = 0;
    if ((*(s8 *)D_0038C1F8) == 0) {
        var_a3 = ((void *)D_0038C1F8);
    } else {
loop_2:
        var_a1 += 1;
        if (var_a1 < 0x28) {
            temp_v0 = (var_a1 * 0x38) + (((void *)D_0038C1F8) - 0x3E08);
            if (*temp_v0 == 0) {
                var_a3 = temp_v0;
            } else {
                goto loop_2;
            }
        }
    }
    return var_a3;
}
