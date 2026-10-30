/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DB940(void *);
s32 func_002DB4D0(void *, s32, M2C_UNK);            /* extern */

s32 func_009EEE50(void *arg0, s32 arg1) {
    M2C_UNK var_a2;
    s32 temp_s0;
    void *temp_s1;

    temp_s1 = *M2C_FIELD(arg0, void ***, 0x38);
    temp_s0 = func_002DB940(temp_s1);
    if (arg1 != 0) {
        var_a2 = 0x10;
    } else {
        var_a2 = 0x40;
    }
    return temp_s0 != func_002DB4D0(temp_s1, temp_s0, var_a2);
}
