/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B9E580(s32 arg0) {
    s32 temp_a0;

    temp_a0 = arg0 & 0xFFFF;
    if ((temp_a0 != 0x528) && (temp_a0 != 0x517) && (temp_a0 != 0x489) && (temp_a0 != 0) && (temp_a0 != 0x1BF)) {
        return 0;
    }
    return 1;
}
