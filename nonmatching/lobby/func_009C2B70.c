/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0099C570(s32);                         /* extern */
M2C_UNK func_0099C660(s32);                         /* extern */
M2C_UNK func_009C15A0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_009C17C0();                                /* extern */
M2C_UNK func_009C3C00(s8);                          /* extern */
M2C_UNK func_009C3F30(M2C_UNK, void *);             /* extern */
extern void *D_00A7DD50;

void func_009C2B70(void) {
    s32 temp_a0;
    s32 var_v1;
    s8 temp_s0;

    if ((D_00A7DD50 != NULL) && (M2C_FIELD(D_00A7DD50, s8 *, 4) == 3)) {
        M2C_FIELD(D_00A7DD50, s8 *, 4) = 0;
        M2C_FIELD(D_00A7DD50, s8 *, 0x11A4) = 0;
        func_009C3F30(1, D_00A7DD50 + 4);
        func_009C3C00(M2C_FIELD(D_00A7DD50, s8 *, 5));
        temp_a0 = M2C_FIELD(((M2C_FIELD(D_00A7DD50, s8 *, 5) * 4) + D_00A7DD50), s32 *, 0x420);
        if (temp_a0 == 0) {
            func_0099C570(temp_a0);
        } else {
            func_0099C660(temp_a0);
        }
        temp_s0 = M2C_FIELD(D_00A7DD50, s8 *, 5);
        if (temp_s0 < 0) {
            var_v1 = 0;
        } else if (temp_s0 >= 3) {
            var_v1 = 0;
        } else if ((temp_s0 == 0) && (func_009C17C0() == 0)) {
            var_v1 = 0;
        } else {
            var_v1 = M2C_FIELD(((temp_s0 * 4) + D_00A7DD50), s32 *, 0x11A8);
        }
        if (var_v1 == 0) {
            func_009C15A0(1, 0);
        }
    }
}
