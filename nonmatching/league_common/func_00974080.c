/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern void *D_00A7A208;

void func_00974080(void) {
    if (D_00A7A208 != NULL) {
        func_001D4E00(D_00A7A208);
        D_00A7A208 = NULL;
    }
}
