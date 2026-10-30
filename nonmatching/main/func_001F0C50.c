/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00103538(s32, M2C_UNK);                /* extern */
M2C_UNK func_001E6310(s32, M2C_UNK);                /* extern */
M2C_UNK func_001E6360(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_001F0D10(s32, void *);                 /* extern */
M2C_UNK func_001F3AE0(s32, void *);                 /* extern */

void func_001F0C50(void *arg0) {
    s32 temp_s0;
    void *temp_a1;
    void *var_s1;

    temp_a1 = M2C_FIELD(arg0, void **, 0x1C);
    temp_s0 = M2C_FIELD(temp_a1, s32 *, 0x1C);
    if (M2C_FIELD(arg0, u8 *, 2) != 0) {
        func_001F3AE0(temp_s0, temp_a1);
        func_00103538(temp_s0, 0);
        func_001E6360(temp_s0, 1, 1);
        func_001F0D10(temp_s0, arg0);
        func_001E6310(temp_s0, 1);
        var_s1 = M2C_FIELD(arg0, void **, 0x2C);
        if (var_s1 != NULL) {
            do {
                M2C_FIELD(M2C_FIELD(var_s1, void **, 0x1C), s32 *, 0x1C) = temp_s0;
                M2C_FIELD(var_s1, M2C_UNK (**)(void *), 0x40)(var_s1);
                var_s1 = M2C_FIELD(var_s1, void **, 0x38);
            } while (var_s1 != NULL);
        }
    }
}
