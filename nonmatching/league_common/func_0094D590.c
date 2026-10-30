/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00224D90(s32, s32);                        /* extern */
M2C_UNK func_0094D3F0(s32, s32);                    /* extern */

void func_0094D590(s32 arg0) {
    s32 var_s1;

    if ((arg0 & 0xFF) != 0xFF) {
        var_s1 = 0;
        do {
            if (func_00224D90(arg0, var_s1) & 0xFFFF) {
                func_0094D3F0(arg0, var_s1);
            }
            var_s1 = (var_s1 + 1) & 0xFF;
        } while (var_s1 < 0x20);
    }
}
