/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008FBDB0(void *arg0, s32 *arg1) {
    s32 (*temp_a3)(s32, M2C_UNK, M2C_UNK, M2C_UNK);
    s32 temp_a2;
    s32 temp_gp;
    s32 var_a5;
    void *temp_v0;

    var_a5 = 0;
    if ((arg0 != NULL) && (temp_a2 = M2C_FIELD(arg0, s32 *, 0x40), (temp_a2 != 0))) {
        temp_v0 = temp_a2 + (*arg1 * 0xC);
        temp_a3 = M2C_FIELD(temp_v0, s32 (**)(s32, M2C_UNK, M2C_UNK, M2C_UNK), 0xC);
        if (temp_a3 != NULL) {
            temp_gp = M2C_FIELD(temp_v0, s32 *, 0x14);
            var_a5 = temp_a3(M2C_FIELD(((*arg1 * 0xC) + temp_a2), s32 *, 0x10), temp_a3, 0xC, 0);
        }
    }
    return var_a5;
}
