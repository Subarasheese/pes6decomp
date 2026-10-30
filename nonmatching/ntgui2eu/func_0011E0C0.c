/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK func_0011E0D8;

void func_0011E0C0(void *arg0, M2C_UNK *arg1) {
    M2C_UNK *var_a1;

    var_a1 = arg1;
    if (var_a1 == NULL) {
        var_a1 = &func_0011E0D8;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x398) = var_a1;
}
