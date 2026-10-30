/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_008B9660();                                /* extern */
M2C_UNK func_008BF530(u16 *, u16, void *, M2C_UNK, M2C_UNK); /* extern */

void func_008BF4A0(u16 *arg0, u16 *arg1) {
    M2C_UNK var_a3;
    s32 var_v0;
    s64 temp_v1;

    *arg0 = *arg1;
    temp_v1 = (s64) (func_008B9660() << 0x30) >> 0x30;
    if ((temp_v1 != 2) && (var_v0 = 1, (temp_v1 != 1))) {

    } else {
        var_v0 = 0;
    }
    if (var_v0 == 0) {
        var_a3 = 2;
    } else {
        var_a3 = 0;
    }
    func_008BF530(arg0, *arg1, arg1 + 0x34, var_a3, 0);
}
