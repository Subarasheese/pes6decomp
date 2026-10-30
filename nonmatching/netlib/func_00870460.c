/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00873EB0(s32 *);                           /* extern */
M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00873F60(s32 *, void *);               /* extern */
M2C_UNK func_00874040(s32 *, void *);               /* extern */
M2C_UNK func_008740E0(s32 *, void *);               /* extern */
M2C_UNK func_00874120(s32 *, void *);               /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_00870460(s32 *arg0, s32 *arg1) {
    s32 var_s0;
    void *temp_s3;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (*arg0 != 0x4602) {
            return -0x46;
        }
        func_00874470();
        var_s0 = *arg1;
loop_8:
        if (var_s0 < 0x32) {
            if (func_00873EB0(arg0) != -1) {
                temp_s3 = arg1 + (var_s0 * 0xC8) + 4;
                func_00873F60(arg0, temp_s3 + 0x7C);
                func_001C48E8(temp_s3 + 0x45, 0, 0x31);
                func_00873EE0(arg0, temp_s3 + 0x45, 0x30);
                func_00874040(arg0, temp_s3 + 0x22);
                func_001C48E8(temp_s3, 0, 0x21);
                func_008740E0(arg0, temp_s3 + 0x21);
                func_001C48E8(temp_s3 + 0x24, 0, 0x21);
                func_00873EE0(arg0, temp_s3 + 0x24, 0x20);
                func_00874120(arg0, temp_s3 + 0x76);
                func_00874120(arg0, temp_s3 + 0x77);
                func_00873F60(arg0, temp_s3 + 0x80);
                func_001C48E8(temp_s3 + 0x84, 0, 0x41);
                func_00873EE0(arg0, temp_s3 + 0x84, 0x40);
                func_00874120(arg0, temp_s3 + 0x78);
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
