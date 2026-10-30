/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];

s32 func_00837760(void) {
    M2C_UNK *var_a0;
    s32 temp_v1;

    if (func_00D0BAF0() == 0) {
        var_a0 = NULL;
    } else {
        var_a0 = ((void *)D_008A5CB0);
    }
    if (var_a0 != NULL) {
        temp_v1 = M2C_FIELD(var_a0, s32 *, 0x230);
        if (temp_v1 < 0) {
            return 0;
        }
        if (temp_v1 < 4) {
            return temp_v1 == M2C_FIELD(var_a0, s32 *, 0x22C);
        }
        return 0;
    }
    return 0;
}
