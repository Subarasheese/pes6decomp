/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017F880(void);
extern void *D_003E98DC;

void func_001B0390(void) {
    void *var_s0;

    var_s0 = D_003E98DC;
    if (var_s0 != NULL) {
        do {
            M2C_FIELD(var_s0, s8 *, 0xC) = 1;
            if (M2C_FIELD(var_s0, s32 *, 8) == 0) {
                func_0017F880();
            }
            var_s0 = M2C_FIELD(var_s0, void **, 0);
        } while (var_s0 != NULL);
    }
}
