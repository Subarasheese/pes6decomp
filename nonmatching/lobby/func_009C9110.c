/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213800(void *);
M2C_UNK func_009C7630();                            /* extern */
M2C_UNK func_009C7650();                            /* extern */
s32 func_009C7690();                                /* extern */
M2C_UNK func_009C8730();                            /* extern */
extern void *D_00A7DD80;

u8 func_009C9110(void) {
    s32 temp_v0;

    if (M2C_FIELD(D_00A7DD80, u8 *, 1) != 0) {
        func_009C7630();
    }
    temp_v0 = func_009C7690();
    switch (temp_v0) {                              /* irregular */
    case 1:
        func_009C7650();
        M2C_FIELD(D_00A7DD80, u8 *, 3) = 1U;
        M2C_FIELD(D_00A7DD80, s8 *, 0) = 4;
        return M2C_FIELD(D_00A7DD80, u8 *, 3);
    case 3:
    case 2:
        func_009C7650();
        func_009C8730();
        func_00213800(M2C_FIELD(D_00A7DD80, void **, 8));
        M2C_FIELD(D_00A7DD80, s8 *, 0) = 0;
block_11:
    default:
        return 0U;
    case 4:
        func_009C7650();
        goto block_11;
    }
}
