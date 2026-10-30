/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00BC40A0();                                /* extern */
s32 func_00BF3B70(M2C_UNK);                         /* extern */
M2C_UNK func_00BF4370(M2C_UNK);                     /* extern */
s32 func_00BF5800(M2C_UNK);                         /* extern */
M2C_UNK func_00C1B420(M2C_UNK);                     /* extern */
extern M2C_UNK func_00BE52A0;
extern M2C_UNK func_00BE5820;

s32 func_00BE5510(M2C_UNK **arg0) {
    M2C_UNK *var_v0;
    s32 temp_v0;

    if (func_00BC40A0() == 0) {
        temp_v0 = func_00BF3B70(0);
        switch (temp_v0) {                          /* irregular */
        case 0:
            if (func_00BF5800(0) != 0) {
                func_00BF4370(0);
                func_00C1B420(0);
                func_00B91590(0x19, 1);
            }
            break;
        case 1:
            var_v0 = &func_00BE52A0;
block_14:
            *arg0 = var_v0;
            break;
        case 2:
            var_v0 = &func_00BE5820;
            goto block_14;
        }
    }
    return 0;
}
