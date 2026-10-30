/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D084F0(s32);                         /* extern */

s32 func_00D0A750(void *arg0) {
    if (arg0 != NULL) {
        func_00D084F0(arg0 + 0x808);
        if (arg0 != NULL) {
            M2C_FIELD(arg0, s8 *, 0xD7B) = 1;
            M2C_FIELD(arg0, s8 *, 0xD7A) = 1;
        }
        return 1;
    }
    return 0;
}
