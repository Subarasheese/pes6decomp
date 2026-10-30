/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0086A8E0(void *);                      /* extern */
M2C_UNK func_00873F60(s32 *, s32 *);                /* extern */
M2C_UNK func_008740E0(s32 *, u8 *);                 /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470(s32 *);                       /* extern */

s32 func_0086C260(s32 *arg0, void *arg1, s32 arg2) {
    s32 sp58;
    u8 sp5E;
    u8 sp5F;
    s32 var_a3;
    s32 var_s0;
    s32 var_s1;
    void *temp_a2;

    var_s0 = arg2 & 0xFF;
    sp58 = 0;
    sp5F = 0xFF;
    sp5E = 0xFF;
    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (*arg0 != 0x4365) {
            return -0x46;
        }
        if (var_s0 < 4) {
            var_s0 = 4;
        }
        if (var_s0 >= 9) {
            var_s0 = 8;
        }
        func_00874470(arg0);
        var_s1 = 0;
loop_19:
        if (var_s1 < var_s0) {
            func_00873F60(arg0, &sp58);
            func_008740E0(arg0, &sp5E);
            func_008740E0(arg0, &sp5F);
            var_a3 = 0;
            do {
                temp_a2 = arg1 + (var_a3 * 0xB8);
                if ((sp58 == M2C_FIELD(temp_a2, s32 *, 0)) && (sp58 != 0)) {
                    M2C_FIELD(temp_a2, u8 *, 0x35) = sp5E;
                    M2C_FIELD(temp_a2, u8 *, 0x49) = sp5F;
                    M2C_FIELD(arg1, s32 *, 0x888) = sp58;
                }
                if (M2C_FIELD(temp_a2, s32 *, 0) == 0) {
                    M2C_FIELD(temp_a2, u8 *, 0x35) = 0xFFU;
                    M2C_FIELD(temp_a2, u8 *, 0x49) = 0xFFU;
                    M2C_FIELD(temp_a2, s8 *, 0x7E) = -1;
                }
                var_a3 += 1;
            } while (var_a3 < 8);
            var_s1 += 1;
            goto loop_19;
        }
        func_00874460(arg0);
        func_0086A8E0(arg1);
        return 0;
    }
    return -0x18;
}
