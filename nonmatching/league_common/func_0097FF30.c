/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F3A20(void *);
extern void **D_003EA970;

void func_0097FF30(void) {
    if (D_003EA970 != NULL) {
        func_002F3A20(*D_003EA970);
    }
}
