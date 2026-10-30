/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00171AD8(void *arg0) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0xCF8) != 1) {
            M2C_FIELD(arg0, s32 *, 0xCF8) = 1;
            return 1;
        }
        /* Duplicate return node #3. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
