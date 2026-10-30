/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK func_00C13AA0;

void func_00C13B10(void *arg0, void *arg1, M2C_UNK *arg2) {
    M2C_UNK *var_a2;

    var_a2 = arg2;
    if (var_a2 == NULL) {
        var_a2 = &func_00C13AA0;
    }
    if ((arg0 != NULL) && (arg1 != NULL)) {
        M2C_FIELD(arg1, M2C_UNK **, 4) = var_a2;
        M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(arg0, void **, 8) = arg1;
    }
}
