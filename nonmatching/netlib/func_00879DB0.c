/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00873EB0(s32 *);                           /* extern */
M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00873F60(s32 *, void *);               /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_00879DB0(s32 *arg0, s32 arg1, void *arg2) {
    s32 var_s0;
    void *temp_s3;

    if ((arg0 != NULL) && (arg1 != 0) && (arg2 != NULL)) {
        if (*arg0 != 0x503C) {
            return -0x46;
        }
        func_00874470();
        var_s0 = M2C_FIELD(arg2, s32 *, 0x780);
loop_9:
        if (var_s0 < 0x1E) {
            if (func_00873EB0(arg0) != -1) {
                temp_s3 = arg2 + (var_s0 << 6);
                func_00873F60(arg0, temp_s3);
                func_00873F60(arg0, temp_s3 + 4);
                func_001C48E8(temp_s3 + 0xC, 0, 0x31);
                func_00873EE0(arg0, temp_s3 + 0xC, 0x30);
                func_00873F60(arg0, temp_s3 + 8);
                var_s0 += 1;
                goto loop_9;
            }
        }
        func_00874460(arg0);
        M2C_FIELD(arg2, s32 *, 0x780) = var_s0;
        return 0;
    }
    return -0x18;
}
