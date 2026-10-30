/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s8 func_00235D70(u8, s32);                          /* extern */
s8 func_00235E30(s32);                              /* extern */
s8 func_00236130(u8, s32);                          /* extern */
s8 func_002361F0(s32);                              /* extern */
s8 func_00236270(u8, s32);                          /* extern */
s8 func_00236330(s32);                              /* extern */
s8 func_002363B0(u8, s32);                          /* extern */
s8 func_00236470(s32);                              /* extern */
extern s32 D_003E77B0;

s32 func_00326510(void *arg0, void *arg1, s32 arg2) {
    s32 var_v0;
    s8 var_v0_2;
    u8 temp_s2;

    var_v0 = arg2 & 1;
    if ((arg2 < 0) && (var_v0 != 0)) {
        var_v0 -= 2;
    }
    temp_s2 = M2C_FIELD((var_v0 + D_003E77B0), u8 *, 0x2C);
    if (M2C_FIELD(arg0, s32 *, 0) != 7) {
        M2C_FIELD(arg1, s8 *, 0) = func_002363B0(M2C_FIELD(arg0, u8 *, 0x2C), temp_s2 & 0xFF);
        M2C_FIELD(arg1, s8 *, 1) = func_00236130(M2C_FIELD(arg0, u8 *, 0x2C), temp_s2 & 0xFF);
        M2C_FIELD(arg1, s8 *, 2) = func_00236270(M2C_FIELD(arg0, u8 *, 0x2C), temp_s2 & 0xFF);
        var_v0_2 = func_00235D70(M2C_FIELD(arg0, u8 *, 0x2C), temp_s2 & 0xFF);
    } else {
        M2C_FIELD(arg1, s8 *, 0) = func_00236470(temp_s2 & 0xFF);
        M2C_FIELD(arg1, s8 *, 1) = func_002361F0(temp_s2 & 0xFF);
        M2C_FIELD(arg1, s8 *, 2) = func_00236330(temp_s2 & 0xFF);
        var_v0_2 = func_00235E30(temp_s2 & 0xFF);
    }
    M2C_FIELD(arg1, s8 *, 3) = var_v0_2;
    return 1;
}
