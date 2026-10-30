/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C6158(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_00873F60(s32 *, s32 *);                /* extern */
M2C_UNK func_008740E0(s32 *, u8 *);                 /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */
M2C_UNK func_00877690(M2C_UNK, s32);                /* extern */
extern M2C_UNK func_00877740;

s32 func_00877D80(s32 *arg0, s32 arg1, s32 arg2, s8 *arg3) {
    s32 sp58;
    u8 sp5F;
    s32 var_a3;
    s8 var_v0;
    void *temp_a2;

    sp5F = 0;
    sp58 = 0;
    if ((arg0 != NULL) && (arg2 != 0) && (arg3 != NULL)) {
        if (*arg0 != 0x50D2) {
            return -0x46;
        }
        func_00874470();
        func_00873F60(arg0, &sp58);
        func_008740E0(arg0, &sp5F);
        func_00874460(arg0);
        var_a3 = 0;
        do {
            temp_a2 = arg2 + (var_a3 * 0xC8);
            if ((sp58 == M2C_FIELD(temp_a2, s32 *, 0)) && (sp58 != 0)) {
                if (sp5F != 0) {
                    M2C_FIELD(temp_a2, s8 *, 0x7D) = 2;
                } else {
                    M2C_FIELD(temp_a2, s8 *, 0x7D) = 1;
                }
            }
            var_a3 += 1;
        } while (var_a3 < 0x1E);
        if ((sp58 == arg1) && (sp58 != 0)) {
            if (sp5F != 0) {
                var_v0 = 2;
            } else {
                var_v0 = 1;
            }
            *arg3 = var_v0;
        }
        func_001C6158(arg2, 0x1E, 0xC8, &func_00877740);
        func_00877690(0, arg2);
        return 0;
    }
    return -0x18;
}
