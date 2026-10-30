/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
void func_0063AD20(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        if (arg1 == 0) {
            return;
        }
        func_001DF820(M2C_FIELD(arg0, void **, 0xC), arg1);
    }
}
