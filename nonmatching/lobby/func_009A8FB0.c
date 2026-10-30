/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00835700();                                /* extern */
s64 func_0095D620();                                /* extern */
u32 func_0095DB00();                                /* extern */
s64 func_0095F1E0(s32);                             /* extern */
u32 func_0095FF10(s32);                             /* extern */
s32 func_00960520();                                /* extern */
s32 func_00960560();                                /* extern */

s32 func_009A8FB0(s32 arg0, s32 arg1, s32 arg2, s64 arg3, s64 arg4) {
    s32 temp_s1;
    s64 temp_v1;
    s64 temp_v1_2;
    s64 var_v0;
    u32 var_v0_2;

    if ((arg2 != 0) || (((s64) (arg3 << 0x38) >> 0x38) != 0)) {
        if (((s64) (arg4 << 0x30) >> 0x30) != -1) {
            var_v0 = func_0095F1E0(arg4 & 0xFFFF);
        } else {
            var_v0 = func_0095D620();
        }
        temp_v1 = (s64) (var_v0 << 0x38) >> 0x38;
        switch (temp_v1) {                          /* switch 1; irregular */
        case 2:                                     /* switch 1 */
            if (func_00960520() != 0) {
                if (arg0 == func_00960560()) {
                    if (((s64) (arg3 << 0x38) >> 0x38) < 4) {
                        return 4;
                    }
                    goto block_17;
                }
                goto block_45;
            }
            goto block_45;
        case 1:                                     /* switch 1 */
            if (func_00960520() != 0) {
                goto block_45;
            }
            goto block_17;
        }
    } else {
block_17:
        switch (arg2) {                             /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            return 2;
        case 1:                                     /* switch 2 */
            temp_s1 = func_00835700();
            if (((s64) (arg4 << 0x30) >> 0x30) != -1) {
                var_v0_2 = func_0095FF10(arg4 & 0xFFFF);
            } else {
                var_v0_2 = func_0095DB00();
            }
            if ((u32) (temp_s1 + 0x12C) < var_v0_2) {
                return 0;
            }
            return 1;
        default:                                    /* switch 2 */
            temp_v1_2 = (s64) (arg3 << 0x38) >> 0x38;
            if ((temp_v1_2 > 0) && (temp_v1_2 < 4)) {
                return 0;
            }
            if ((temp_v1_2 >= 4) && (temp_v1_2 < 6)) {
                if (arg1 == 0) {
                    return 1;
                }
                if (arg1 != arg0) {
                    goto block_45;
                }
                return 1;
            }
            if (temp_v1_2 < 6) {
                return -1;
            }
block_45:
            return 3;
        }
    }
}
