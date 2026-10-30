/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0096D0A0(s32, M2C_UNK);                /* extern */

s32 func_00C074A0(void *arg0) {
    if (!((M2C_FIELD(arg0, f32 *, 0xE8) * (f32) M2C_FIELD(arg0, s16 *, 0x14)) < 0.0f)) {
        func_0096D0A0((M2C_FIELD(arg0, u16 *, 0x26) + 0x4000) & 0xFFFF, 1);
    } else {
        func_0096D0A0((M2C_FIELD(arg0, u16 *, 0x26) - 0x4000) & 0xFFFF, 1);
    }
    return 3;
}
