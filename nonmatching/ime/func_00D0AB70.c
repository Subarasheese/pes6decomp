/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D08CE0(s32);                         /* extern */

s32 func_00D0AB70(void *arg0) {
    if (arg0 != NULL) {
        func_00D08CE0(arg0 + 0x808);
        M2C_FIELD(arg0, s8 *, 0xD7A) = 1;
        return 0;
    }
    return 1;
}
