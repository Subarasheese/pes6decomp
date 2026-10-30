/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009B0FD0(void);
s32 func_0095ED20();                                /* extern */
M2C_UNK func_009B0B60(M2C_UNK);                     /* extern */

s32 func_009B0B10(void) {
    if (func_009B0FD0() == 0) {

    } else if (func_0095ED20() != 0) {
        func_009B0B60(-1);
    }
    return 0;
}
