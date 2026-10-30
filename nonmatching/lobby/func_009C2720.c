/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009C15A0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_009C17C0();                                /* extern */
M2C_UNK func_009C3D30(s32);                         /* extern */
extern void *D_00A7DD50;

s32 func_009C2720(s8 arg0) {
    s32 var_s0;

    if (D_00A7DD50 != NULL) {
        M2C_FIELD(D_00A7DD50, s8 *, 0x21D) = arg0;
        if (func_009C17C0() == 0) {
            var_s0 = 0;
        } else {
            var_s0 = M2C_FIELD(D_00A7DD50, s32 *, 0x11A8);
        }
        func_009C3D30(var_s0);
        if ((var_s0 == 0) && (M2C_FIELD(D_00A7DD50, s8 *, 5) == 0)) {
            func_009C15A0(1, 0);
        }
        return 1;
    }
    return 0;
}
