/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s8 *D_003EA694;

void func_008FF780(void) {
    if (D_003EA694 != NULL) {
        *D_003EA694 |= ~0x7F;
    }
}
