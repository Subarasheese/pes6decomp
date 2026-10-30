/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00989410(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0095ED20();                                /* extern */

s32 func_00988F40(void) {
    u32 temp_v0;

    temp_v0 = func_00989410();
    if (temp_v0 == 0) {

    } else if (func_0095ED20() != 0) {
        M2C_FIELD(temp_v0, s32 *, 0x488) = 2;
        func_0026E840(0x84008401);
    }
    return 0;
}
