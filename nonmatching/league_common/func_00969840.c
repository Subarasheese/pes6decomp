/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002332F0(void);
M2C_UNK func_0094BC50();                            /* extern */
M2C_UNK func_0094C790(M2C_UNK);                     /* extern */
s32 func_00965130();                                /* extern */
s32 func_00997DC0();                                /* extern */
M2C_UNK func_00B54330(M2C_UNK);                     /* extern */

s32 func_00969840(void) {
    s32 var_s0;

    var_s0 = -1;
    if (func_00997DC0() == 1) {
        func_002332F0();
        func_0094BC50();
        var_s0 = func_00965130();
        func_00B54330(1);
    }
    if (var_s0 != -1) {
        func_0094C790(0);
    }
    return var_s0;
}
