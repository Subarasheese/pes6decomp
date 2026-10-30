/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CB52A0[];

s32 func_009529E0(s32 arg0) {
    s32 temp_a0;
    s32 var_a2;
    s32 var_a3;
    s32 var_a4;
    s32 var_v0;

    var_a4 = 0;
    var_a3 = 0;
    var_a2 = 0;
    do {
        temp_a0 = ((var_a2 & 0xFFFF) + 0x1000) & 0xE000;
        var_v0 = temp_a0 >> 0xD;
        if (temp_a0 < 0) {
            var_v0 = (s32) (temp_a0 + 0x1FFF) >> 0xD;
        }
        if ((s32) M2C_FIELD((((void *)D_00CB52A0) + (var_v0 & 0xFFFF)), u8 *, 0xD4) >= (arg0 & 0xFF)) {
            var_a4 += 1;
        }
        var_a3 += 1;
        var_a2 += 0x2000;
    } while (var_a3 < 8);
    return var_a4 & 0xFF;
}
