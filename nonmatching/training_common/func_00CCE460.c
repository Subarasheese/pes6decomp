/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001A5E00(M2C_UNK);                     /* extern */

s32 func_00CCE460(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x30) == 0) {
        func_001A5E00(2);
        func_001A5E00(1);
        M2C_FIELD(arg0, s32 *, 0x30) = 1;
    }
    return 1;
}
