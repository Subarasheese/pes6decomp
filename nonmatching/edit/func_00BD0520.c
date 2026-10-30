/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002571B0(s32, s32);                        /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00BC4110(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_00BCFC90(s32, s32, s32);               /* extern */

void func_00BD0520(s32 arg0, s32 arg1) {
    M2C_UNK var_s2;
    M2C_UNK var_s3;
    M2C_UNK var_s4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_v0;

    temp_v0 = arg1 + 1;
    if (temp_v0 > 0) {
        if (temp_v0 < 0x1E) {
            if ((u32) ((temp_v0 - 1) - 0x1A) >= 3U) {
                var_v0 = 1;
            } else {
                goto block_8;
            }
        } else {
            goto block_4;
        }
    } else {
block_4:
block_8:
        var_v0 = 0;
    }
    var_s2 = 1;
    if (var_v0 != 1) {
        var_s4 = 0;
        var_s3 = 7;
    } else {
        var_s4 = 1;
        var_s3 = 0x63;
        var_s2 = 0xA;
    }
    temp_v0_2 = func_002571B0(arg0, arg1);
    temp_v0_3 = func_00BC4110(temp_v0_2, var_s4, var_s3, var_s2);
    if (temp_v0_3 != temp_v0_2) {
        func_00BCFC90(arg0, arg1, temp_v0_3);
        func_00B91590(7, 1);
        func_0026E840(0x8400F803);
    }
}
