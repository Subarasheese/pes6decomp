/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_009539C0(s64 arg0) {
    s64 temp_v0;
    s64 temp_v1;

    temp_v1 = (s64) (arg0 << 0x38) >> 0x38;
    if (((s64) ((temp_v1 & 0x20) << 0x38) >> 0x38) == 0) {
        temp_v0 = (s64) ((temp_v1 & 0x10) << 0x38) >> 0x38;
        if ((temp_v0 != 0) && (((s64) ((temp_v1 & 8) << 0x38) >> 0x38) == 0) && (((s64) ((temp_v1 & 4) << 0x38) >> 0x38) == 0) && (((s64) ((temp_v1 & 2) << 0x38) >> 0x38) == 0) && (((s64) ((temp_v1 & 1) << 0x38) >> 0x38) == 0)) {
            return 3;
        }
        if ((temp_v0 == 0) && (((s64) ((temp_v1 & 8) << 0x38) >> 0x38) != 0) && (((s64) ((temp_v1 & 4) << 0x38) >> 0x38) == 0) && (((s64) ((temp_v1 & 2) << 0x38) >> 0x38) == 0) && (((s64) ((temp_v1 & 1) << 0x38) >> 0x38) == 0)) {
            return 4;
        }
        if ((temp_v0 == 0) && (((s64) ((temp_v1 & 8) << 0x38) >> 0x38) == 0) && (((s64) ((temp_v1 & 4) << 0x38) >> 0x38) != 0) && (((s64) ((temp_v1 & 2) << 0x38) >> 0x38) == 0) && (((s64) ((temp_v1 & 1) << 0x38) >> 0x38) == 0)) {
            return 5;
        }
        if ((temp_v0 == 0) && (((s64) ((temp_v1 & 8) << 0x38) >> 0x38) == 0) && (((s64) ((temp_v1 & 4) << 0x38) >> 0x38) == 0) && (((s64) ((temp_v1 & 2) << 0x38) >> 0x38) != 0) && (((s64) ((temp_v1 & 1) << 0x38) >> 0x38) == 0)) {
            return 6;
        }
        if ((temp_v0 == 0) && (((s64) ((temp_v1 & 8) << 0x38) >> 0x38) == 0) && (((s64) ((temp_v1 & 4) << 0x38) >> 0x38) == 0) && (((s64) ((temp_v1 & 2) << 0x38) >> 0x38) == 0) && (((s64) ((temp_v1 & 1) << 0x38) >> 0x38) != 0)) {
            return 7;
        }
        if ((temp_v0 != 0) && (((s64) ((temp_v1 & 8) << 0x38) >> 0x38) != 0) && (((s64) ((temp_v1 & 4) << 0x38) >> 0x38) != 0) && (((s64) ((temp_v1 & 2) << 0x38) >> 0x38) != 0) && (((s64) ((temp_v1 & 1) << 0x38) >> 0x38) != 0)) {
            return 0;
        }
        if ((temp_v0 == 0) && (((s64) ((temp_v1 & 8) << 0x38) >> 0x38) == 0) && (((s64) ((temp_v1 & 4) << 0x38) >> 0x38) == 0) && (((s64) ((temp_v1 & 2) << 0x38) >> 0x38) == 0)) {
            if (((s64) ((temp_v1 & 1) << 0x38) >> 0x38) == 0) {
                return 8;
            }
            goto block_47;
        }
block_47:
        return 2;
    }
    return 1;
}
