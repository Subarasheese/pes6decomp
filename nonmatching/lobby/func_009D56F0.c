/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00965CC0(s32);                             /* extern */
s32 func_00965CD0();                                /* extern */
s32 func_009D0970(u8);                              /* extern */
extern void *D_00A7DE10;

s32 func_009D56F0(void) {
    s32 temp_s0;
    s32 var_s1;
    s32 var_s2;

    if (D_00A7DE10 == NULL) {
        goto block_13;
    }
    if (D_00A7DE10 != NULL) {
        var_s1 = func_009D0970(M2C_FIELD(D_00A7DE10, u8 *, 3));
    } else {
        var_s1 = 0;
    }
    temp_s0 = func_00965CD0();
    var_s2 = 0;
loop_12:
    if (var_s2 >= temp_s0) {
block_13:
        return 0;
    }
    if (var_s1 != func_00965CC0(var_s2)) {
        var_s2 += 1;
        goto loop_12;
    }
    return var_s2;
}
