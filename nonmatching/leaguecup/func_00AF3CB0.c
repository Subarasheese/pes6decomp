/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AF3B30(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */

s32 func_00AF3CB0(void) {
    s32 temp_v1;
    u32 temp_v0;

    temp_v0 = func_00AF3B30();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x88) + 1;
        M2C_FIELD(temp_v0, s32 *, 0x88) = temp_v1;
        if (temp_v1 >= 5) {
            M2C_FIELD(temp_v0, s32 *, 0x88) = 0;
        }
        M2C_FIELD(temp_v0, s8 *, 0x8D) = 1;
        func_0026E840(0x8400F803);
    }
    return 0;
}
