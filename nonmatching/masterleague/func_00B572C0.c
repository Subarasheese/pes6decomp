/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00236870(s32, s32, s32);
extern u8 func_00225820(void);
s32 func_00B52C70(s32, M2C_UNK);                    /* extern */
s32 func_00B52F80(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_00B535B0();                                /* extern */
s32 func_00B54300();                                /* extern */
s64 func_00B569A0(s32);                             /* extern */
s32 func_00B57400(s32, s32);                        /* extern */
extern s32 D_003E77B4;

s64 func_00B572C0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;
    s64 var_v0;

    temp_s1 = func_00B54300() & 0xFF;
    temp_s3 = func_00225820() & 0xFF;
    temp_s0 = func_00B57400(func_00B535B0() & 0xFF, temp_s1) & 0xFF;
    if (temp_s0 != 0xFF) {
        if (temp_s0 >= 2) {
            if (func_00B52F80(temp_s1, 0, 0) != 0) {
                if (func_00B52C70(temp_s1, 0) != 0) {
                    var_s1 = 0;
                    var_s2 = 1;
                    do {
                        temp_v0 = temp_s0 - var_s2;
                        if ((temp_v0 >= 0) && ((func_00236870(D_003E77B4 + 0x2974, temp_s3, temp_v0 & 0xFF) & 0xFF) == 2)) {
                            var_s1 = (var_s1 + 1) & 0xFF;
                        }
                        var_s2 += 1;
                    } while (var_s2 < 3);
                    var_v0 = ((var_s1 & 0xFF) >= 2) << 0x38;
                } else {
                    var_v0 = func_00B569A0(arg0) << 0x38;
                }
            } else {
                var_v0 = func_00B569A0(arg0) << 0x38;
            }
            goto block_22;
        }
        return 0;
    }
    var_v0 = func_00B569A0(arg0) << 0x38;
block_22:
    return var_v0 >> 0x38;
}
