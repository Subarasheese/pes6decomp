/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EADF0;
extern u8 D_003EADF4;
extern u8 D_003EADF8;

void func_00B13FC0(void) {
    if (D_003EADF0 != NULL) {
        D_003EADF4 = M2C_FIELD(D_003EADF0, u8 *, 0xC1A);
        D_003EADF8 = M2C_FIELD(D_003EADF0, u8 *, 0xC0E);
    }
}
