/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EACA0;

void func_00968B10(void) {
    if (D_003EACA0 != NULL) {
        M2C_FIELD(D_003EACA0, s32 *, 0x10) = 1;
    }
}
