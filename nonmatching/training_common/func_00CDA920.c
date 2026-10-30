/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EB274;

void func_00CDA920(void) {
    void *var_a0;

    var_a0 = D_003EB274;
    if (var_a0 != NULL) {
        do {
            M2C_FIELD(var_a0, s32 *, 0) = 3;
            var_a0 = M2C_FIELD(var_a0, void **, 0xB0);
        } while (var_a0 != NULL);
    }
}
