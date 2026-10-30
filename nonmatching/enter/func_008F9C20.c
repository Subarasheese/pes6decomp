/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0022CD10(s32, s32);                        /* extern */
s32 func_00231E90(s32, u8);                         /* extern */
extern s32 D_003E77B0;

s32 func_008F9C20(s32 *arg0, void *arg1, s32 arg2) {
    s32 *spAC;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7;
    u8 temp_s1;

    var_s6 = 0;
    var_s4 = 0;
    var_s3 = 0;
    temp_v1 = M2C_FIELD(arg1, s32 *, 0);
    spAC = arg0;
    if ((temp_v1 != 6) && (temp_v1 != 7)) {
        *arg0 = 0;
        goto block_25;
    }
    var_s2 = 0;
    var_s7 = 0;
    temp_s1 = M2C_FIELD(((arg2 % 2) + D_003E77B0), u8 *, 0x2C);
    var_s5 = 0;
    if ((s32) M2C_FIELD(arg1, u8 *, 0xD) > 0) {
        do {
            if (arg2 != (func_0022CD10(temp_s1 & 0xFF, var_s5 & 0xFF) & 0xFF)) {
                var_s2 += 1;
            } else {
                temp_v1_2 = func_00231E90(temp_s1 & 0xFF, M2C_FIELD(arg1, u8 *, 0xD)) & 0xFF;
                switch (temp_v1_2) {                /* irregular */
                case 1:
                    var_s4 += 1;
                    break;
                case 2:
                    var_s3 += 1;
                    break;
                case 3:
                    var_s6 += 1;
                    break;
                }
                var_s7 += 1;
            }
            var_s5 += 1;
        } while (var_s5 < (s32) M2C_FIELD(arg1, u8 *, 0xD));
    }
    if ((var_s2 >= 3) && (var_s7 >= 3)) {
        if (var_s4 < (var_s6 + var_s3)) {
            *spAC = 0;
        } else {
            *spAC = 1;
        }
        return 1;
    }
block_25:
    return 0;
}
