/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009C15A0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_009C17C0();                                /* extern */
M2C_UNK func_009C3CD0();                            /* extern */
M2C_UNK func_009C3D30(s32);                         /* extern */
extern void *D_00A7DD50;

s32 func_009C25B0(s32 arg0, s32 arg1) {
    s32 var_s0;

    if (D_00A7DD50 == NULL) {
        return 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 < 3) {
        M2C_FIELD(((arg0 * 4) + D_00A7DD50), s32 *, 0x11A8) = arg1;
        func_009C3CD0();
        if ((arg1 == 0) && (M2C_FIELD(D_00A7DD50, s8 *, 5) == arg0)) {
            func_009C15A0(1, 0);
        }
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
