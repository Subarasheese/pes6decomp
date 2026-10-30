/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005F1D54[];

s32 func_003384E0(s32 arg0, s32 arg1) {
    M2C_UNK *var_v1;

    var_v1 = ((void *)D_005F1D54);
    if (((void *)D_005F1D54) != NULL) {
loop_1:
        if (M2C_FIELD(var_v1, s32 *, 0xC) != arg0) {
            var_v1 = M2C_FIELD(var_v1, M2C_UNK **, 0x14);
            if (var_v1 == NULL) {
                goto block_7;
            }
            goto loop_1;
        }
        if (M2C_FIELD(var_v1, s32 *, 0) == arg1) {
            return 1;
        }
        goto block_7;
    }
block_7:
    return 0;
}
