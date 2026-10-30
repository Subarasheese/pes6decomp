/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void *D_003EA358;

s32 func_0085F1A0(void) {
    if (D_003EA358 != NULL) {
        func_00153FA0(D_003EA358);
        D_003EA358 = NULL;
    }
    return 0;
}
