/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF730(s32, M2C_UNK);                /* extern */
M2C_UNK func_002E4200(s32, M2C_UNK);                /* extern */
extern void *D_00A7DF18;

s32 func_009E5AE0(s32 arg0) {
    M2C_UNK var_a1;
    M2C_UNK var_a1_2;

    if (D_00A7DF18 == NULL) {
        return 0;
    }
    if (arg0 == 0) {
        var_a1 = 2;
    } else {
        var_a1 = 0;
    }
    func_002DF730(M2C_FIELD(D_00A7DF18, s32 *, 0x10), var_a1);
    if (arg0 != 0) {
        var_a1_2 = 0;
    } else {
        var_a1_2 = 1;
    }
    func_002E4200(M2C_FIELD(D_00A7DF18, s32 *, 0xC), var_a1_2);
    return 1;
}
