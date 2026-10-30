/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B68690(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B67530(u8);                          /* extern */

s32 func_00B67CB0(void) {
    s32 temp_v1;
    u32 temp_v0;

    temp_v0 = func_00B68690();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x150) + 1;
        M2C_FIELD(temp_v0, s32 *, 0x150) = temp_v1;
        if (temp_v1 >= 6) {
            M2C_FIELD(temp_v0, s32 *, 0x150) = 0;
        }
        func_00B67530(M2C_FIELD(temp_v0, u8 *, 0x144));
        func_0026E840(0x8400F803);
    }
    return 0;
}
