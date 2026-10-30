/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00873EE0(s32 *, s32, M2C_UNK);         /* extern */
M2C_UNK func_00873F60(s32 *, s32);                  /* extern */
M2C_UNK func_00873FD0(s32 *, s32 *);                /* extern */
M2C_UNK func_00874090(s32 *, s32);                  /* extern */
M2C_UNK func_00874120(s32 *, s32);                  /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470(s32 *);                       /* extern */

s32 func_00867810(s32 *arg0, s32 arg1, s32 *arg2) {
    s32 var_s2;
    s32 var_s2_2;

    if ((arg0 != NULL) && (arg1 != 0) && (arg2 != NULL)) {
        if (*arg0 == 0x3052) {
            func_001C48E8(arg1, 0, 0x4C);
            func_00874470(arg0);
            func_00873FD0(arg0, arg2);
            if (*arg2 != 0) {
                func_00874460(arg0);
                return -0x47;
            }
            func_00874120(arg0, arg1 + 0x24);
            func_00873F60(arg0, arg1);
            func_00874120(arg0, arg1 + 0x25);
            func_00873F60(arg0, arg1 + 4);
            func_00873F60(arg0, arg1 + 8);
            func_00873F60(arg0, arg1 + 0xC);
            func_00873F60(arg0, arg1 + 0x3C);
            func_001C48E8(arg1 + 0x26, 0, 0x14);
            func_00873EE0(arg0, arg1 + 0x26, 0x13);
            var_s2 = 0;
            do {
                func_00873F60(arg0, arg1 + (var_s2 * 4) + 0x10);
                var_s2 += 1;
            } while (var_s2 < 5);
            func_00874090(arg0, arg1 + 0x40);
            var_s2_2 = 0;
            do {
                func_00874090(arg0, arg1 + (var_s2_2 * 2) + 0x42);
                var_s2_2 += 1;
            } while (var_s2_2 < 4);
            func_00874460(arg0);
            return 0;
        }
        return -0x46;
    }
    return -0x18;
}
