/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008204A0();                                /* extern */
s32 func_0099D2C0(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_009EEFD0(void) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_008204A0();
    var_v1 = 0;
    if (temp_v0 != 0) {
        var_v1 = func_0099D2C0(temp_v0, 0, 0, 0, 1);
    }
    return var_v1;
}
