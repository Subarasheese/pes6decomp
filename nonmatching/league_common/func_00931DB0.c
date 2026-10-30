/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00931DB0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    u32 temp_a5;

    temp_a5 = arg1 & 0xFF;
    temp_a0 = arg0 & 0xFF;
    if (temp_a0 >= ((((arg1 & 0xFF) / 3) + (temp_a5 >> 0x1F)) & 0xFF)) {
        if (temp_a0 >= ((((temp_a5 * 2) / 3) + ((u32) (temp_a5 * 2) >> 0x1F)) & 0xFF & 0xFF)) {
            return 0;
        }
        if ((arg2 & 0xFF) >= temp_a0) {
            return 0;
        }
        return 1;
    }
    if ((arg2 & 0xFF) >= temp_a0) {
        return 0;
    }
    return 2;
}
