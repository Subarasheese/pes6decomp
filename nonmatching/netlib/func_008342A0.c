/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */
extern char D_008A8394[];

u16 func_008342A0(s32 arg0) {
    M2C_UNK *var_v1;

    if (func_00D0BAF0() == 0) {
        var_v1 = NULL;
    } else {
        var_v1 = ((void *)D_008A8394);
    }
    if (var_v1 == NULL) {
        var_v1 = NULL;
    }
    if (var_v1 == NULL) {
        return 0xFFFF & 0xFFFF;
    }
    if (arg0 >= 0) {
        if (arg0 < 3) {
            return M2C_FIELD(((arg0 * 2) + var_v1), u16 *, 0x54);
        }
        goto block_11;
    }
block_11:
    return 0xFFFF & 0xFFFF;
}
