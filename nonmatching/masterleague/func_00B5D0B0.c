/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B5B230(void);
extern s32 func_001F3D10(s32, u8);
M2C_UNK func_0097F970(s32, M2C_UNK, f32);           /* extern */

void func_00B5D0B0(void) {
    u32 temp_v0;

    temp_v0 = func_00B5B230();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s16 *, 0x630) >= 6) {
            func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x618), 1U);
            func_0097F970(M2C_FIELD(temp_v0, s32 *, 0x618), 0, 5.0f / (f32) M2C_FIELD(temp_v0, s16 *, 0x630));
        } else {
            func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x618), 0U);
        }
    }
}
