/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001A5E90(u32 arg0) {
    s32 temp_a1;

    temp_a1 = (arg0 >> 0xA) << 6;
    if ((s32) arg0 >= 0) {
        if ((arg0 & 0x3FF) == M2C_FIELD(temp_a1, s32 *, 8)) {
            if (M2C_FIELD(temp_a1, s32 *, 0xC) & 1) {
                return M2C_FIELD(temp_a1, s64 *, 0x10) - M2C_FIELD(temp_a1, s64 *, 0x18);
            }
            return 0;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return -1;
    }
    return -1;
}
