/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00292B10(void);
s32 func_002929C0();                                /* extern */
s32 func_00292AA0();                                /* extern */
s64 func_002BE490(M2C_UNK, M2C_UNK);                /* extern */
extern char D_00591BBE[];
extern void *D_00CB3300;

s32 func_00BC3FF0(void) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;
    s64 var_s0;
    s64 var_v0_2;
    u8 temp_s1;

    temp_s1 = func_00292B10();
    temp_s0 = func_00292AA0();
    temp_v0 = func_002929C0();
    if ((temp_s1 != 0) && (temp_s0 != 0) && (temp_v0 != 0)) {
        var_s0 = M2C_FIELD(D_00CB3300, s16 *, 4) + M2C_FIELD(D_00CB3300, s16 *, 6);
        var_v0_2 = M2C_FIELD(D_00CB3300, s16 *, 0x2F8) + M2C_FIELD(D_00CB3300, s16 *, 0x2FA);
        if (var_s0 == var_v0_2) {
            var_v0_2 *= 2;
        }
    } else {
        var_s0 = (s64) (func_002BE490(0, 1) << 0x30) >> 0x30;
        var_v0_2 = (s64) (func_002BE490(1, 1) << 0x30) >> 0x30;
    }
    if (var_s0 != var_v0_2) {
        var_v0 = 5;
    } else if ((*(u8 *)D_00591BBE) == 0) {
        var_v0 = 5;
    } else {
        var_v0 = 4;
    }
    return var_v0;
}
