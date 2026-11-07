/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001EB170(s32);                         /* extern */
M2C_UNK func_001F4020(void *);                      /* extern */

void func_001F1EA0(void *arg0) {
    void *temp_s0;
    void *var_a0;

    if (arg0 != NULL) {
        func_001EB170(M2C_FIELD(arg0, s32 *, 0x48));
        var_a0 = M2C_FIELD(arg0, void **, 0x2C);
        if (var_a0 != NULL) {
            do {
                temp_s0 = M2C_FIELD(var_a0, void **, 0x38);
                M2C_FIELD(var_a0, M2C_UNK (**)(void *), 0x44)(var_a0);
                var_a0 = temp_s0;
            } while (temp_s0 != NULL);
        }
        func_001F4020(arg0);
    }
}
