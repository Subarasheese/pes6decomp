/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00B2A420(u8);                            /* extern */

s32 func_00B33F40(void *arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    s32 var_a0;
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = func_00B2A420(M2C_FIELD(arg0, u8 *, 0));
    temp_v1 = M2C_FIELD(arg0, void **, 4);
    if (!(M2C_FIELD(temp_v1, f32 *, 0x38) < (f32) arg3)) {
        return 0;
    }
    temp_a0 = M2C_FIELD(temp_v1, void **, 4);
    if ((M2C_FIELD(temp_a0, u16 *, 0x1A) != 0) && (M2C_FIELD(temp_a0, u8 *, 0xD) & 1)) {
        var_a0 = 0xFFFF & 0xFFFF;
    } else {
        var_a0 = 0xFF;
    }
    M2C_FIELD(arg0, u16 *, 0x28) = (u16) M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), u16 *, 0x42);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x20) * (arg1 & 0xFFFF)) / (s32) (var_a0 & 0xFFFF));
    return 1;
}
