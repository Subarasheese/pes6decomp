/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AE3240(void);
M2C_UNK func_00AEA2E0(M2C_UNK);                     /* extern */

s32 func_00AEA2A0(void) {
    if (func_00AE3240() != 0) {
        func_00AEA2E0(-1);
    }
    return 0;
}
