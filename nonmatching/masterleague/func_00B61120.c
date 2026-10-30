/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B60D10(void);
M2C_UNK func_009BD9B0(M2C_UNK);                     /* extern */

s32 func_00B61120(void) {
    u32 temp_v0;

    temp_v0 = func_00B60D10();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x84) == 1) {
            func_009BD9B0(0);
            M2C_FIELD(temp_v0, u8 *, 0x84) = 2U;
            return 0;
        }
        return 0;
    }
    return 0;
}
