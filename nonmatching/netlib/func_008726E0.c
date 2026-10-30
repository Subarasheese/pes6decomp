/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00873EB0(s32 *);                           /* extern */
M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00874040(s32 *, s16 *);                /* extern */
M2C_UNK func_00874120(s32 *, void *);               /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470(s32 *);                       /* extern */

s32 func_008726E0(s32 *arg0, s16 *arg1) {
    s32 var_s0;
    void *temp_s3;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (*arg0 == 0x4201) {
            *arg1 = 0;
            func_001C48E8(arg1 + 2, 0, 0x17C);
            func_00874470(arg0);
            func_00874040(arg0, arg1);
            var_s0 = 0;
loop_10:
            if (var_s0 < 0xA) {
                if (func_00873EB0(arg0) != -1) {
                    temp_s3 = arg1 + (var_s0 * 0x26) + 2;
                    func_00874120(arg0, temp_s3);
                    func_001C48E8(temp_s3 + 4, 0, 0x21);
                    func_00873EE0(arg0, temp_s3 + 4, 0x20);
                    func_00874040(arg0, temp_s3 + 2);
                    var_s0 += 1;
                    goto loop_10;
                }
            }
            func_00874460(arg0);
            return 0;
        }
        return -0x46;
    }
    return -0x18;
}
