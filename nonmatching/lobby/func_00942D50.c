/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00827450(s32);                             /* extern */
M2C_UNK func_0082B4C0(s32);                         /* extern */
M2C_UNK func_0082C690(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0082C840(M2C_UNK);                     /* extern */
s32 func_00862110(s32, s32);                        /* extern */
s32 func_008791E0(s32, s32);                        /* extern */
s32 func_00D0BAF0();                                /* extern */

s32 func_00942D50(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_v0;
    s32 var_v0_2;

    temp_s0 = func_00D0BAF0();
    func_0082B4C0(arg0);
    if (temp_s0 == 0) {
        return 2;
    }
    if (arg0 < 0) {
        return 2;
    }
    if (arg0 < 9) {
        if (func_00862110(temp_s0, arg0) != 1) {
            if (func_00827450(arg0) != 1) {
                return 2;
            }
            return 3;
        }
        if (func_008791E0(temp_s0 + (arg0 * 0x24), arg1) != 0) {
            func_0082C840(0x75);
            func_0082C690(0x75, 0);
            func_0082C840(0x77);
            func_0082C690(0x77, 0);
            func_0082C840(0x78);
            func_0082C690(0x78, 0);
            if (func_00827450(arg0) != 1) {
                var_v0_2 = 2;
            } else {
                var_v0_2 = 3;
            }
            return var_v0_2;
        }
        func_0082C840(0x75);
        func_0082C690(0x75, 0);
        func_0082C840(0x77);
        func_0082C690(0x77, 0);
        func_0082C840(0x78);
        func_0082C690(0x78, 0);
        if (func_00827450(arg0) != 1) {
            var_v0 = 4;
        } else {
            var_v0 = 3;
        }
        return var_v0;
    }
    return 2;
}
