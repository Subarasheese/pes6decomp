/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BA1D50(void *arg0) {
    u16 temp_v1;

    if (M2C_FIELD(arg0, u8 *, 0x16) == 0xFD) {
        temp_v1 = M2C_FIELD(arg0, u16 *, 0x18);
        if ((temp_v1 != 0x1E) && (temp_v1 != 0x13) && (temp_v1 != 0x14)) {
            if (M2C_FIELD(arg0, u8 *, 0x10) != 0) {
                M2C_FIELD(arg0, u8 *, 0x16) = 7U;
            } else {
                M2C_FIELD(arg0, s16 *, 0x1CE) = (s16) (s32) M2C_FIELD(arg0, f32 *, 0x6C);
                M2C_FIELD(arg0, s16 *, 0x1D0) = (s16) (s32) M2C_FIELD(arg0, f32 *, 0x70);
                M2C_FIELD(arg0, u8 *, 0x16) = 0xA3U;
            }
            M2C_FIELD(arg0, u16 *, 0x18) = 0U;
            return 1;
        }
    }
    return 0;
}
