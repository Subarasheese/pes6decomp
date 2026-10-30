/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(s32);                         /* extern */
s32 func_00918F90(M2C_UNK, M2C_UNK);                /* extern */
extern void *D_00923FCC;

s32 func_00919720(void) {
    M2C_UNK var_a0;
    s32 temp_v0;

    var_a0 = 1;
    if (M2C_FIELD(D_00923FCC, s32 *, 8) != 1) {
        var_a0 = -1;
    }
    temp_v0 = func_00918F90(var_a0, 0);
    if (temp_v0 != 0) {
        func_0026E840(temp_v0);
    }
    return 0;
}
