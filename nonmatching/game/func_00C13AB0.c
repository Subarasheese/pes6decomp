/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00C13AB0(void *arg0, s32 arg1, s32 arg2) {
    void *var_s0;

    if (arg0 != NULL) {
        var_s0 = M2C_FIELD(arg0, void **, 8);
        if (var_s0 != NULL) {
            do {
                M2C_FIELD(var_s0, M2C_UNK (**)(s32, s32), 4)(arg1, arg2);
                var_s0 = M2C_FIELD(var_s0, void **, 0);
            } while (var_s0 != NULL);
        }
    }
}
