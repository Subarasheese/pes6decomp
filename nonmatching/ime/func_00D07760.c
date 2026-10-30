/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D07760(void *arg0, void *arg1) {
    if (arg0 == NULL) {
        return 0;
    }
    if (arg1 != NULL) {
        M2C_FIELD(arg0, M2C_UNK32 *, 0x28) = (M2C_UNK32) M2C_FIELD(arg1, M2C_UNK32 *, 0);
        M2C_FIELD(arg0, M2C_UNK32 *, 0x2C) = (M2C_UNK32) M2C_FIELD(arg1, M2C_UNK32 *, 4);
    } else {
        M2C_FIELD(arg0, M2C_UNK32 *, 0x28) = 0;
        M2C_FIELD(arg0, M2C_UNK32 *, 0x2C) = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x3B) = 1;
    return 1;
}
