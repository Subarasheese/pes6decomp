/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C7C0(M2C_UNK);                         /* extern */
s32 func_00832240();                                /* extern */

s32 func_0093D580(void) {
    s32 var_v1;

    if (func_0082C7C0(0xA1) != 0) {
        goto block_3;
    }
    var_v1 = 1;
    if (func_00832240() != 1) {
block_3:
        var_v1 = 0;
    }
    return var_v1;
}
