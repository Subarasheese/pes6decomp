/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_001C8590(s32, void *, M2C_UNK);        /* extern */
M2C_UNK func_0086A8E0(void *);                      /* extern */
M2C_UNK func_00873F60(s32 *, s32 *);                /* extern */
M2C_UNK func_00874120(s32 *, s8 *);                 /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_0086D0B0(s32 *arg0, void *arg1, s32 arg2) {
    s32 sp58;
    s8 sp5F;
    s32 *temp_a0;
    s32 var_s0;
    s32 var_s1;
    s8 temp_v1;

    sp58 = 0;
    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != 0)) {
        if (*arg0 != 0x4371) {
            return -0x46;
        }
        func_00874470();
        func_00873F60(arg0, &sp58);
        func_00874120(arg0, &sp5F);
        func_00874460(arg0);
        M2C_FIELD(arg1, s32 *, 0x888) = 0;
        func_001C48E8(arg2, 0, 0x31);
        if (sp58 != 0) {
            var_s1 = 0;
            do {
                if ((M2C_FIELD((arg1 + (var_s1 * 0x10)), s32 *, 0x7C0) == sp58) && (sp58 != 0)) {
                    M2C_FIELD(arg1, s32 *, 0x888) = sp58;
                    temp_v1 = M2C_FIELD(arg1, s8 *, 0x8D6);
                    if ((temp_v1 == 8) || (temp_v1 == 0xA)) {
                        if ((M2C_FIELD((arg1 + var_s1), s8 *, 0x8EC) == 6) && (sp5F == 0)) {
                            var_s0 = 0;
                            do {
                                temp_a0 = arg1 + (var_s0 * 0xB8);
                                if (sp58 == *temp_a0) {
                                    func_001C8590(arg2, temp_a0 + 0x4C, 0x30);
                                }
                                var_s0 += 1;
                            } while (var_s0 < 8);
                        }
                    }
                    M2C_FIELD((arg1 + var_s1), s8 *, 0x8EC) = sp5F;
                }
                var_s1 += 1;
            } while (var_s1 < 4);
        }
        func_0086A8E0(arg1);
        return 0;
    }
    return -0x18;
}
