/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00226000(void);
s32 func_00975B50(s32 arg0) {
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0;
    var_s1 = 0;
    do {
        if (M2C_FIELD(((((s32) (arg0 & 0xFF) % 15) * 0xE0) + func_00226000() + (((s32) (var_s2 & 0xFF) % 32) * 6)), u16 *, 4) != 0) {
            var_s1 = (var_s1 + 1) & 0xFF;
        }
        var_s2 = (var_s2 + 1) & 0xFF;
    } while (var_s2 < 0x20);
    return var_s1;
}
