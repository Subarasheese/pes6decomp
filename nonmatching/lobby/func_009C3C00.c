/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009C3450();                            /* extern */
extern void *D_00A7DD58;

s32 func_009C3C00(s8 arg0) {
    if (D_00A7DD58 == NULL) {
        return 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 < 3) {
        M2C_FIELD(D_00A7DD58, s8 *, 0x56) = arg0;
        func_009C3450();
        return 1;
    }
    return 0;
}
