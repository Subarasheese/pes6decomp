/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008E7F00(s32);                         /* extern */

void func_008E7310(void *arg0) {
    if (arg0 != NULL) {
        func_008E7F00(arg0 + 0x54);
        M2C_FIELD(arg0, s8 *, 1) = 0;
    }
}
