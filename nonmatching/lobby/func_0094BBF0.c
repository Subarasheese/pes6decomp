/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0094BBF0(s64 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s64 temp_a0;

    temp_a0 = (s64) (arg0 << 0x38) >> 0x38;
    if (temp_a0 != 0) {
        temp_v0 = arg1 & 0xFF;
        if ((temp_v0 >= 0) && (temp_v0 < 4)) {
            if (temp_a0 == 1) {
                return 3;
            }
            return 1;
        }
        if ((arg2 & 0xFF) != 1) {
            return 0;
        }
        switch (temp_a0) {                          /* irregular */
        case 3:
            return 0;
        case 2:
        case 1:
            return 0;
        default:
            return 2;
        }
    } else {
        return 0;
    }
}
