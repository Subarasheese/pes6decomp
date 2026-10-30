/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008FC010(void *arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x40);
    temp_v0 = M2C_FIELD(temp_v1, s32 *, 0xFC);
    M2C_FIELD(temp_v1, s32 *, 0xFC) = arg1;
    return temp_v0;
}
