/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF4F0(void *, s8);
void func_0063AD60(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        func_001DF4F0(M2C_FIELD(arg0, void **, 0xC), arg1 & 0xFF);
    }
}
