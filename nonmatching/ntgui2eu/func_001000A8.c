/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_0011DE28(void *);
M2C_UNK func_001B02B0(void *, s32);                 /* extern */
extern void *D_00602000;

s32 func_001000A8(void *arg0) {
    s32 var_v0;
    u32 temp_v0;

    temp_v0 = func_0011DE28(D_00602000);
    var_v0 = -1;
    if (temp_v0 != 0) {
        func_001B02B0(arg0, temp_v0 + 0x10);
        var_v0 = 0;
        M2C_FIELD(arg0, s16 *, 0x40) = (s16) (M2C_FIELD(temp_v0, u16 *, 0x50) * 0x10);
        M2C_FIELD(arg0, s16 *, 0x42) = (s16) (M2C_FIELD(temp_v0, u16 *, 0x52) * 0x10);
    }
    return var_v0;
}
