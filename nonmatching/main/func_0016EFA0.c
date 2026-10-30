/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0016EE08(s32);
M2C_UNK func_0016F270();                            /* extern */

void func_0016EFA0(void *arg0) {
    if (arg0 != NULL) {
        if ((u8) M2C_FIELD(arg0, u8 *, 2) >= 2U) {
            func_0016F270();
        }
        M2C_FIELD(arg0, s8 *, 0) = 0;
        func_0016EE08((s32) arg0);
    }
}
