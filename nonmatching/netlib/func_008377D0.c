/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00828160();                                /* extern */
s32 func_00837880();                                /* extern */
s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];

s32 func_008377D0(void) {
    M2C_UNK *var_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_v1;

    temp_s1 = func_00828160();
    if (func_00D0BAF0() == 0) {
        var_s0 = NULL;
    } else {
        var_s0 = ((void *)D_008A5CB0);
    }
    if (var_s0 == NULL) {
        goto block_18;
    }
    if (func_00837880() == 0) {
        goto block_18;
    }
    if (temp_s1 != 0) {
        var_v1 = 0;
loop_15:
        if (var_v1 < 4) {
            temp_v0 = *(var_s0 + (var_v1 * 0x88));
            if (temp_s1 == temp_v0) {
                var_v1 += 1;
                goto loop_15;
            }
            return temp_v0;
        }
        goto block_18;
    }
block_18:
    return 0;
}
