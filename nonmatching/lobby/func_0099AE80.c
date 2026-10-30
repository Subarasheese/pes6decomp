/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B9C60(void *);
s32 func_0099AE80(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    func_001B9C60(arg0);
    return 1;
}
