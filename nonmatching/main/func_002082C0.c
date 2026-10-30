/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E74CC;

s32 func_002082C0(s32 arg0) {
    u16 var_v0;
    u8 temp_v0;
    void *temp_v1;

    temp_v1 = (arg0 * 4) + D_003E74CC;
    temp_v0 = M2C_FIELD(M2C_FIELD(temp_v1, void **, 0x178C), u8 *, 2);
    if (temp_v0 == 0) {
        var_v0 = M2C_FIELD(temp_v1, u16 *, 0x2FD8);
    } else {
        var_v0 = ((temp_v0 & 0xFF) * 2) & 0xFFFF;
    }
    return var_v0 & 0xFFFF;
}
