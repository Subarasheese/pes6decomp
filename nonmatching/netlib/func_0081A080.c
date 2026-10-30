/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001D7980(void *);
s64 func_0081A080(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    return (s64) (func_001D7980(M2C_FIELD(arg0, void **, 8)) << 0x38) >> 0x38;
}
