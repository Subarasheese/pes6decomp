/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0090B890(void *arg0, s32 arg1) {
    return (M2C_FIELD(arg0, u8 *, 0x1FC) & (1 << (arg1 & 0xFF))) != 0;
}
