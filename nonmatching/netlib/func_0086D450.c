/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001C6158(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_00857B70(void *);                      /* extern */
M2C_UNK func_0086A8E0(void *);                      /* extern */
M2C_UNK func_00873F60(s32 *, s32 *);                /* extern */
M2C_UNK func_00873FD0();                            /* extern */
M2C_UNK func_008740E0(s32 *, s8 *);                 /* extern */
extern M2C_UNK func_0086A7E0;

s32 func_0086D450(s32 *arg0, s32 arg1, void *arg2) {
    s32 sp58;
    s8 sp5F;
    s32 var_a2;
    s32 var_s0;
    s32 var_s1;
    void *temp_a1;
    void *temp_s0;
    void *temp_s3;

    sp58 = 0;
    sp5F = 0;
    if ((arg0 != NULL) && (arg1 != 0) && (arg2 != NULL)) {
        if (*arg0 != 0x4331) {
            return -0x46;
        }
        func_00873FD0();
        func_00873F60(arg0, &sp58);
        func_008740E0(arg0, &sp5F);
        var_s1 = 0;
        do {
            temp_s0 = arg2 + (var_s1 * 0xB8);
            if (sp58 == M2C_FIELD(temp_s0, s32 *, 0)) {
                func_001C48E8(temp_s0, 0, 0xB8);
                M2C_FIELD(temp_s0, s32 *, 0) = 0;
                M2C_FIELD(temp_s0, s32 *, 0x80) = 0;
                M2C_FIELD(temp_s0, s8 *, 0x7D) = 0xFF;
                M2C_FIELD(temp_s0, s8 *, 0x7E) = -1;
                M2C_FIELD(temp_s0, s8 *, 0x35) = 0xFF;
                M2C_FIELD(temp_s0, s8 *, 0x49) = 0xFF;
                M2C_FIELD(arg2, u8 *, 0x8FE) = (u8) (M2C_FIELD(arg2, u8 *, 0x8FE) - 1);
                if ((s32) M2C_FIELD(arg2, u8 *, 0x8FE) < 0) {
                    M2C_FIELD(arg2, u8 *, 0x8FE) = 0U;
                }
                if ((s32) M2C_FIELD(arg2, u8 *, 0x8FE) >= 9) {
                    M2C_FIELD(arg2, u8 *, 0x8FE) = 8U;
                }
            }
            var_s1 += 1;
        } while (var_s1 < 8);
        var_s0 = 0;
        do {
            temp_s3 = arg2 + (var_s0 * 0x38);
            if (sp58 == M2C_FIELD(temp_s3, s32 *, 0x5C0)) {
                func_00857B70(temp_s3 + 0x5C8);
                M2C_FIELD(temp_s3, s32 *, 0x5C4) = 0;
                M2C_FIELD(temp_s3, s32 *, 0x5C0) = 0;
            }
            var_s0 += 1;
        } while (var_s0 < 8);
        var_a2 = 0;
        do {
            temp_a1 = arg2 + (var_a2 * 8);
            if (sp58 == M2C_FIELD(temp_a1, s32 *, 0x780)) {
                M2C_FIELD(temp_a1, s32 *, 0x780) = 0;
                M2C_FIELD(temp_a1, s8 *, 0x784) = 0;
                M2C_FIELD(temp_a1, s8 *, 0x785) = 0;
            }
            var_a2 += 1;
        } while (var_a2 < 8);
        func_001C6158(arg2, 8, 0xB8, &func_0086A7E0);
        func_0086A8E0(arg2);
        return 0;
    }
    return -0x18;
}
