/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E74CC;

s32 func_00208280(s32 arg0) {
    u8 temp_v1;
    void *temp_a0;
    void *temp_v0;

    temp_a0 = (arg0 * 4) + D_003E74CC;
    temp_v0 = M2C_FIELD(temp_a0, void **, 0x178C);
    temp_v1 = M2C_FIELD(temp_v0, u8 *, 2);
    if (temp_v1 != 0) {
        return (temp_v1 - M2C_FIELD(temp_v0, u8 *, 1)) * 2;
    }
    return M2C_FIELD(temp_a0, s32 *, 0x2FD8) - (M2C_FIELD(temp_v0, u8 *, 1) * 2);
}
