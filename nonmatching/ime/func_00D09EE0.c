/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D10EE0(s32);                         /* extern */

s32 func_00D09EE0(void *arg0) {
    if (arg0 != NULL) {
        func_00D10EE0(arg0 + 0x10);
        M2C_FIELD(arg0, s32 *, 4) = -1;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        return 0;
    }
    return 1;
}
