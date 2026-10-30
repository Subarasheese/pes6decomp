/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 *func_002F7F80(s32);                             /* extern */

s32 func_00C18420(s32 arg0) {
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    u8 *temp_v0;

    if ((arg0 & 0xFFFF) == 0x126) {
        var_s0 = 0x53;
    } else {
        var_s0 = 0x4F;
    }
    var_s1 = 0;
    if (var_s0 >= 0) {
loop_4:
        if (var_s1 >= 0) {
            if (var_s1 >= 0x59) {
                goto block_7;
            }
            temp_v0 = func_002F7F80(var_s1);
            if (temp_v0 == NULL) {
                var_v0 = 0;
            } else if (*temp_v0 == 0) {
                var_v0 = 0;
            } else {
                var_v0 = 1;
            }
        } else {
block_7:
            var_v0 = 0;
        }
        if (var_v0 == 0) {
            var_s1 += 1;
            if (var_s0 < var_s1) {
                goto block_20;
            }
            goto loop_4;
        }
        return 1;
    }
block_20:
    return 0;
}
