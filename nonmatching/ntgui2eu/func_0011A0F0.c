/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024F0;

s32 func_0011A0F0(void) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(D_006024F0, void **, 0x564);
    return (M2C_FIELD(D_006024F0, s32 *, 0x560) - ((u32) (M2C_FIELD(temp_v1, s32 *, 0) - M2C_FIELD(temp_v1, s32 *, 4)) >> 4)) - 1;
}
