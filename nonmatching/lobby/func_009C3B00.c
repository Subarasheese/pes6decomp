/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D7A20(s32, s32, M2C_UNK);           /* extern */
extern s32 *D_00A7DD58;

s32 func_009C3B00(s32 arg0, s32 arg1) {
    M2C_UNK var_a2;

    if (D_00A7DD58 == NULL) {
        return 0;
    }
    if (arg1 != 0) {
        switch (arg0) {                             /* irregular */
        case 2:
            var_a2 = 7;
block_13:
            func_001D7A20(*D_00A7DD58, arg1, var_a2);
            return arg1;
        case 1:
            var_a2 = 6;
            goto block_13;
        default:
            return 0;
        }
    } else {
        return 0;
    }
}
