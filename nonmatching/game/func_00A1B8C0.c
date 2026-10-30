/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16);                        /* extern */
extern s32 D_003E74CC;

s32 func_00A1B8C0(void *arg0) {
    u16 temp_v1;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 4);
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
    if ((temp_v1 != 0x39) && (temp_v1 != 0x36) && (temp_v1 != 0x236) && (temp_v1 != 0x58)) {
        goto block_7;
    }
    if (M2C_FIELD(temp_a0, f32 *, 0x38) < (f32) (M2C_FIELD((((temp_v1 & 0xFFFF) * 4) + D_003E74CC), s32 *, 0x2FD8) - 0xC)) {
        return 0;
    }
block_7:
    if (M2C_FIELD(arg0, s32 *, 0x1C) < 0x1301) {
        return ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) >= 0x31) & 0xFF;
    }
    return 1;
}
