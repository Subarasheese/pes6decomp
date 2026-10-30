/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void *D_008EE1A0;

void func_008B4680(s8 arg0) {
    if (D_008EE1A0 != NULL) {
        func_001D7D60(D_008EE1A0, arg0);
    }
}
