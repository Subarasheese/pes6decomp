/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0016A998(void *);                          /* extern */

s32 func_00169C38(M2C_UNK arg0, void *arg1, s32 arg2, s32 arg3, void *arg4, s32 arg5) {
    s32 temp_s2;
    s32 var_v0;

    temp_s2 = M2C_FIELD(M2C_FIELD(arg4, void **, 0x4C), s32 (**)(void *, s32, s32, s32, s32), 0xD8)(arg4, arg2, arg3, M2C_FIELD(arg1, s32 *, 0x14), M2C_FIELD(arg1, s32 *, 0x18));
    if ((func_0016A998(arg1) == 0) || (arg5 != 0) || (var_v0 = 0, (temp_s2 != 0))) {
        var_v0 = M2C_FIELD(M2C_FIELD(arg4, void **, 0x4C), s32 (**)(void *, void *, s32, s32), 0xBC)(arg4, arg1, arg2, arg3);
    }
    return var_v0;
}
