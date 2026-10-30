/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009AE900(void);
M2C_UNK func_009ADBB0(M2C_UNK);                     /* extern */

s32 func_009ADB30(void) {
    if (func_009AE900() != 0) {
        func_009ADBB0(1);
    }
    return 0;
}
