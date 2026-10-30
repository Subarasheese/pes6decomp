/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];

s32 func_00838160(s32 arg0) {
    M2C_UNK *var_v0;

    if (func_00D0BAF0() == 0) {
        var_v0 = NULL;
    } else {
        var_v0 = ((void *)D_008A5CB0);
    }
    if (var_v0 == NULL) {
        goto block_10;
    }
    if ((arg0 >= 0) && (arg0 < 4)) {
        if (arg0 < M2C_FIELD(var_v0, s32 *, 0x220)) {
            return arg0 + 1;
        }
        goto block_10;
    }
block_10:
    return 0;
}
