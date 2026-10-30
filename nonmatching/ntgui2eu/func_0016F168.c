/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001641F8(s32, s32);                        /* extern */
extern s32 (*D_005BFAA8)();

s32 func_0016F168(void *arg0, void *arg1, void *arg2) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_s1;

    var_s1 = D_005BFAA8();
    if (func_001641F8(arg1 + 0x8D0, arg2 + 0x8D0) == 0) {
        temp_v1 = M2C_FIELD(arg1, s32 *, 0x8D0);
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        var_s1 = 1;
        M2C_FIELD(arg0, s32 *, 0x8C0) = temp_v1;
        M2C_FIELD(arg0, s32 *, 0x8B0) = temp_v1;
        M2C_FIELD(arg0, s32 *, 0x8D0) = temp_v1;
        M2C_FIELD(arg0, s8 *, 0x8C3) = 0;
    }
    temp_a0 = M2C_FIELD(arg1, s32 *, 0x8D4);
    if (temp_a0 != M2C_FIELD(arg2, s32 *, 0x8D4)) {
        M2C_FIELD(arg0, s32 *, 0x8D4) = temp_a0;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        var_s1 = 1;
    }
    return var_s1;
}
