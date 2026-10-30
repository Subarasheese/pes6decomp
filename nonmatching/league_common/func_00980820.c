/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00226710(void);
M2C_UNK func_00291DD0(s32, M2C_UNK);                /* extern */
s32 func_00292440(s32, M2C_UNK);                    /* extern */
s32 func_00292660(s32, M2C_UNK);                    /* extern */

s32 func_00980820(s32 arg0) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 temp_s4_3;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s3;

    var_s3 = 0;
    temp_s2 = arg0 & 0xFF;
    if ((temp_s2 != 0) && (temp_s2 != 1)) {
        return 0;
    }
    temp_v1 = func_00226710() & 0xFF;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 33:                                        /* switch 1 */
    case 29:                                        /* switch 1 */
        break;
    case 32:                                        /* switch 1 */
    case 28:                                        /* switch 1 */
        temp_s1 = func_00292660(temp_s2, 5) & 0xFF;
        temp_s0 = func_00292440(temp_s2, 5);
        func_00291DD0(temp_s2, 5);
        temp_s4 = 1 - temp_s2;
        func_00292660(temp_s4, 5);
        func_00292440(temp_s4, 5);
        temp_v1_2 = temp_s1 & 0xFF;
        switch (temp_v1_2) {                        /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            if (temp_s0 == 1) {
                var_s3 = 0xA;
            } else if ((temp_v1_2 == 1) || (temp_v1_2 == 3)) {
            case 1:                                 /* switch 2 */
            case 3:                                 /* switch 2 */
                var_s3 = -5;
            }
            break;
        }
        temp_s1_2 = func_00292660(temp_s2, 6) & 0xFF;
        temp_s0_2 = func_00292440(temp_s2, 6);
        func_00291DD0(temp_s2, 6);
        temp_s4_2 = 1 - temp_s2;
        func_00292660(temp_s4_2, 6);
        func_00292440(temp_s4_2, 6);
        temp_v1_3 = temp_s1_2 & 0xFF;
        switch (temp_v1_3) {                        /* switch 3; irregular */
        case 2:                                     /* switch 3 */
            if (temp_s0_2 == 1) {
                var_s3 = 0xA;
            } else if ((temp_v1_3 == 1) || (temp_v1_3 == 3)) {
            case 1:                                 /* switch 3 */
            case 3:                                 /* switch 3 */
                var_s3 = -5;
            }
            break;
        }
        temp_s4_3 = func_00292660(temp_s2, 0) & 0xFF;
        temp_s1_3 = func_00292440(temp_s2, 0);
        func_00291DD0(temp_s2, 0);
        temp_s0_3 = 1 - temp_s2;
        temp_s0_4 = func_00292660(temp_s0_3, 0) & 0xFF;
        temp_v0 = func_00292440(temp_s0_3, 0);
        temp_a0 = temp_s4_3 & 0xFF;
        switch (temp_a0) {                          /* switch 4; irregular */
        case 2:                                     /* switch 4 */
            if (temp_s1_3 == 1) {
                var_s3 = 0x3C;
            } else if ((temp_a0 == 1) || (temp_a0 == 3)) {
            case 1:                                 /* switch 4 */
            case 3:                                 /* switch 4 */
                var_s3 = -5;
            }
            break;
        }
        if (((temp_s0_4 & 0xFF) == 2) && (temp_v0 == 1)) {
            var_s3 = 0x3C;
        }
        break;
    }
    return var_s3;
}
