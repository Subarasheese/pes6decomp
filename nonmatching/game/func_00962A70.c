/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(u16, u16);                        /* extern */
extern char Pes6MatchSquads[];

s32 func_00962A70(void *arg0) {
    s32 var_s0;
    void *temp_v1;

    temp_v1 = (M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900));
    var_s0 = 0;
    if ((s32) ((u64) ((s64) M2C_FIELD(temp_v1, u8 *, 0x84) << 0x3A) >> 0x3D) < 7) {
        if (M2C_FIELD(temp_v1, u8 *, 0x68) & 1 & 1) {
            if (!((M2C_FIELD(arg0, f32 *, 0xE8) * (f32) M2C_FIELD(arg0, s16 *, 0x14)) <= 0.0f)) {
                goto block_7;
            }
        } else if ((M2C_FIELD(arg0, f32 *, 0xE8) * (f32) M2C_FIELD(arg0, s16 *, 0x14)) < 0.0f) {
block_7:
            var_s0 = 1;
        }
        if ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x2A)) & 0xFFFF) >= 0x2000) {
            if ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), (M2C_FIELD(arg0, u16 *, 0x2A) + 0x7FFF + 1) & 0xFFFF) & 0xFFFF) >= 0x2000) {
                return 0;
            }
            var_s0 = ((var_s0 & 0xFF) ^ 1) & 0xFF;
            goto block_11;
        }
block_11:
        return var_s0;
    }
    return 0;
}
