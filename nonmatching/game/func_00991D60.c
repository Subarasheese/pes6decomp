/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003E7A08;

void func_00991D60(void) {
    M2C_FIELD(D_003E7A08, u8 *, 0x2C4) = (u8) (M2C_FIELD(D_003E7A08, u8 *, 0x2C4) + 1);
}
