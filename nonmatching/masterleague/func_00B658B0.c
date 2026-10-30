/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B64F60(void);
M2C_UNK func_00B65930(M2C_UNK);                     /* extern */

s32 func_00B658B0(void) {
    if (func_00B64F60() != 0) {
        func_00B65930(1);
    }
    return 0;
}
