/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024A8;

void func_001136DC(void *arg0) {
    M2C_UNK var_s0;
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, u8 *, 0x52) & 1;
    if (temp_a1 & 0xFF) {
        var_s0 = 0x804C;
        if (M2C_FIELD(D_006024A8, u8 *, 0xB8) != 0) {
            var_s0 = (M2C_FIELD(D_006024A8, s32 (**)(M2C_UNK, s32), 0x2C)(0, temp_a1) != 0) ? 0x802A : 0x804C;
        }
        M2C_FIELD(D_006024A8, M2C_UNK (**)(M2C_UNK, s32, M2C_UNK), 0x20)(0, M2C_FIELD(arg0, u8 *, 0x52) & 1, var_s0);
        return;
    }
    M2C_FIELD(D_006024A8, M2C_UNK (**)(M2C_UNK, s32, M2C_UNK), 0x20)(0, temp_a1, 0x802A);
}
