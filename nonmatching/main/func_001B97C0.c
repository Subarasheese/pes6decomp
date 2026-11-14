/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

s32 func_00292D80(s32);                             /* extern */
extern char D_003D1600[];
extern char D_003D1604[];

s32 func_001B97C0(s32 arg0) {
    s32 temp_v1;
    s32 var_s0;
    u32 temp_a0;

    var_s0 = 7;
    temp_a0 = func_00292D80(arg0 & 0xFF) & 0xFF;
    if (temp_a0 < 0x11U) {
        temp_v1 = temp_a0 * 8;
        if (temp_a0 == *(((u8 *)D_003D1600) + temp_v1)) {
            var_s0 = *(((u8 *)D_003D1604) + temp_v1);
        }
    }
    return var_s0;
}
