/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00873EB0(s32 *);                           /* extern */
s32 func_00873FD0(s32 *, s32);                      /* extern */
M2C_UNK func_00874040(s32 *, void *);               /* extern */
M2C_UNK func_008740E0(s32 *, u8 *);                 /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470(s32 *);                       /* extern */

s32 func_00867670(s32 *arg0, s32 arg1, s32 arg2) {
    u8 sp5F;
    s32 var_a0;
    s32 var_s0;
    u8 *temp_s3;
    void *temp_v1;

    if ((arg0 != NULL) && (arg1 != 0) && (arg2 != 0)) {
        if (*arg0 != 0x3062) {
            return -0x46;
        }
        var_a0 = 0;
        do {
            temp_v1 = arg1 + (var_a0 * 8);
            var_a0 += 1;
            M2C_FIELD(temp_v1, s8 *, 0) = 0;
            M2C_FIELD(temp_v1, s16 *, 2) = 0;
            M2C_FIELD(temp_v1, s16 *, 4) = 0;
            M2C_FIELD(temp_v1, s16 *, 6) = 0;
        } while (var_a0 < 5);
        func_00874470(arg0);
        if (func_00873FD0(arg0, arg2) != 0) {
            func_00874460(arg0);
        } else {
            var_s0 = 0;
loop_14:
            if (var_s0 < 2) {
                if (func_00873EB0(arg0) != -1) {
                    func_008740E0(arg0, &sp5F);
                    temp_s3 = arg1 + (sp5F * 8);
                    *temp_s3 = sp5F;
                    func_00874040(arg0, temp_s3 + 2);
                    func_00874040(arg0, temp_s3 + 4);
                    var_s0 += 1;
                    goto loop_14;
                }
            }
            func_00874460(arg0);
        }
        return 0;
    }
    return -0x18;
}
