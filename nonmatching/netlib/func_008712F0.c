/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00873EB0(s32 *);                           /* extern */
M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00873F60(s32 *, void *);               /* extern */
M2C_UNK func_008740E0(s32 *, void *);               /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_008712F0(s32 *arg0, void *arg1) {
    s32 var_s0;
    void *temp_s3;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (*arg0 != 0x3084) {
            return -0x46;
        }
        func_00874470();
        var_s0 = M2C_FIELD(arg1, s32 *, 8);
loop_13:
        if (var_s0 < 0x46) {
            if (func_00873EB0(arg0) != -1) {
                temp_s3 = arg1 + (var_s0 * 0x38) + 0xC;
                func_00873F60(arg0, temp_s3);
                func_008740E0(arg0, temp_s3 + 4);
                func_001C48E8(temp_s3 + 5, 0, 0x31);
                func_00873EE0(arg0, temp_s3 + 5, 0x30);
                if (M2C_FIELD(temp_s3, u8 *, 4) != 0) {
                    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) + 1);
                } else {
                    M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) + 1);
                }
                var_s0 += 1;
                goto loop_13;
            }
        }
        func_00874460(arg0);
        M2C_FIELD(arg1, s32 *, 8) = var_s0;
        return 0;
    }
    return -0x18;
}
