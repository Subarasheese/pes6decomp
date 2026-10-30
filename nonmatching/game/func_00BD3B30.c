/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BD3BE0(u8);                          /* extern */

u8 func_00BD3B30(void *arg0) {
    s32 temp_v1;
    u8 var_s0;

    var_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0xC);
    temp_v1 = var_s0 + 1;
    if (temp_v1 < 7) {
        var_s0 = temp_v1 & 0xFF;
        func_00BD3BE0(var_s0);
    }
    return var_s0;
}
