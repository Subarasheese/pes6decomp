/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00873EB0(s32 *);                           /* extern */
M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00873F60(s32 *, void *);               /* extern */
M2C_UNK func_00874090(s32 *, void *);               /* extern */
M2C_UNK func_00874120(s32 *, void *);               /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_00874E30(s32 *arg0, u16 *arg1) {
    u16 var_s0;
    void *temp_s3;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (*arg0 != 0x9412) {
            return -0x46;
        }
        func_00874470();
        var_s0 = *arg1;
loop_8:
        if ((s32) var_s0 < 0x14) {
            if (func_00873EB0(arg0) != -1) {
                temp_s3 = arg1 + (var_s0 * 0x60) + 4;
                func_00873F60(arg0, temp_s3);
                func_001C48E8(temp_s3 + 0xC, 0, 0x41);
                func_00873EE0(arg0, temp_s3 + 0xC, 0x40);
                func_00873F60(arg0, temp_s3 + 4);
                func_00873F60(arg0, temp_s3 + 8);
                func_00874120(arg0, temp_s3 + 0x4D);
                func_00874090(arg0, temp_s3 + 0x58);
                func_00874090(arg0, temp_s3 + 0x4E);
                func_001C48E8(temp_s3 + 0x50, 0, 6);
                func_00873EE0(arg0, temp_s3 + 0x50, 5);
                func_00874120(arg0, temp_s3 + 0x5A);
                func_00874120(arg0, temp_s3 + 0x5B);
                func_00874120(arg0, temp_s3 + 0x5C);
                func_00874120(arg0, temp_s3 + 0x56);
                var_s0 += 1;
                goto loop_8;
            }
        }
        func_00874460(arg0);
        *arg1 = var_s0;
        return 0;
    }
    return -0x18;
}
