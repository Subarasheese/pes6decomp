/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009E0A20(M2C_UNK);                     /* extern */
extern void *D_00A7DEF0;

void func_009E1270(u8 arg0) {
    M2C_UNK var_a0;
    u8 var_v1;

    if (D_00A7DEF0 != NULL) {
        M2C_FIELD(D_00A7DEF0, u8 *, 6) = arg0;
        if (M2C_FIELD(D_00A7DEF0, u8 *, 5) != 0) {
            if (M2C_FIELD(D_00A7DEF0, u8 *, 6) == 0) {
                var_a0 = 1;
            } else {
                goto block_8;
            }
        } else {
block_8:
            var_a0 = 0;
        }
        func_009E0A20(var_a0);
        if (arg0 != 0) {
            var_v1 = M2C_FIELD(D_00A7DEF0, u8 *, 4) - 1;
        } else if (M2C_FIELD(D_00A7DEF0, u8 *, 5) == 0) {
            var_v1 = M2C_FIELD(D_00A7DEF0, u8 *, 4) - 1;
        } else {
            var_v1 = M2C_FIELD(D_00A7DEF0, u8 *, 4);
        }
        M2C_FIELD(D_00A7DEF0, u8 *, 3) = var_v1;
    }
}
