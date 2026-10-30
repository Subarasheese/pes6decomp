/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00873EB0(s32 *);                           /* extern */
M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00873FD0(s32 *, void *);               /* extern */
M2C_UNK func_00874040(s32 *, void *);               /* extern */
M2C_UNK func_00874090(s32 *, void *);               /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_00868990(s32 *arg0, s32 *arg1) {
    s32 var_s0;
    void *temp_s3;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (*arg0 != 0x2003) {
            return -0x46;
        }
        func_00874470();
        var_s0 = *arg1;
loop_8:
        if (var_s0 < 0xC8) {
            if (func_00873EB0(arg0) != -1) {
                temp_s3 = arg1 + (var_s0 << 6) + 4;
                func_00873FD0(arg0, temp_s3);
                func_00873FD0(arg0, temp_s3 + 4);
                func_001C48E8(temp_s3 + 8, 0, 0x21);
                func_00873EE0(arg0, temp_s3 + 8, 0x20);
                func_001C48E8(temp_s3 + 0x2C, 0, 0x10);
                func_00873EE0(arg0, temp_s3 + 0x2C, 0xF);
                func_00874040(arg0, temp_s3 + 0x2A);
                func_00874090(arg0, temp_s3 + 0x3C);
                func_00874040(arg0, temp_s3 + 0x3E);
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
