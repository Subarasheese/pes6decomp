/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B1DE00(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B1CAE0(s32);                         /* extern */

s32 func_00B1D8B0(void) {
    s32 temp_a0;
    u32 temp_v0;

    temp_v0 = func_00B1DE00();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x94);
        if (temp_a0 != 1) {
            M2C_FIELD(temp_v0, s8 *, 0x90) = 2;
            M2C_FIELD(temp_v0, s8 *, 0x91) = 4;
        } else {
            M2C_FIELD(temp_v0, s32 *, 0xB0) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x94) = 0;
            func_00B1CAE0(temp_a0);
        }
        func_0026E840(0x84008401);
    }
    return 0;
}
