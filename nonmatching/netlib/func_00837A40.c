/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];

s32 func_00837A40(s32 arg0) {
    M2C_UNK *var_v1;

    if (func_00D0BAF0() == 0) {
        var_v1 = NULL;
    } else {
        var_v1 = ((void *)D_008A5CB0);
    }
    if (var_v1 != NULL) {
        if ((arg0 != 1) && (arg0 != 0)) {
            return 4;
        }
        return M2C_FIELD(((arg0 * 4) + var_v1), s32 *, 0x224);
    }
    return 4;
}
