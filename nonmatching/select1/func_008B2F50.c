/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001D6D30(s32, s32);
s32 func_001D6EF0(s32, s32, s32);                   /* extern */
s32 func_001F0160(s32);                             /* extern */

s32 func_008B2F50(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;

    var_s0 = 0;
    if ((arg1 >= 0) && (arg0 != 0)) {
        temp_v0 = func_001D6D30(arg0, arg1);
        if (temp_v0 == -1) {
            func_001D6D30(arg0, 0x6C0000);
        }
        temp_v0_2 = func_001F0160(temp_v0);
        if (temp_v0_2 != 0) {
            var_s0 = func_001D6EF0(arg0, temp_v0_2, arg1);
        }
    }
    return var_s0;
}
