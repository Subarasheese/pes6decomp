/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008FBFA8(void *arg0) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x40);
    M2C_FIELD(temp_v1, s64 *, 0x90) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x8C) = 0;
    return 1;
}
