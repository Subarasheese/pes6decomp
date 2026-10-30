/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0086A8E0(void *);                      /* extern */
M2C_UNK func_00873F60(s32 *, s32 *);                /* extern */
M2C_UNK func_008740E0(s32 *, u8 *);                 /* extern */
M2C_UNK func_00874120(s32 *, s8 *);                 /* extern */
M2C_UNK func_00874460(s32 *, s32);                  /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_00869A30(s32 *arg0, void *arg1) {
    s32 sp48;
    u8 sp4C;
    u8 sp4D;
    u8 sp4E;
    s8 sp4F;
    s32 var_a1;
    s32 var_s0;
    void *temp_v1;

    sp48 = 0;
    sp4F = 0;
    sp4E = 0;
    sp4D = 0;
    sp4C = 0;
    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (*arg0 != 0x60A2) {
            return -0x46;
        }
        func_00874470();
        func_00874120(arg0, arg1 + 0x8EB);
        var_s0 = 0;
        do {
            func_00873F60(arg0, &sp48);
            func_00874120(arg0, &sp4F);
            func_008740E0(arg0, &sp4E);
            func_008740E0(arg0, &sp4D);
            func_008740E0(arg0, &sp4C);
            var_a1 = 0;
loop_7:
            temp_v1 = arg1 + (var_a1 * 0x10);
            if ((sp48 == M2C_FIELD(temp_v1, s32 *, 0x7C0)) && (sp48 != 0)) {
                M2C_FIELD(temp_v1, s8 *, 0x7C8) = sp4F;
                M2C_FIELD(temp_v1, u8 *, 0x7C9) = sp4E;
                M2C_FIELD(temp_v1, u8 *, 0x7CA) = sp4D;
                M2C_FIELD(temp_v1, u8 *, 0x7CB) = sp4C;
                M2C_FIELD(arg1, s32 *, 0x888) = (s32) sp4F;
            }
            var_a1 += 1;
            if (var_a1 < 4) {
                goto loop_7;
            }
            var_s0 += 1;
        } while (var_s0 < 2);
        func_00874460(arg0, var_a1);
        func_0086A8E0(arg1);
        M2C_FIELD(arg1, s32 *, 0x804) = 0;
        M2C_FIELD(arg1, s32 *, 0x874) = 1;
        return 0;
    }
    return -0x18;
}
