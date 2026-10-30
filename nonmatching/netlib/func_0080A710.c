/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00802880(s32, s32);                    /* extern */
s32 func_008028C0(s32);                             /* extern */
extern char D_008B13E0[];

s32 func_0080A710(void) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    do {
        if (M2C_FIELD((((void *)D_008B13E0) + var_s0), u8 *, 0x8D) != 0) {
            temp_v0 = func_008028C0(var_s0 & 0xFF) & 0xFF;
            if (temp_v0 > 0) {
                func_00802880(var_s0 & 0xFF, (temp_v0 - 1) & 0xFF);
            }
        }
        var_s0 += 1;
    } while (var_s0 < 2);
    return 0;
}
