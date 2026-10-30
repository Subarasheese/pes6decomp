/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00873F60(s32 *, s32);                  /* extern */
s32 func_00873FD0(s32 *, s32 *);                    /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_00867110(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 temp_s0;

    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != 0)) {
        if (*arg0 != 0x3087) {
            return -0x46;
        }
        func_00874470();
        temp_s0 = func_00873FD0(arg0, arg1);
        func_00873F60(arg0, arg2);
        func_00874460(arg0);
        if ((temp_s0 != 0) || (temp_s0 != 0)) {
            *arg1 = -0x47;
        }
        return 0;
    }
    return -0x18;
}
