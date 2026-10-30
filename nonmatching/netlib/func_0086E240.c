/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C6158(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_0086A8E0(void *);                      /* extern */
M2C_UNK func_00873F60(s32 *, s32 *);                /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */
extern M2C_UNK func_0086A7E0;

s32 func_0086E240(s32 *arg0, void *arg1) {
    s32 sp3C;
    s32 var_a2;
    void *temp_a1;

    sp3C = 0;
    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (*arg0 != 0x434C) {
            return -0x46;
        }
        func_00874470();
        func_00873F60(arg0, &sp3C);
        func_00874460(arg0);
        M2C_FIELD(arg1, s32 *, 0x888) = sp3C;
        if (sp3C != 0) {
            var_a2 = 0;
            do {
                temp_a1 = arg1 + (var_a2 * 0xB8);
                if (sp3C != M2C_FIELD(temp_a1, s32 *, 0)) {
                    M2C_FIELD(temp_a1, s8 *, 0xB6) = 0;
                } else {
                    M2C_FIELD(temp_a1, s8 *, 0xB6) = 1;
                }
                var_a2 += 1;
            } while (var_a2 < 8);
        }
        func_001C6158(arg1, 8, 0xB8, &func_0086A7E0);
        func_0086A8E0(arg1);
        return 0;
    }
    return -0x18;
}
