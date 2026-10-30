/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00873EE0(s32 *, s32, M2C_UNK);         /* extern */
M2C_UNK func_008740E0(s32 *, s32);                  /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_008684C0(s32 *arg0, s32 arg1) {
    s32 temp_s3;
    s32 var_s0;

    if ((arg0 != NULL) && (arg1 != 0)) {
        if (*arg0 != 0x2202) {
            return -0x46;
        }
        func_00874470();
        var_s0 = 0;
        do {
            temp_s3 = arg1 + (var_s0 * 0x83);
            func_001C48E8(temp_s3, 0, 0x83);
            func_008740E0(arg0, temp_s3 + 0x81);
            func_008740E0(arg0, temp_s3 + 0x82);
            func_00873EE0(arg0, temp_s3, 0x80);
            var_s0 += 1;
        } while (var_s0 < 7);
        func_00874460(arg0);
        return 0;
    }
    return -0x18;
}
