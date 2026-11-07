/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008FBF90(void *arg0, s64 arg1) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x40);
    M2C_FIELD(temp_v1, s64 *, 0x90) = arg1;
    M2C_FIELD(temp_v1, s32 *, 0x8C) = 1;
    return 1;
}
