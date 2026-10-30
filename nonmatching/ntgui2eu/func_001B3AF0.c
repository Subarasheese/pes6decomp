/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001B29E0(void *);
s32 func_001B3AF0(void *arg0) {
    if ((M2C_FIELD(arg0, u16 *, 0xC) & 9) == 9) {
        return func_001B29E0(arg0);
    }
    return 0;
}
