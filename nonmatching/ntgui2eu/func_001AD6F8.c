/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_001B0D68(M2C_UNK, M2C_UNK);                /* extern */

s64 func_001AD6F8(void) {
    return (s64) (func_001B0D68(0, 0xA) << 0x20) >> 0x20;
}
