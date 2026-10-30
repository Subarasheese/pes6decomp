/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009C3D70(s32, void *);
M2C_UNK func_001C8590(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_009C15A0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_009C17C0();                                /* extern */
M2C_UNK func_009C3D30(s32);                         /* extern */
extern char D_00A02C38[];
extern void *D_00A7DD50;

s32 func_009C2A70(M2C_UNK *arg0) {
    M2C_UNK *var_a1;
    s32 var_a0;
    s32 var_s0;
    void *var_a1_2;

    if (D_00A7DD50 != NULL) {
        var_a1 = arg0;
        if (arg0 == NULL) {
            var_a1 = ((void *)D_00A02C38);
        }
        func_001C8590(D_00A7DD50 + 8, var_a1, 0x100);
        if (M2C_FIELD(D_00A7DD50, s8 *, 8) != 0) {
            var_a1_2 = D_00A7DD50 + 8;
        } else {
            var_a1_2 = D_00A7DD50 + 0x21E;
        }
        if (M2C_FIELD(D_00A7DD50, s32 *, 0) != 3) {
            var_a0 = 1;
        } else {
            var_a0 = 2;
        }
        func_009C3D70(var_a0, var_a1_2);
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
