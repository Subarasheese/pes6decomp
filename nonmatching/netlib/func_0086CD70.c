/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00873FD0(s32 *, s32);                  /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_0086CD70(s32 *arg0, s32 arg1) {
    if ((arg0 != NULL) && (arg1 != 0)) {
        if (*arg0 != 0x4378) {
            return -0x46;
        }
        func_00874470();
        func_00873FD0(arg0, arg1);
        func_00874460(arg0);
        return 0;
    }
    return -0x18;
}
