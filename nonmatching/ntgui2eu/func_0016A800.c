/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0016AB68(void *);                      /* extern */

void func_0016A800(void *arg0, s32 arg1) {
    void *temp_s0;
    void *var_a0;
    void *var_s1;

    var_s1 = arg0 + 0xFA0;
    var_a0 = M2C_FIELD(arg0, void **, 0xFBC);
    if (arg1 != 0) {
        if (var_a0 != NULL) {
            do {
                temp_s0 = M2C_FIELD(var_a0, void **, 0x1C);
                if (var_a0 == arg1) {
                    M2C_FIELD(var_s1, void **, 0x1C) = temp_s0;
                    func_0016AB68(var_a0);
                } else {
                    var_s1 = var_a0;
                }
                var_a0 = temp_s0;
            } while (var_a0 != NULL);
        }
    }
}
