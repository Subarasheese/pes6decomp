/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00207D80(void *arg0, s32 arg1) {
    f32 temp_f1;
    f32 temp_f2;

    if (M2C_FIELD(arg0, u16 *, 0x30) != 0) {
        if ((M2C_FIELD(arg0, u8 *, 0x4C) != 0) && (M2C_FIELD(arg0, u8 *, 0x4D) == 0)) {
            goto block_10;
        }
        if ((M2C_FIELD(arg0, u8 *, 0x51) != 0) && (M2C_FIELD(arg0, u8 *, 0x4D) == 0)) {
            goto block_10;
        }
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x28) / 2.0f;
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x38) - (f32) arg1;
        if ((temp_f1 < temp_f2) && !(temp_f1 < -temp_f2)) {
            return 1;
        }
        goto block_10;
    }
block_10:
    return 0;
}
