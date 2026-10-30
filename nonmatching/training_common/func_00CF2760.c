/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002623A0(void);
s32 func_00CF2760(void) {
    return M2C_FIELD(func_002623A0(), s32 *, 0x18);
}
