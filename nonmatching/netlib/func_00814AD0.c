/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A35F0[];

s32 func_00814AD0(void) {
    s32 var_v0;
    s32 var_v1;

    if (((void *)D_008A35F0) == NULL) {
        return 0;
    }
    if (((void *)D_008A35F0) != NULL) {
        var_v0 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
    } else {
        var_v0 = 9;
    }
    if (var_v0 == 0) {
        return 0;
    }
    if (((void *)D_008A35F0) != NULL) {
        var_v1 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
    } else {
        var_v1 = 9;
    }
    if (var_v1 != 1) {
        if (M2C_FIELD(((void *)D_008A35F0), s32 *, 8) == 4) {
            if ((M2C_FIELD(((void *)D_008A35F0), s8 *, 0x418) != 1) && (M2C_FIELD(((void *)D_008A35F0), s8 *, 0x419) != 1) && (M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41A) != 1)) {
                if (M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41B) != 1) {
                    return 0;
                }
                goto block_27;
            }
block_27:
            return 1;
        }
        return 1;
    }
    return 0;
}
