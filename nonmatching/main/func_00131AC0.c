/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00131AC0(void **arg0, void *arg1) {
    void *var_a1;

    var_a1 = arg1;
    *arg0 = var_a1;
    if (var_a1 != NULL) {
        do {
            if (M2C_FIELD(var_a1, s32 *, 0x108) == 0) {
                M2C_FIELD(var_a1, s8 *, 0x103) = -0x80;
            } else {
                M2C_FIELD(var_a1, s8 *, 0x103) = 0;
            }
            var_a1 = M2C_FIELD(var_a1, void **, 0x104);
        } while (var_a1 != NULL);
    }
}
