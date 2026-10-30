/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AEE570(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */

s32 func_00AEE3C0(void) {
    u32 temp_v0;

    temp_v0 = func_00AEE570();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, s32 *, 0x404) = 2;
        func_0026E840(0x84008401);
    }
    return 0;
}
