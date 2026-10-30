/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AF5740(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */

s32 func_00AF5920(void) {
    u32 temp_v0;

    temp_v0 = func_00AF5740();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, s32 *, 0x60) = 1;
        func_0026E840(0x84028400);
    }
    return 0;
}
