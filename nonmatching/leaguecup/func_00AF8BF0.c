/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern u32 func_00B035D0(void);
s32 func_0094AED0(M2C_UNK, s32, s32, M2C_UNK);      /* extern */
s32 func_0094B400(s32, s32);                        /* extern */
s32 func_00B013C0(s32);                             /* extern */

s32 func_00AF8BF0(s32 arg0) {
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;

    temp_s3 = func_00225820() & 0xFF;
    var_s1 = 0;
    var_s0 = 0;
    if (func_00B035D0() != 0) {
        temp_s2 = func_00B013C0(arg0 & 0xFF) & 0xFFFF;
        if ((func_0094AED0(0x28, temp_s2, temp_s3, 0) & 0xFF) != 1) {
            if ((func_0094AED0(0x28, temp_s2, temp_s3, 0) & 0xFF) >= 2) {
                var_s1 = 2;
            }
        } else {
            var_s1 = 1 & 0xFF;
        }
        if (func_0094AED0(0x28, temp_s2, temp_s3, 1) & 0xFF) {
            var_s1 = 3;
        }
        temp_v1 = func_0094B400(temp_s2, temp_s3) & 0xFF;
        var_v0_4 = 2;
        if ((temp_v1 == 2) || (var_v0_4 = 1, (temp_v1 == 1))) {
            var_s0 = var_v0_4 & 0xFF;
        }
        temp_v1_2 = var_s1 & 0xFF;
        switch (temp_v1_2) {                        /* switch 1; irregular */
        case 3:                                     /* switch 1 */
            temp_v1_3 = var_s0 & 0xFF;
            switch (temp_v1_3) {                    /* switch 4; irregular */
            case 0:                                 /* switch 4 */
                return 6;
            case 1:                                 /* switch 4 */
                return 7;
            default:                                /* switch 4 */
                return 8;
            }
            break;
        case 2:                                     /* switch 1 */
            temp_v1_4 = var_s0 & 0xFF;
            switch (temp_v1_4) {                    /* switch 3; irregular */
            case 0:                                 /* switch 3 */
                return 9;
            default:                                /* switch 3 */
                var_v0 = 0xB;
block_48:
                return var_v0;
            case 1:                                 /* switch 3 */
                var_v0 = 0xA;
                goto block_48;
            }
            break;
        default:                                    /* switch 1 */
            var_v0_3 = 1;
            switch (temp_v1_2) {                    /* switch 2; irregular */
            case 1:                                 /* switch 2 */
                temp_v1_5 = var_s0 & 0xFF;
                if (temp_v1_5 == 0) {
                    return 3;
                }
                if (temp_v1_5 != 1) {
                    var_v0_2 = 5;
                } else {
                    var_v0_2 = 4;
                }
                return var_v0_2;
            case 0:                                 /* switch 2 */
                temp_v1_6 = var_s0 & 0xFF;
                if (temp_v1_6 == 0) {
                    return 0;
                }
                if (temp_v1_6 != 1) {
                    var_v0_3 = 2;
                }
                return var_v0_3;
            default:                                /* switch 2 */
                return -1;
            }
            break;
        }
    } else {
        return -1;
    }
}
