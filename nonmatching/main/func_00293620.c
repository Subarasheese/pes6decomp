/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00293030(void *, s32);                     /* extern */
s32 func_002937A0(s32);                             /* extern */

s32 func_00293620(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_s0;
    s32 var_v0;
    u64 temp_a1;
    u64 temp_a1_2;

    var_s0 = 0;
    temp_a0 = arg1 & 0xFF;
    var_v0 = func_00293030(arg0, func_002937A0(arg1)) & 0xFF;
    switch (temp_a0) {                              /* switch 1; irregular */
    case 8:                                         /* switch 1 */
    case 15:                                        /* switch 1 */
    case 22:                                        /* switch 1 */
    case 29:                                        /* switch 1 */
        temp_a1 = (u64) ((s64) M2C_FIELD(arg0, u8 *, 0x1D) << 0x38) >> 0x3E;
        switch (temp_a1) {                          /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            break;
        case 0:                                     /* switch 2 */
            if (!(M2C_FIELD(arg0, u8 *, 0) & 1)) {
block_32:
                var_s0 = 1;
            }
            break;
        case 1:                                     /* switch 2 */
            if (M2C_FIELD(arg0, u8 *, 0) & 1) {
                var_s0 = 1 & 0xFF;
            }
            break;
        }
        break;
    case 9:                                         /* switch 1 */
    case 16:                                        /* switch 1 */
    case 23:                                        /* switch 1 */
    case 30:                                        /* switch 1 */
        temp_a1_2 = (u64) ((s64) M2C_FIELD(arg0, u8 *, 0x1D) << 0x38) >> 0x3E;
        switch (temp_a1_2) {                        /* switch 3; irregular */
        case 2:                                     /* switch 3 */
            break;
        case 0:                                     /* switch 3 */
            if (M2C_FIELD(arg0, u8 *, 0) & 1) {
                goto block_32;
            }
            break;
        case 1:                                     /* switch 3 */
            if (!(M2C_FIELD(arg0, u8 *, 0) & 1)) {
                var_s0 = 1 & 0xFF;
            }
            break;
        }
        break;
    }
    if (var_s0 != 0) {
        var_v0 = ((u32) (var_v0 & 0xFF) >> 1) & 0xFF;
    }
    return var_v0;
}
