/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00221A60();                                /* extern */
s32 func_00221D10(s32, s32, s32);                   /* extern */
extern char D_00510FD0[];

s32 func_00BC5FA0(s32 arg0) {
    s32 temp_s1;
    s32 temp_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v1;

    temp_s2 = func_00221A60() & 0xFF;
    var_s4 = 0;
    temp_s1 = arg0 & 0xFFFF;
loop_1:
    var_s3 = 0;
    if (temp_s2 > 0) {
loop_3:
        if ((temp_s1 >= 0x40) && (temp_s1 < 0xCC)) {
            var_v1 = 3;
        } else if (temp_s1 == 0x126) {
            var_v1 = 3;
        } else if ((temp_s1 >= 0xDD) && (temp_s1 < 0xFE)) {
            var_v1 = 3;
        } else {
            var_v1 = 0;
        }
        if (var_v1 != 3) {
            var_v0 = 0;
        } else if ((*(s32 *)D_00510FD0) == 6) {
            var_v0 = 1;
        } else {
            var_v0 = 0;
        }
        if ((var_s4 & 0xFF) != (func_00221D10(arg0, var_s3, var_v0 & 0xFF) & 0xFF)) {
            var_s3 = (var_s3 + 1) & 0xFF;
            if (var_s3 < temp_s2) {
                goto loop_3;
            }
        }
    }
    if ((var_s3 & 0xFF) != temp_s2) {
        var_s4 = (var_s4 + 1) & 0xFF;
        if (var_s4 < 0x62) {
            goto loop_1;
        }
    }
    return var_s4;
}
