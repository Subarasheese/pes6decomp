/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008028A0(s32, s32);                    /* extern */
s32 func_008028E0(s32);                             /* extern */
s64 func_00858C20(s32);                             /* extern */
extern char D_008B13E0[];

s32 func_0080A780(void) {
    s32 temp_v0;
    s32 var_s0;
    u8 temp_s1;

    var_s0 = 0;
    do {
        temp_s1 = M2C_FIELD((((void *)D_008B13E0) + var_s0), u8 *, 0x8D);
        if (temp_s1 == ((s64) (func_00858C20(var_s0) << 0x30) >> 0x30)) {
            temp_v0 = func_008028E0(var_s0 & 0xFF) & 0xFF;
            if (temp_v0 > 0) {
                func_008028A0(var_s0 & 0xFF, (temp_v0 - 1) & 0xFF);
            }
        }
        var_s0 += 1;
    } while (var_s0 < 2);
    return 0;
}
