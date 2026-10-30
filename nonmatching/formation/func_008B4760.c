/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern void *D_008EE19C;

s32 func_008B4760(void) {
    if (D_008EE19C != NULL) {
        func_001D7D80(D_008EE19C, 3);
    }
    return 1;
}
