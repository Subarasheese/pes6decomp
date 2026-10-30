/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00825610();                                /* extern */
s32 func_00827450(s32);                             /* extern */
M2C_UNK func_0082B4C0(s32);                         /* extern */
M2C_UNK func_0082C840(M2C_UNK);                     /* extern */
s32 func_00862110(s32, s32);                        /* extern */
s32 func_00868FD0(s32);                             /* extern */
s32 func_0086D720(s32);                             /* extern */
s32 func_00D0BAF0();                                /* extern */

s32 func_0083CAA0(s32 arg0) {
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
        if (func_00825610() != 5) {
            var_v0_3 = func_0086D720(temp_s0 + (arg0 * 0x24));
        } else {
            var_v0_3 = func_00868FD0(temp_s0 + (arg0 * 0x24));
        }
        if (var_v0_3 != 0) {
            func_0082C840(0x2A);
            if (func_00827450(arg0) != 1) {
                var_v0_2 = 2;
            } else {
                var_v0_2 = 3;
            }
            return var_v0_2;
        }
        func_0082C840(0x2A);
        if (func_00827450(arg0) != 1) {
            var_v0 = 4;
        } else {
            var_v0 = 3;
        }
        return var_v0;
    }
    return 2;
}
