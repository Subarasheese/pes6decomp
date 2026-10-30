/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00221A60(s32 arg0) {
    s32 temp_v1;

    temp_v1 = arg0 & 0xFFFF;
    if (((temp_v1 < 0x40) || (temp_v1 >= 0xCC)) && (temp_v1 != 0x112) && (temp_v1 != 0x113) && (temp_v1 != 0x114) && (temp_v1 != 0x115) && (temp_v1 != 0x116) && (temp_v1 != 0x117)) {
        if ((u32) (temp_v1 - 0x123) >= 5U) {
            return 0x17;
        }
        goto block_11;
    }
block_11:
    return 0x20;
}
