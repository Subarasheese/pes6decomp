/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00827450(s32);                             /* extern */
M2C_UNK func_0082B4C0(s32);                         /* extern */
M2C_UNK func_0082C690(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0082C840(M2C_UNK);                     /* extern */
s32 func_00841D30();                                /* extern */
s32 func_00862110(s32, s32);                        /* extern */
s32 func_008799F0(s32);                             /* extern */
s32 func_00D0BAF0();                                /* extern */

s32 func_00942F30(s32 arg0) {
    s32 temp_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

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
        if (func_00841D30() != 1) {
            var_v0_3 = func_008799F0(temp_s0 + (arg0 * 0x24));
        } else {
            var_v0_3 = 0;
        }
        if (var_v0_3 != 0) {
            func_0082C840(0x6A);
            func_0082C690(0x6A, 0);
            if (func_00827450(arg0) != 1) {
                var_v0_2 = 2;
            } else {
                var_v0_2 = 3;
            }
            return var_v0_2;
        }
        func_0082C840(0x6A);
        func_0082C690(0x6A, 0);
        if (func_00827450(arg0) != 1) {
            var_v0 = 4;
        } else {
            var_v0 = 3;
        }
        return var_v0;
    }
    return 2;
}
