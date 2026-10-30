/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00817B70();                                /* extern */
M2C_UNK func_00817B80();                            /* extern */
s32 func_00818740();                                /* extern */
M2C_UNK func_00818750();                            /* extern */
s32 func_00827DB0(s32);                             /* extern */
extern char D_0088AB70[];

s32 func_00805860(void *arg0) {
    s32 var_v0;

    if (arg0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(arg0, s8 *, 0) != 1) {
        if (func_00827DB0(M2C_FIELD(arg0, s32 *, 4)) == 0) {
            if (((void *)D_0088AB70) != NULL) {
                var_v0 = 0xD;
                goto block_12;
            }
        } else if (((void *)D_0088AB70) != NULL) {
            var_v0 = 4;
block_12:
            M2C_FIELD(((void *)D_0088AB70), s32 *, 0x3C) = var_v0;
        }
        if (func_00818740() == 1) {
            func_00818750();
        }
        if (func_00817B70() == 1) {
            func_00817B80();
        }
        goto block_17;
    }
    if (((void *)D_0088AB70) != NULL) {
        M2C_FIELD(((void *)D_0088AB70), s32 *, 0x3C) = 0xD;
        return 1;
    }
block_17:
    return 1;
}
