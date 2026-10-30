/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213800(void *);
M2C_UNK func_00968B10();                            /* extern */
s32 func_00968B30();                                /* extern */
M2C_UNK func_009C8730();                            /* extern */
M2C_UNK func_009DDB00(M2C_UNK, M2C_UNK);            /* extern */
extern void *D_00A7E240;

s32 func_009F36A0(void) {
    s32 temp_v0;
    s8 var_a1;

    if (M2C_FIELD(D_00A7E240, u8 *, 2) != 0) {
        func_00968B10();
    }
    temp_v0 = func_00968B30();
    var_a1 = 3;
    if (temp_v0 != 3) {
        var_a1 = 2;
        switch (temp_v0) {                          /* irregular */
        case 0:
            break;
        case 2:
            func_009DDB00(1, 2);
            func_00213800(M2C_FIELD(D_00A7E240, void **, 8));
            func_009C8730();
            if (M2C_FIELD(D_00A7E240, u8 *, 2) == 0) {
                M2C_FIELD(D_00A7E240, s8 *, 0) = 2;
            } else {
                M2C_FIELD(D_00A7E240, s8 *, 0) = 0;
            }
            break;
        case 1:
            M2C_FIELD(D_00A7E240, s8 *, 0) = 6;
            goto block_20;
        }
    } else if (M2C_FIELD(D_00A7E240, u8 *, 2) == 0) {
        M2C_FIELD(D_00A7E240, s8 *, 1) = 6;
        M2C_FIELD(D_00A7E240, s8 *, 0) = 4;
block_20:
        M2C_FIELD(D_00A7E240, s8 *, 4) = var_a1;
    } else {
        M2C_FIELD(D_00A7E240, s8 *, 0) = 0;
    }
    return 0;
}
