/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A5F70[];

s32 func_0095ADF0(void) {
    s32 temp_a0;
    s32 var_a2;
    s32 var_v1;

    var_a2 = 0;
loop_14:
    temp_a0 = var_a2 & 0xFF;
    if (temp_a0 >= 5) {
        return 0;
    }
    if (temp_a0 < 0) {
        var_v1 = 0;
    } else if (temp_a0 < 5) {
        var_v1 = M2C_FIELD((((void *)D_008A5F70) + temp_a0), s8 *, 0x354E) == 0x31;
    } else {
        var_v1 = 0;
    }
    if (var_v1 != 1) {
        var_a2 = (var_a2 + 1) & 0xFF;
        goto loop_14;
    }
    return 1;
}
