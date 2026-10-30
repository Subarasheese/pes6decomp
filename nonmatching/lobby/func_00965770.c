/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00828160();                                /* extern */
s32 func_00840560(s32);                             /* extern */
s32 func_008405F0(s32);                             /* extern */
s32 func_00840A10(s32);                             /* extern */
s64 func_00840EC0();                                /* extern */
s32 func_0094BBF0(s64, s32, s32);                   /* extern */

s32 func_00965770(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_s2;
    s64 temp_s1;

    if (((s64) (func_00840EC0() << 0x38) >> 0x38) == 2) {
        var_s2 = 0;
loop_6:
        if (var_s2 >= 8) {
            goto block_7;
        }
        temp_s0_2 = func_00840A10(var_s2);
        if (temp_s0_2 != func_00828160()) {
            var_s2 += 1;
            goto loop_6;
        }
        temp_s1 = (s64) (func_00840EC0() << 0x38) >> 0x38;
        temp_s0 = func_008405F0(var_s2) & 0xFF;
        return func_0094BBF0(temp_s1, func_00840560(var_s2) & 0xFF, temp_s0) == 1;
    }
block_7:
    return 0;
}
