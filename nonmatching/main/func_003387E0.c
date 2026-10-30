/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005F1D54[];

s32 func_003387E0(s32 arg0) {
    M2C_UNK *var_a1;

    if (arg0 < 4) {
        return 0;
    }
    var_a1 = ((void *)D_005F1D54);
    if (((void *)D_005F1D54) != NULL) {
        do {
            if (M2C_FIELD(var_a1, s32 *, 8) >= arg0) {
                M2C_FIELD(var_a1, s8 *, 0x19) = 1;
            }
            var_a1 = M2C_FIELD(var_a1, M2C_UNK **, 0x14);
        } while (var_a1 != NULL);
    }
    return 1;
}
