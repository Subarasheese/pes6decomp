/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(s32, u16);                        /* extern */

s32 func_00AB3B70(void *arg0, s32 arg1, s32 arg2) {
    return (s32) (func_009B3070(arg1, M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) / arg2;
}
