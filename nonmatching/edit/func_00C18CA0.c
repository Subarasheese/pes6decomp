/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */

s32 func_00C18CA0(void *arg0, s32 (*arg1)(s32)) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = M2C_FIELD(arg0, s32 *, 0x2E4);
    var_s0 = M2C_FIELD(arg0, s32 *, 0x2E8);
    if (func_00BCF3A0(0x1000) != 1) {
        if (func_00BCF3A0(0x4000) != 1) {
            if (func_00BCF3A0(0x24) == 1) {
                var_s0 = 1 - var_s0;
            }
            if (var_s0 == 1) {
                if ((func_00BCF3A0(0x80) == 1) && (var_s1 > 0)) {
                    var_s1 -= 1;
                } else if ((func_00BCF3A0(0x400) == 1) && (var_s1 < 2)) {
                    var_s1 += 1;
                }
            }
            if ((var_s1 != M2C_FIELD(arg0, s32 *, 0x2E4)) || (var_s0 != M2C_FIELD(arg0, s32 *, 0x2E8))) {
                M2C_FIELD(arg0, s32 *, 0x2E4) = var_s1;
                M2C_FIELD(arg0, s32 *, 0x2E8) = var_s0;
                func_0026E840(0x8400F802);
            }
            goto block_30;
        }
        func_0026E840(0x84008401);
        if (M2C_FIELD(arg0, s32 *, 0x2E8) != 0) {
            M2C_FIELD(arg0, s32 *, 0x2E8) = 0;
            goto block_30;
        }
        return 2;
    }
    if (M2C_FIELD(arg0, s32 *, 0x2E8) != 0) {
        if ((M2C_FIELD(arg0, s32 *, 0x2E4) == 2) && (arg1(M2C_FIELD(arg0, s32 *, 0)) == 0)) {
            func_0026E840(0x8C008005);
block_30:
            return 0;
        }
        func_0026E840(0x84028400);
        return 1;
    }
    func_0026E840(0x84028400);
    return 2;
}
