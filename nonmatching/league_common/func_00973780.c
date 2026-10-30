/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DEFD0(void *, void *);
void func_00973780(void *arg0, void *arg1) {
    if (arg0 != NULL) {
        func_001DEFD0(M2C_FIELD(arg0, void **, 0xC), arg1);
    }
}
