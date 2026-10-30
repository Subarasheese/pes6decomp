/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern s32 func_001D7980(void *);
s32 func_0081D7E0(void *arg0, s64 arg1) {
    if (arg0 == NULL) {
        return 0;
    }
    if (((s64) (arg1 << 0x38) >> 0x38) != (func_001D7980(arg0) & 0xFF)) {
        func_001D7D60(arg0, arg1 & 0xFF);
    }
    return 1;
}
