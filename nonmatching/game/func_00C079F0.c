/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00967760(void *);                          /* extern */
M2C_UNK func_0096D0A0(void *, s32, M2C_UNK);        /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */

s32 func_00C079F0(void *arg0) {
    s32 var_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x16);
    if ((temp_v1 != 0x40) && (temp_v1 != 4)) {
        if (func_00BBB8C0(2) == 0) {
            var_v0 = 8;
        } else {
            var_v0 = 2;
        }
        M2C_FIELD(arg0, s32 *, 0x9C) = var_v0;
    }
    func_0096D0A0(arg0, func_00967760(arg0), 0);
    return 3;
}
