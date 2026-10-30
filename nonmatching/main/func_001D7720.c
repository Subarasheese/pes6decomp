/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001D7720(void *arg0, void *arg1) {
    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (M2C_FIELD(arg0, f32 *, 0x90) != M2C_FIELD(arg1, f32 *, 0)) {
            goto block_3;
        }
        if (M2C_FIELD(arg0, f32 *, 0x94) == M2C_FIELD(arg1, f32 *, 4)) {
            if (M2C_FIELD(arg0, f32 *, 0x98) != M2C_FIELD(arg1, f32 *, 8)) {
                goto block_3;
            }
        } else {
block_3:
            M2C_FIELD(arg0, f32 *, 0x90) = (f32) M2C_FIELD(arg1, f32 *, 0);
            M2C_FIELD(arg0, f32 *, 0x94) = (f32) M2C_FIELD(arg1, f32 *, 4);
            M2C_FIELD(arg0, f32 *, 0x98) = (f32) M2C_FIELD(arg1, f32 *, 8);
            M2C_FIELD(arg0, u8 *, 0xA6) = (u8) (M2C_FIELD(arg0, u8 *, 0xA6) | 1);
        }
    }
}
