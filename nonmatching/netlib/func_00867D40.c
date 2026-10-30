/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00873EB0(s32 *);                           /* extern */
M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00873F60(s32 *, void *);               /* extern */
M2C_UNK func_00873FD0(s32 *, void *);               /* extern */
M2C_UNK func_00874040(s32 *, void *);               /* extern */
M2C_UNK func_00874120(s32 *, s8 *);                 /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470(s32 *);                       /* extern */

s32 func_00867D40(s32 *arg0, void *arg1, void *arg2) {
    s8 sp5F;
    s32 var_s0;
    void *temp_s3;

    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != NULL)) {
        if (*arg0 == 0x3012) {
            func_001C48E8(arg1, 0, 0x12C);
            func_00874470(arg0);
            func_00873FD0(arg0, arg2);
            var_s0 = 0;
loop_11:
            if (var_s0 < 3) {
                if (func_00873EB0(arg0) != -1) {
                    func_00874120(arg0, &sp5F);
                    temp_s3 = arg1 + (sp5F * 0x64);
                    M2C_FIELD(temp_s3, s8 *, 0x3D) = sp5F;
                    func_00873F60(arg0, temp_s3);
                    func_001C48E8(temp_s3 + 0xC, 0, 0x31);
                    func_00873EE0(arg0, temp_s3 + 0xC, 0x30);
                    func_00873FD0(arg0, temp_s3 + 4);
                    func_00874120(arg0, temp_s3 + 0x61);
                    func_00873F60(arg0, temp_s3 + 8);
                    func_00874040(arg0, temp_s3 + 0x62);
                    func_00874040(arg0, temp_s3 + 0x3E);
                    var_s0 += 1;
                    goto loop_11;
                }
            }
            func_00874460(arg0);
            return 0;
        }
        return -0x46;
    }
    return -0x18;
}
