/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0011B930(s32 arg0) {
    s32 temp_a0_2;
    u32 temp_a0;
    u32 temp_v1;

    temp_a0 = arg0 & 0xFFFF;
    temp_v1 = temp_a0 & 0x7F;
    temp_a0_2 = (temp_a0 >> 8) & 0x7F;
    if (((u32) (temp_a0_2 - 0x21) >= 0x5EU) || (temp_v1 < 0x21U) || (temp_v1 >= 0x7FU)) {
        /* Duplicate return node #3. Try simplifying control flow for better match */
        return 0;
    }
    if (((temp_a0 >> 0xF) == 0) || ((temp_a0_2 != 0x22) && (temp_a0_2 != 0x26) && (temp_a0_2 != 0x27) && ((u32) (temp_a0_2 - 0x29) >= 3U) && ((u32) (temp_a0_2 - 0x30) >= 0x3EU))) {
        return 1;
    }
    return 0;
}
