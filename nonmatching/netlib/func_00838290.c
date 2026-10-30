/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];

s32 func_00838290(s32 arg0) {
    M2C_UNK *var_v1;

    if (func_00D0BAF0() == 0) {
        var_v1 = NULL;
    } else {
        var_v1 = ((void *)D_008A5CB0);
    }
    if (var_v1 == NULL) {
        return 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 < 4) {
        if (arg0 < M2C_FIELD(var_v1, s32 *, 0x220)) {
            return *(var_v1 + (arg0 * 0x88));
        }
        goto block_12;
    }
block_12:
    return 0;
}
