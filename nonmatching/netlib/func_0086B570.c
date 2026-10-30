/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00873F60(s32 *, s32);                  /* extern */
M2C_UNK func_00873FD0(s32 *, s32 *);                /* extern */
M2C_UNK func_00874040(s32 *, s32);                  /* extern */
M2C_UNK func_00874090(s32 *, s32);                  /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_0086B570(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 temp_s3;
    s32 temp_s3_2;
    s32 var_s0;
    s32 var_s0_2;

    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != 0)) {
        if (*arg0 != 0x60D1) {
            return -0x46;
        }
        func_00874470();
        func_00873FD0(arg0, arg1);
        if (*arg1 == 0) {
            var_s0 = 0;
            do {
                temp_s3 = arg2 + (var_s0 * 0x18);
                func_00873F60(arg0, temp_s3);
                func_00874040(arg0, temp_s3 + 0x10);
                func_00873F60(arg0, temp_s3 + 4);
                func_00874040(arg0, temp_s3 + 8);
                func_00874040(arg0, temp_s3 + 0xA);
                func_00874040(arg0, temp_s3 + 0xC);
                func_00874040(arg0, temp_s3 + 0xE);
                func_00874090(arg0, temp_s3 + 0x14);
                func_00874090(arg0, temp_s3 + 0x12);
                var_s0 += 1;
            } while (var_s0 < 4);
            var_s0_2 = 0;
            do {
                temp_s3_2 = arg2 + (var_s0_2 * 0xC);
                func_00873F60(arg0, temp_s3_2 + 0x60);
                func_00874040(arg0, temp_s3_2 + 0x68);
                func_00873F60(arg0, temp_s3_2 + 0x64);
                var_s0_2 += 1;
            } while (var_s0_2 < 2);
        }
        func_00874460(arg0);
        return 0;
    }
    return -0x18;
}
