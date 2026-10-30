/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00AEC360(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, u8 *, 0x24) = (u8) ((M2C_FIELD(arg0, u8 *, 0x24) & ~1) | 1);
    }
}
