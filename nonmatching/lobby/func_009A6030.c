/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00960150(s32);                             /* extern */
s32 func_00960270();                                /* extern */
M2C_UNK func_0098CAD0(u8);                          /* extern */

void func_009A6030(void *arg0) {
    s32 temp_s1;
    s32 temp_s2;
    s32 var_s3;
    u8 temp_a0;
    u8 var_v1;

    temp_s2 = func_00960270() & 0xFFFF;
    var_s3 = 0;
    if (temp_s2 > 0) {
loop_1:
        temp_s1 = M2C_FIELD(arg0, s32 *, 0x374);
        if (temp_s1 != func_00960150(var_s3)) {
            var_s3 = (var_s3 + 1) & 0xFFFF;
            if (var_s3 >= temp_s2) {
                goto block_7;
            }
            goto loop_1;
        }
        var_v1 = 6;
        M2C_FIELD(arg0, s32 *, 0x39C) = 0xB;
        goto block_9;
    }
block_7:
    temp_a0 = M2C_FIELD(arg0, u8 *, 0x378);
    if (temp_a0 != 0xB) {
        func_0098CAD0(temp_a0);
        func_0026E840(0x8C008005);
        M2C_FIELD(arg0, s32 *, 0x394) = 0x01FB003E;
        var_v1 = 0x20;
        M2C_FIELD(arg0, s32 *, 0x398) = 0x1B;
block_9:
        M2C_FIELD(arg0, u8 *, 0x378) = var_v1;
    }
}
