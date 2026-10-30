/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0026B580(void *, s32, s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
extern void *D_003AE9D0;

s32 func_008FDC50(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 var_s0;

    var_s0 = 0;
    func_0026E840(0x84008401);
    if ((M2C_FIELD(D_003AE9D0, s8 *, 2) != 0) && (M2C_FIELD(D_003AE9D0, s8 *, 4) == 1)) {
        M2C_FIELD(D_003AE9D0, s8 *, 3) = 0;
        M2C_FIELD(D_003AE9D0, s8 *, 4) = 0;
    } else {
        func_0026B580(D_003AE9D0 + 0xC, 4, arg3);
        var_s0 = 2;
        M2C_FIELD(D_003AE9D0, s8 *, 8) = -1;
    }
    return var_s0;
}
