/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003E77B0;

s32 func_009495D0(void) {
    s32 temp_v1;
    u32 temp_a0;

    temp_a0 = M2C_FIELD(D_003E77B0, u32 *, 0x20);
    if (!(temp_a0 & 0x100)) {
        temp_v1 = temp_a0 & 0x40;
        if ((temp_v1 == 0) && !(temp_a0 & 0x4000)) {

        } else if (temp_v1 != 0) {
            M2C_FIELD(D_003E77B0, u32 *, 0x20) = (u32) (M2C_FIELD(D_003E77B0, u32 *, 0x20) & ~0x40);
        }
    }
    return 0;
}
