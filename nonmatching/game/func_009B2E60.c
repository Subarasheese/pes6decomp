/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern char D_005929C6[];

u16 func_009B2E60(void *arg0) {
    return *((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((u8 *)D_005929C6) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900)));
}
