/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0020A540(void);
s32 func_00CED660(void *arg0) {
    if (arg0 != NULL) {
        func_0020A540();
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        return 1;
    }
    return 0;
}
