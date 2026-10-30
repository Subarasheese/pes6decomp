/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AEE570(void);
M2C_UNK func_00AED450(M2C_UNK);                     /* extern */
M2C_UNK func_00AED590(M2C_UNK);                     /* extern */

void func_00AED680(void) {
    u32 temp_v0;

    temp_v0 = func_00AEE570();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x404) != 0) {
            func_00AED590(0);
            func_00AED450(1);
        } else {
            func_00AED590(1);
            func_00AED450(0);
        }
    }
}
