/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B66CA0(void);
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
s32 func_0095ED20();                                /* extern */

s32 func_00B67030(void) {
    u32 temp_v0;

    temp_v0 = func_00B66CA0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x1C) != 0) {

        } else if (func_0095ED20() != 0) {
            M2C_FIELD(temp_v0, u8 *, 0x1C) = 1U;
            func_00958000(0x47);
        }
    }
    return 0;
}
