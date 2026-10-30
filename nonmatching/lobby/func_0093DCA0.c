/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_009508A0(s32, s32);                        /* extern */
s32 func_00950AA0(s32, s32);                        /* extern */
s32 func_00950E50(s32);                             /* extern */
s64 func_00951400(s32);                             /* extern */
s32 func_009527B0(s32);                             /* extern */
s64 func_00952B70(s32);                             /* extern */

s32 func_0093DCA0(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s2;
    s64 temp_v1;
    s64 temp_v1_2;

    temp_v1 = (s64) (func_00952B70(arg0 & 0xFFFF) << 0x38) >> 0x38;
    switch (temp_v1) {                              /* irregular */
    case 2:
        return 1;
    case 0:
        temp_v0 = func_009527B0(arg0 & 0xFFFF);
        temp_v0_2 = func_00950E50(temp_v0);
        if ((temp_v0_2 != 0x64) && (temp_v0 != 0)) {
            temp_v1_2 = (s64) (func_00951400(temp_v0_2) << 0x38) >> 0x38;
            if ((temp_v1_2 >= 2) && (temp_v1_2 < 8)) {
                var_s2 = 0;
loop_20:
                if (var_s2 < 8) {
                    if (temp_v0 != func_00950AA0(temp_v0_2, var_s2)) {
                        var_s2 += 1;
                        goto loop_20;
                    }
                    temp_v0_3 = func_009508A0(temp_v0_2, var_s2) & 0xFF;
                    if (temp_v0_3 >= 0) {
                        if (temp_v0_3 < 4) {
                            return 1;
                        }
                        return 0;
                    }
                    goto block_23;
                }
                goto block_23;
            }
        }
block_23:
    default:
        return 0;
    }
}
