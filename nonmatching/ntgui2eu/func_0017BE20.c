/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00189778(void *);                      /* extern */

s32 func_0017BE20(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x948) = arg1;
    if (M2C_FIELD(arg0, s32 *, 0x94C) == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x944) != arg1) {
            M2C_FIELD(arg0, s32 *, 0x944) = arg1;
            M2C_FIELD(arg0, s32 *, 0x94C) = 1;
            func_00189778(arg0 + 0x950);
            return 1;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
