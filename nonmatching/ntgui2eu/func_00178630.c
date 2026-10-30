/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00164238(s32, s32);                        /* extern */
extern s32 (*D_005C14A0)();

s32 func_00178630(void *arg0, void *arg1, s32 arg2) {
    s32 temp_s3;
    s32 var_v0;

    temp_s3 = D_005C14A0();
    var_v0 = temp_s3;
    if (func_00164238(arg1 + 0x3CB0, arg2 + 0x3CB0) == 0) {
        M2C_FIELD(arg0, s64 *, 0x3CB0) = (s64) M2C_FIELD(arg1, s64 *, 0x3CB0);
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        M2C_FIELD(arg0, s64 *, 0x3CB8) = (s64) M2C_FIELD(arg1, s64 *, 0x3CB8);
        var_v0 = 1;
    }
    return var_v0;
}
