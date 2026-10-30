/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E49E0(void *, s8);
extern void *D_003EAFC0;

void func_00BCF740(s8 arg0) {
    if (D_003EAFC0 != NULL) {
        func_002E49E0(D_003EAFC0, arg0);
    }
}
