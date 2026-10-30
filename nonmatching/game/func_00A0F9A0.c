/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A0F9A0(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) == 0x6A) {
        return 0;
    }
    return 1;
}
