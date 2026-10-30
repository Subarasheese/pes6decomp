/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0017F900(void);
extern s32 func_0026AD30(void);
s32 func_0023BD80(s32 *);                           /* extern */
s32 func_008FEF70(s32 *);                           /* extern */
extern char D_003AE992[];
extern s32 *D_003AE9D0;

s32 func_00900E80(void) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;

    temp_v0 = M2C_FIELD(D_003AE9D0, s32 *, 0);
    var_s0 = 0;
    if (temp_v0 != 1) {
        if (temp_v0 != 0) {
            var_s0 = 1;
        } else if (func_0017F900() != 0) {
            var_v0 = M2C_FIELD(D_003AE9D0, s32 *, 0) + 1;
            goto block_13;
        }
    } else if ((*(u8 *)D_003AE992) == 0) {
        if (M2C_FIELD(D_003AE9D0, s32 *, 4) != 0) {
            var_v0_2 = func_008FEF70(D_003AE9D0);
        } else {
            var_v0_2 = func_0023BD80(D_003AE9D0);
        }
        if (var_v0_2 == 0) {

        } else {
            goto block_12;
        }
    } else if (func_0026AD30() != 0) {
block_12:
        var_v0 = M2C_FIELD(D_003AE9D0, s32 *, 0) + 1;
block_13:
        M2C_FIELD(D_003AE9D0, s32 *, 0) = var_v0;
    }
    return var_s0;
}
