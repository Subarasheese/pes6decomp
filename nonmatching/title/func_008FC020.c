/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008FC020(void *arg0, s64 arg1) {
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 0x40);
    M2C_FIELD(temp_a2, s32 *, 0x108) = 1;
    M2C_FIELD(temp_a2, s64 *, 0x100) = arg1;
    return 1;
}
