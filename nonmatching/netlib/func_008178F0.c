/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B7A60(s32);
s32 func_008178F0(s64 arg0) {
    if (((s64) (arg0 << 0x38) >> 0x38) == 1) {
        func_001B7A60(1);
    } else {
        func_001B7A60(0);
    }
    return 1;
}
