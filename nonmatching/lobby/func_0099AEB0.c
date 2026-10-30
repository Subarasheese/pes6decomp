/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B9A50(void *, s32);
s32 func_0099AEB0(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return 0;
    }
    func_001B9A50(arg0, arg1);
    return 1;
}
