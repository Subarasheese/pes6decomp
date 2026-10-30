/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B4D20(void *);
extern void *D_003EB2C8;

void func_00CE41E0(void) {
    if (D_003EB2C8 != NULL) {
        func_001B4D20(D_003EB2C8);
        D_003EB2C8 = NULL;
    }
}
