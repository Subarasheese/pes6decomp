/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00873F60(s32 *, s32 *);                /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_00871F40(s32 *arg0, u16 *arg1) {
    s32 sp4C;
    s32 var_a1;
    s32 var_s0;
    void *temp_s2;
    void *temp_v1;
    void *temp_v1_2;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (*arg0 != 0x4221) {
            return -0x46;
        }
        func_00874470();
        func_00873F60(arg0, &sp4C);
        func_00874460(arg0);
        var_a1 = 0;
loop_10:
        if (var_a1 < 0x64) {
            temp_v1 = arg1 + (var_a1 * 0x84);
            if (M2C_FIELD(temp_v1, s32 *, 0x38) == sp4C) {
                func_001C48E8(temp_v1 + 4, 0, 0x84);
                *arg1 -= 1;
                if ((s32) *arg1 < 0) {
                    *arg1 = 0;
                }
                if ((s32) *arg1 >= 0x65) {
                    *arg1 = 0x64;
                }
            } else {
                var_a1 += 1;
                goto loop_10;
            }
        }
        var_s0 = 0;
        do {
            temp_v1_2 = arg1 + (var_s0 * 0x84);
            if ((M2C_FIELD(temp_v1_2, s32 *, 0x38) == 0) && (M2C_FIELD(temp_v1_2, s32 *, 0xBC) != 0)) {
                temp_s2 = arg1 + ((var_s0 + 1) * 0x84) + 4;
                func_001C4730(temp_v1_2 + 4, temp_s2, 0x84);
                func_001C48E8(temp_s2, 0, 0x84);
            }
            var_s0 += 1;
        } while (var_s0 < 0x63);
        return 0;
    }
    return -0x18;
}
