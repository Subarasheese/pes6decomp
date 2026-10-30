/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void *D_00CE35B0;

void func_00B950A0(void) {
    if (D_00CE35B0 != NULL) {
        func_00153FA0(D_00CE35B0);
        D_00CE35B0 = NULL;
    }
}
