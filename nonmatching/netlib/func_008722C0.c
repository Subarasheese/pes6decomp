/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00873EB0(s32 *);                           /* extern */
M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00873F60(s32 *, void *);               /* extern */
M2C_UNK func_00874040(s32 *, void *);               /* extern */
M2C_UNK func_00874090(s32 *, void *);               /* extern */
M2C_UNK func_00874120(s32 *, void *);               /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470(s32 *);                       /* extern */

s32 func_008722C0(s32 *arg0, u16 *arg1) {
    u16 var_s0;
    void *temp_s3;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (*arg0 != 0x4212) {
            return -0x46;
        }
        if ((s32) *arg1 < 0) {
            *arg1 = 0;
        }
        if ((s32) *arg1 >= 0x65) {
            *arg1 = 0x64;
        }
        var_s0 = *arg1;
        func_00874470(arg0);
loop_13:
        if ((s32) var_s0 < 0x64) {
            if (func_00873EB0(arg0) != -1) {
                temp_s3 = arg1 + (var_s0 * 0x84) + 4;
                func_00873F60(arg0, temp_s3 + 0x34);
                func_001C48E8(temp_s3, 0, 0x31);
                func_00873EE0(arg0, temp_s3, 0x30);
                func_00873F60(arg0, temp_s3 + 0x40);
                func_001C48E8(temp_s3 + 0x4C, 0, 0x31);
                func_00873EE0(arg0, temp_s3 + 0x4C, 0x30);
                func_00874120(arg0, temp_s3 + 0x7D);
                func_00874120(arg0, temp_s3 + 0x31);
                func_00873F60(arg0, temp_s3 + 0x38);
                func_00873F60(arg0, temp_s3 + 0x3C);
                func_00874090(arg0, temp_s3 + 0x4A);
                func_00874040(arg0, temp_s3 + 0x7E);
                func_00874040(arg0, temp_s3 + 0x44);
                func_00874040(arg0, temp_s3 + 0x46);
                func_00874040(arg0, temp_s3 + 0x48);
                func_00874120(arg0, temp_s3 + 0x80);
                func_00874120(arg0, temp_s3 + 0x32);
                func_00874120(arg0, temp_s3 + 0x81);
                var_s0 += 1;
                goto loop_13;
            }
        }
        func_00874460(arg0);
        *arg1 = var_s0;
        if ((s32) *arg1 < 0) {
            *arg1 = 0;
        }
        if ((s32) *arg1 >= 0x65) {
            *arg1 = 0x64;
        }
        return 0;
    }
    return -0x18;
}
