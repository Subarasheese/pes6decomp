/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009C15A0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_009C17C0(void *);                          /* extern */
M2C_UNK func_009C3D30(s32);                         /* extern */
extern void *D_00A7DD50;

void func_009C2E10(s32 arg0, s8 arg1) {
    s32 var_s0;

    if ((D_00A7DD50 != NULL) && (arg1 & 0xFF) && (M2C_FIELD((arg0 + D_00A7DD50), s8 *, 0x116C) = arg1, ((arg0 < 0x35) != 0))) {
        if (arg0 < 0) {
            return;
        }
        if (M2C_FIELD(D_00A7DD50, s8 *, 0x11A1) == arg0) {
            if (func_009C17C0(D_00A7DD50) != 0) {
                var_s0 = M2C_FIELD(D_00A7DD50, s32 *, 0x11A8);
            } else {
                var_s0 = 0;
            }
            func_009C3D30(var_s0);
            if ((var_s0 == 0) && (M2C_FIELD(D_00A7DD50, s8 *, 5) == 0)) {
                func_009C15A0(1, 0);
            }
        }
    }
}
