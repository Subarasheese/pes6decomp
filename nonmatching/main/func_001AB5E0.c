/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AB650(void *);                      /* extern */
extern void *D_003E9894;

void func_001AB5E0(void) {
    void *var_s0;

    var_s0 = D_003E9894;
    if (var_s0 != NULL) {
        do {
            if (M2C_FIELD(var_s0, u8 *, 1) != 0) {
                func_001AB650(var_s0);
            }
            var_s0 = M2C_FIELD(var_s0, void **, 0x24);
        } while (var_s0 != NULL);
    }
}
