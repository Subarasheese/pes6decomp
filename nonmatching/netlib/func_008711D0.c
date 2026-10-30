/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00873F60(s32 *, s32 *);                /* extern */
M2C_UNK func_008740E0(s32 *, u8 *);                 /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_008711D0(s32 *arg0, void *arg1) {
    s32 sp48;
    u8 sp4F;
    s32 var_v1;
    void *temp_s2;
    void *temp_v0;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (*arg0 != 0x4524) {
            return -0x46;
        }
        func_00874470();
        func_00873F60(arg0, &sp48);
        func_008740E0(arg0, &sp4F);
        var_v1 = 0;
loop_10:
        if (var_v1 < 0x46) {
            temp_v0 = arg1 + (var_v1 * 0x38);
            temp_s2 = temp_v0 + 0xC;
            if (M2C_FIELD(temp_v0, s32 *, 0xC) == 0) {
                M2C_FIELD(temp_v0, s32 *, 0xC) = sp48;
                M2C_FIELD(temp_s2, u8 *, 4) = sp4F;
                func_001C48E8(temp_s2 + 5, 0, 0x31);
                func_00873EE0(arg0, temp_s2 + 5, 0x30);
                if (sp4F != 0) {
                    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) + 1);
                } else {
                    M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) + 1);
                }
                func_00874460(arg0);
            } else {
                var_v1 += 1;
                goto loop_10;
            }
        } else {
            func_00874460(arg0);
        }
        return 0;
    }
    return -0x18;
}
