/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00812D40(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x16) != 0) {
        M2C_FIELD(arg0, u8 *, 0x16) = 0U;
        M2C_FIELD(arg0, s16 *, 0x18) = 0;
    }
}
