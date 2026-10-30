/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BC4F80(M2C_UNK, M2C_UNK);                /* extern */
s32 func_00BC6100(u16, M2C_UNK);                    /* extern */
extern M2C_UNK func_00BE68F0;
extern M2C_UNK func_00BE6CA0;

s32 func_00BE60D0(void *arg0) {
    M2C_UNK *var_v0;

    if (func_00BC4F80(0xED001A, 0) != 0) {
        if (func_00BC6100(M2C_FIELD(arg0, u16 *, 8), 0) < 0x11) {
            var_v0 = &func_00BE6CA0;
        } else {
            var_v0 = &func_00BE68F0;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0) = var_v0;
    }
    return 0;
}
