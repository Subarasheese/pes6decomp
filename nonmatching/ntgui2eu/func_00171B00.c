/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00171B00(void *arg0) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0xCF8) != 0) {
            M2C_FIELD(arg0, s32 *, 0xCF8) = 0;
            return 1;
        }
        /* Duplicate return node #3. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
