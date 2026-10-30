/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005CBB98[];

void func_001A5518(M2C_UNK *arg0) {
    M2C_UNK *var_a1;
    M2C_UNK *var_a4;

    var_a4 = NULL;
    var_a1 = M2C_FIELD(((void *)D_005CBB98), M2C_UNK ***, 0x18);
loop_3:
    if (var_a1 != NULL) {
        if ((u32) ((M2C_FIELD(arg0, s64 *, 0x20) + M2C_FIELD(arg0, s64 *, 0x10)) - M2C_FIELD(arg0, s64 *, 0x18)) >= (u32) ((M2C_FIELD(var_a1, s64 *, 0x20) + M2C_FIELD(var_a1, s64 *, 0x10)) - M2C_FIELD(var_a1, s64 *, 0x18))) {
            var_a4 = var_a1;
            var_a1 = M2C_FIELD(var_a4, M2C_UNK **, 0);
            goto loop_3;
        }
    }
    M2C_FIELD(arg0, M2C_UNK **, 4) = var_a4;
    M2C_FIELD(arg0, M2C_UNK **, 0) = var_a1;
    if (var_a1 != NULL) {
        M2C_FIELD(var_a1, M2C_UNK **, 4) = arg0;
    }
    if (var_a4 != NULL) {
        *var_a4 = arg0;
        return;
    }
    M2C_FIELD((((void *)D_005CBB98) - 0x4468), M2C_UNK **, 0x18) = arg0;
}
