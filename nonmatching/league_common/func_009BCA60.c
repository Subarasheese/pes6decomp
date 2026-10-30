/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EA9C4;

void func_009BCA60(s8 arg0) {
    if (D_003EA9C4 != NULL) {
        M2C_FIELD(D_003EA9C4, s8 *, 0x548) = arg0;
    }
}
