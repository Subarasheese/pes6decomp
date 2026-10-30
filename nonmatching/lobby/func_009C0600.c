/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */

s32 func_009C0600(void *arg0) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            if (M2C_FIELD(arg0, s32 *, 0) != 3) {
                M2C_FIELD(arg0, s8 *, 0x9E) = 1;
            }
            M2C_FIELD(arg0, s32 *, 0) = 3;
        }
        func_0026E840(0x84028400);
    }
    return 0;
}
