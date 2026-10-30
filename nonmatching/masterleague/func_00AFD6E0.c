/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_002243B0(s32, s32);
s32 func_00224BC0(s32, s32);                        /* extern */
M2C_UNK func_00938BD0(s32);                         /* extern */
s32 func_0096F810();                                /* extern */
M2C_UNK func_00970560(s32, s32);                    /* extern */
M2C_UNK func_00AFF1A0(s32);                         /* extern */

void func_00AFD6E0(s32 arg0) {
    s32 temp_s2;
    s32 var_s1;
    s32 var_s3;

    var_s1 = 0xFF;
    temp_s2 = func_0096F810() & 0xFF;
    var_s3 = 0;
loop_1:
    if ((arg0 & 0xFFFF) != (func_00224BC0(temp_s2, var_s3 & 0xFF) & 0xFFFF)) {
        var_s3 += 1;
        if (var_s3 >= 0x20) {

        } else {
            goto loop_1;
        }
    } else {
        var_s1 = func_002243B0(temp_s2, var_s3 & 0xFF) & 0xFF;
    }
    if ((var_s1 & 0xFF) != 0xFF) {
        func_00970560(temp_s2, var_s1);
        func_00AFF1A0(arg0);
        func_00938BD0(arg0);
    }
}
