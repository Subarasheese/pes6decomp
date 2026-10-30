/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF460(void *, void *);
s32 func_009E3AF0(void *arg0, void *arg1) {
    if (arg0 == NULL) {
        return 0;
    }
    func_001DF460(M2C_FIELD(arg0, void **, 0xC), arg1);
    return 1;
}
