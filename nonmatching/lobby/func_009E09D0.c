/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF730(s32, M2C_UNK);                /* extern */
extern void *D_00A7DEE8;

s32 func_009E09D0(s32 arg0) {
    M2C_UNK var_a1;

    if (D_00A7DEE8 == NULL) {
        return 0;
    }
    if (arg0 == 0) {
        var_a1 = 2;
    } else {
        var_a1 = 0;
    }
    func_002DF730(M2C_FIELD(D_00A7DEE8, s32 *, 0x28), var_a1);
    return 1;
}
