/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009C3330();                            /* extern */
extern void *D_00A7DD58;

s32 func_009C3D30(s32 arg0) {
    if (D_00A7DD58 != NULL) {
        M2C_FIELD(D_00A7DD58, s32 *, 0x58) = arg0;
        func_009C3330();
        return 1;
    }
    return 0;
}
