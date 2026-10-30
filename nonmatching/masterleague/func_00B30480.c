/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B30940(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B30090(s32);                         /* extern */

s32 func_00B30480(void) {
    s32 temp_a0;
    u32 temp_v0;

    temp_v0 = func_00B30940();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x8C) == 1) {
            temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x9A) + 1;
            M2C_FIELD(temp_v0, u8 *, 0x9A) = (u8) (temp_a0 % 3);
            func_00B30090(temp_a0);
            func_0026E840(0x8400F803);
        }
    }
    return 0;
}
