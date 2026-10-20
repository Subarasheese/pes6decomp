/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_001540C0();                                /* extern */
M2C_UNK func_001D6050(void *, s32);                 /* extern */
extern void *D_003E9944;

void func_001D4EF0(void) {
    void *var_s0;

    var_s0 = D_003E9944;
    if (var_s0 != NULL) {
        do {
            func_001D6050(var_s0, func_001540C0());
            var_s0 = M2C_FIELD(var_s0, void **, 4);
        } while (var_s0 != NULL);
    }
}
