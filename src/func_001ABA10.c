/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001ABAA0(void *);                      /* extern */
M2C_UNK func_001ABF00(void *);                      /* extern */
M2C_UNK func_001AC000(void *);                      /* extern */
extern void *D_003E9894;

void func_001ABA10(void) {
    void *var_s0;

    var_s0 = D_003E9894;
    if (var_s0 != NULL) {
        do {
            func_001AC000(var_s0);
            func_001ABF00(var_s0);
            func_001ABAA0(var_s0);
            var_s0 = M2C_FIELD(var_s0, void **, 0x24);
        } while (var_s0 != NULL);
    }
}
