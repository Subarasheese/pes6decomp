/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF460(void *, void *);
void func_009737A0(void *arg0, void *arg1) {
    if (arg0 != NULL) {
        func_001DF460(M2C_FIELD(arg0, void **, 0xC), arg1);
    }
}
