/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B60D10(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_009BD2B0();                                /* extern */
M2C_UNK func_009BD9B0(M2C_UNK);                     /* extern */

s32 func_00B61000(void) {
    u32 temp_v0;
    u8 temp_v1;

    temp_v0 = func_00B60D10();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x84);
        switch (temp_v1) {                          /* irregular */
        case 2:
            func_0026E840(0x84008401);
            return 1;
        case 0:
            if (func_009BD2B0() == 1) {
                M2C_FIELD(temp_v0, u8 *, 0x84) = 1U;
                func_009BD9B0(1);
            }
            /* fallthrough */
        default:
            return 0;
        }
    } else {
        return 1;
    }
}
