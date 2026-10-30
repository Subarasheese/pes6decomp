/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008663A0(s32, s32, s32);                   /* extern */

s32 func_008662E0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    if ((arg0 != NULL) && (arg1 != 0) && (arg3 >= 0)) {
        temp_v0 = func_008663A0(arg1, arg2, arg0 + 0xB4);
        if (temp_v0 == 0) {
            M2C_FIELD(arg0, s32 *, 0x154) = 0;
        }
        return temp_v0;
    }
    return -0x18;
}
