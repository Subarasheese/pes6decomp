/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

u16 *func_002260F0(s32);                            /* extern */
s32 func_00229010(s32);                             /* extern */
s32 func_0094C7B0();                                /* extern */

s32 func_00B68260(s32 arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_s1;
    s32 var_s1_2;

    if (func_0094C7B0() != 0x12) {
        temp_s0 = arg0 & 0xFFFF;
        switch (temp_s0) {                          /* switch 2; irregular */
        case 0x121:                                 /* switch 2 */
            return 5;
        default:                                    /* switch 2 */
            var_s1_2 = 0;
loop_25:
            if (temp_s0 != *func_002260F0(func_00229010(var_s1_2))) {
                var_s1_2 = (var_s1_2 + 1) & 0xFF;
                if (var_s1_2 >= 0x48) {
                    goto block_30;
                }
                goto loop_25;
            }
            return ((u32) (var_s1_2 & 0xFF) >> 4) & 0xFF;
        case 0x11C:                                 /* switch 2 */
        case 0x11B:                                 /* switch 2 */
        case 0x11A:                                 /* switch 2 */
            return 5;
        }
    } else {
        temp_s0_2 = arg0 & 0xFFFF;
        switch (temp_s0_2) {                        /* switch 1; irregular */
        case 0x121:                                 /* switch 1 */
            return 5;
        default:                                    /* switch 1 */
            var_s1 = 0;
loop_11:
            if (temp_s0_2 != *func_002260F0(func_00229010(var_s1))) {
                var_s1 = (var_s1 + 1) & 0xFF;
                if (var_s1 >= 0x48) {
block_30:
                    return 0;
                }
                goto loop_11;
            }
            return ((u32) (var_s1 & 0xFF) >> 4) & 0xFF;
        case 0x11C:                                 /* switch 1 */
        case 0x11B:                                 /* switch 1 */
        case 0x11A:                                 /* switch 1 */
            return 5;
        }
    }
}
