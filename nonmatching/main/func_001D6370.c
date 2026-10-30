/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001D6370(void *arg0) {
    void *temp_s0;
    void *var_a0;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
            return;
        }
        var_a0 = M2C_FIELD(arg0, void **, 0x14);
        do {
            temp_s0 = M2C_FIELD(var_a0, void **, 0x20);
            M2C_FIELD(var_a0, M2C_UNK (**)(void *), 0x18)(var_a0);
            var_a0 = temp_s0;
        } while (temp_s0 != NULL);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        M2C_FIELD(arg0, void **, 0x14) = NULL;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
}
