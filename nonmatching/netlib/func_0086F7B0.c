/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(u32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_00873EE0(s32 *, u32 *, M2C_UNK);       /* extern */
M2C_UNK func_00873F60(s32 *, u32 *);                /* extern */
M2C_UNK func_00874040(s32 *, u32 *);                /* extern */
M2C_UNK func_00874120(s32 *, void *);               /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_0086F7B0(s32 *arg0, u32 *arg1, s32 arg2) {
    u32 sp5C;
    s32 var_s3;
    void *temp_s2;

    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != 0)) {
        if (*arg0 != 0x4322) {
            return -0x46;
        }
        func_00874470();
        func_00873F60(arg0, arg1);
        func_001C48E8(arg1 + 4, 0, 0x31);
        func_00873EE0(arg0, arg1 + 4, 0x30);
        func_00874120(arg0, arg1 + 0x35);
        func_00873F60(arg0, arg1 + 0x150);
        func_00874040(arg0, arg1 + 0x36);
        func_00874040(arg0, arg1 + 0x38);
        func_00874040(arg0, arg1 + 0x3A);
        func_00874040(arg0, arg1 + 0x3C);
        func_00874040(arg0, arg1 + 0x3E);
        func_00874040(arg0, arg1 + 0x40);
        func_00874040(arg0, arg1 + 0x42);
        func_00873F60(arg0, arg1 + 0x154);
        func_00873F60(arg0, arg1 + 0x158);
        func_00874040(arg0, arg1 + 0x44);
        func_00873F60(arg0, &sp5C);
        M2C_FIELD(arg1, s16 *, 0x46) = (s16) sp5C;
        M2C_FIELD(arg1, s16 *, 0x48) = (s16) (sp5C >> 0x10);
        func_00873F60(arg0, arg1 + 0x15C);
        var_s3 = 0;
        do {
            temp_s2 = arg1 + (var_s3 * 8);
            func_00874040(arg0, temp_s2 + 0x1A6);
            func_00874040(arg0, temp_s2 + 0x1A8);
            func_00874040(arg0, temp_s2 + 0x1AA);
            var_s3 += 1;
        } while (var_s3 < 5);
        func_00874120(arg0, arg1 + 0x1A2);
        func_00874120(arg0, arg1 + 0x14B);
        func_00874120(arg0, arg1 + 0x196);
        func_00874460(arg0);
        return 0;
    }
    return -0x18;
}
