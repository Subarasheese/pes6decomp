/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00827450(s32);                             /* extern */
M2C_UNK func_0082B4C0(s32);                         /* extern */
s32 func_0082C2A0();                                /* extern */
M2C_UNK func_0082C650(M2C_UNK);                     /* extern */
M2C_UNK func_0082C840(M2C_UNK);                     /* extern */
M2C_UNK func_0082C920(M2C_UNK);                     /* extern */
s32 func_00862110(s32, s32);                        /* extern */
s32 func_0086AF00(s32);                             /* extern */

s32 func_00956410(s32 arg0) {
    s32 temp_s0;
    s32 var_v0;
    s32 var_v0_2;

    temp_s0 = func_0082C2A0();
    func_0082B4C0(arg0);
    if ((arg0 != 4) && (arg0 != 5)) {
        func_0082C920(0x56);
        func_0082C840(0x5A);
        func_0082C650(0x5A);
        func_0082C840(0x59);
        func_0082C650(0x59);
        return 2;
    }
    if (temp_s0 == 0) {
        func_0082C920(0x56);
        func_0082C840(0x5A);
        func_0082C650(0x5A);
        func_0082C840(0x59);
        func_0082C650(0x59);
        return 2;
    }
    if (arg0 >= 0) {
        if (arg0 < 9) {
            if (func_00862110(temp_s0, arg0) != 1) {
                if (func_00827450(arg0) != 1) {
                    return 2;
                }
                return 3;
            }
            if (func_0086AF00(temp_s0 + (arg0 * 0x24)) != 0) {
                func_0082C840(0x5A);
                if (func_00827450(arg0) != 1) {
                    var_v0_2 = 2;
                } else {
                    var_v0_2 = 3;
                }
                return var_v0_2;
            }
            func_0082C840(0x5A);
            if (func_00827450(arg0) != 1) {
                var_v0 = 4;
            } else {
                var_v0 = 3;
            }
            return var_v0;
        }
        goto block_9;
    }
block_9:
    func_0082C920(0x56);
    func_0082C840(0x5A);
    func_0082C650(0x5A);
    func_0082C840(0x59);
    func_0082C650(0x59);
    return 2;
}
