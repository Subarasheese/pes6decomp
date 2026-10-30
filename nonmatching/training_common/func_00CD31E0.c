/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void *D_003EB264;

void func_00CD31E0(void) {
    if (D_003EB264 != NULL) {
        func_00153FA0(D_003EB264);
        D_003EB264 = NULL;
    }
}
