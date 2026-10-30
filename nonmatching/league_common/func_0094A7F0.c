/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00224BC0(s32, s32);                        /* extern */
s32 func_00229010(s32);                             /* extern */
s32 func_0022BC60(s32);                             /* extern */
M2C_UNK func_0094A120(s32, s32, s32, s32, s32);     /* extern */
s32 func_0094B600(s32, s32);                        /* extern */

void func_0094A7F0(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_s2;
    s32 var_s3;
    s32 var_v0;

    if ((arg0 != 0x38) && (arg0 != 0x36) && (arg0 != 0x34) && (arg0 != 0x33) && (arg0 != 0x32) && (arg0 != 0x2F) && (arg0 != 0x2E) && (arg0 != 0x2C) && (arg0 != 0x29) && (arg0 != 0x28) && (arg0 != 0x25) && (arg0 != 0x24) && (arg0 != 0x22) && (arg0 != 0x20) && (arg0 != 0x1E) && (arg0 != 0x1C) && (arg0 != 0x1A) && (arg0 != 0x18) && (arg0 != 0x16) && (arg0 != 0x14) && (arg0 != 0x12) && (arg0 != 0x10) && (arg0 != 0xF) && (arg0 != 0xD) && (arg0 != 0xB) && (arg0 != 7) && (arg0 != 1) && (arg0 != 0)) {
        var_v0 = func_0022BC60(arg1);
    } else {
        var_v0 = func_00229010(arg1);
    }
    temp_s2 = var_v0 & 0xFF;
    var_s3 = 0;
    do {
        temp_s1 = func_00224BC0(temp_s2, var_s3 & 0xFF) & 0xFFFF;
        if (temp_s1 != 0) {
            func_0094A120(arg0, temp_s2, temp_s1, func_0094B600(temp_s1, temp_s2) & 0xFFFF, var_s3 & 0xFF);
        }
        var_s3 += 1;
    } while (var_s3 < 0x20);
}
