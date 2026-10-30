/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_001C6158(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_00873EE0(s32 *, s32 *, M2C_UNK);       /* extern */
M2C_UNK func_00873F60(s32 *, s32 *);                /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */
M2C_UNK func_00877690(M2C_UNK, s32);                /* extern */
extern M2C_UNK func_00877740;

s32 func_00877FE0(s32 *arg0, s32 *arg1, s32 *arg2, s32 arg3, s32 *arg4, s8 *arg5, s32 arg6) {
    s32 *temp_a0;
    s32 temp_v1;
    s32 var_s3;

    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != NULL) && (arg3 != 0)) {
        if (*arg0 != 0x5053) {
            return -0x46;
        }
        func_00874470();
        func_00873F60(arg0, arg1);
        func_001C48E8(arg2, 0, 0x31);
        func_00873EE0(arg0, arg2, 0x30);
        func_00874460(arg0);
        var_s3 = 0;
        do {
            temp_v1 = *arg1;
            temp_a0 = arg3 + (var_s3 * 0xC8);
            if ((temp_v1 == *temp_a0) && (temp_v1 != 0)) {
                func_001C48E8(temp_a0, 0, 0xC8);
            }
            var_s3 += 1;
        } while (var_s3 < 0x1E);
        if ((*arg1 == arg6) && (arg6 != 0)) {
            *arg5 = 0;
            *arg4 = 0;
        }
        func_001C6158(arg3, 0x1E, 0xC8, &func_00877740);
        func_00877690(0, arg3);
        return 0;
    }
    return -0x18;
}
