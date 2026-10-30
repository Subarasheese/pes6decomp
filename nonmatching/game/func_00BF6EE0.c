/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BBB8C0(M2C_UNK);                         /* extern */

s32 func_00BF6EE0(void *arg0) {
    s32 var_s0;
    u16 temp_v1;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
    var_s0 = 0;
    if ((temp_v1 == 0x385) || (temp_v1 == 0x29E)) {
        if (func_00BBB8C0(0xA) < 3) {
            var_s0 = 1;
        }
    }
    return var_s0;
}
