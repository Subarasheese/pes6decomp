/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void *D_003EA3C8;

void func_00803030(void) {
    if (D_003EA3C8 != NULL) {
        func_00153FA0(D_003EA3C8);
        D_003EA3C8 = NULL;
    }
}
