/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_009E0A20(M2C_UNK);                     /* extern */
M2C_UNK func_009E0A60(s8 *, s8 *, s32);             /* extern */
M2C_UNK func_009E0BF0();                            /* extern */
extern void *D_00A7DEF0;

void func_009E1320(s32 arg0, s8 *arg1, s8 *arg2, s32 arg3) {
    M2C_UNK var_a0;
    u8 var_v0;

    if (D_00A7DEF0 != NULL) {
        func_009E0BF0();
        func_009E0A60(arg1, arg2, arg3);
        M2C_FIELD(D_00A7DEF0, u8 *, 5) = 1U;
        if (M2C_FIELD(D_00A7DEF0, u8 *, 6) == 0) {
            var_v0 = M2C_FIELD(D_00A7DEF0, u8 *, 4);
        } else {
            var_v0 = M2C_FIELD(D_00A7DEF0, u8 *, 4) - 1;
        }
        M2C_FIELD(D_00A7DEF0, u8 *, 3) = var_v0;
        if (arg0 != 2) {
            M2C_FIELD(D_00A7DEF0, u8 *, 5) = 0U;
            M2C_FIELD(D_00A7DEF0, u8 *, 3) = (u8) (M2C_FIELD(D_00A7DEF0, u8 *, 4) - 1);
        }
        if ((arg1 == NULL) || (*arg1 == 0)) {
            M2C_FIELD(D_00A7DEF0, u8 *, 5) = 0U;
            M2C_FIELD(D_00A7DEF0, u8 *, 3) = (u8) (M2C_FIELD(D_00A7DEF0, u8 *, 4) - 1);
        }
        if ((arg2 == NULL) || (*arg2 == 0)) {
            M2C_FIELD(D_00A7DEF0, u8 *, 5) = 0U;
            M2C_FIELD(D_00A7DEF0, u8 *, 3) = (u8) (M2C_FIELD(D_00A7DEF0, u8 *, 4) - 1);
        }
        if (M2C_FIELD(D_00A7DEF0, u8 *, 5) != 0) {
            if (M2C_FIELD(D_00A7DEF0, u8 *, 6) == 0) {
                var_a0 = 1;
            } else {
                goto block_20;
            }
        } else {
block_20:
            var_a0 = 0;
        }
        func_009E0A20(var_a0);
    }
}
