/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001059F8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_00106098(void) {
    s32 var_v0;

    var_v0 = func_001059F8(0x2200001B, 0, 0, 0);
    if (var_v0 != 0) {
        func_001059F8(0x2200001C, 0, 0, 0);
        var_v0 = 1;
    }
    return var_v0;
}
