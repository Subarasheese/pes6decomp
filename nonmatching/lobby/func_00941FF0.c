/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00827450(s32);                             /* extern */
M2C_UNK func_0082B4C0(s32);                         /* extern */
s32 func_0082C2A0();                                /* extern */
M2C_UNK func_0082C650(M2C_UNK);                     /* extern */
M2C_UNK func_0082C840(M2C_UNK);                     /* extern */
M2C_UNK func_0082C920(M2C_UNK);                     /* extern */
s32 func_00836E20();                                /* extern */
s32 func_00862110(s32, s32);                        /* extern */
s32 func_0086A280(s32);                             /* extern */

s32 func_00941FF0(void) {
    s32 temp_s1;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;

    temp_s1 = func_0082C2A0();
    temp_v0 = func_00836E20();
    func_0082B4C0(temp_v0);
    if ((temp_v0 != 3) && (temp_v0 != 5)) {
        func_0082C920(0x81);
        func_0082C840(0x8F);
        func_0082C650(0x8F);
        return 2;
    }
    if (temp_s1 == 0) {
        func_0082C920(0x81);
        func_0082C840(0x8F);
        func_0082C650(0x8F);
        return 2;
    }
    if (temp_v0 >= 0) {
        if (temp_v0 < 9) {
            if (func_00862110(temp_s1, temp_v0) != 1) {
                if (func_00827450(temp_v0) != 1) {
                    return 2;
                }
                return 3;
            }
            if (func_0086A280(temp_s1 + (temp_v0 * 0x24)) != 0) {
                func_0082C840(0x8F);
                if (func_00827450(temp_v0) != 1) {
                    var_v0_2 = 2;
                } else {
                    var_v0_2 = 3;
                }
                return var_v0_2;
            }
            func_0082C840(0x8F);
            if (func_00827450(temp_v0) != 1) {
                var_v0 = 4;
            } else {
                var_v0 = 3;
            }
            return var_v0;
        }
        goto block_9;
    }
block_9:
    func_0082C920(0x81);
    func_0082C840(0x8F);
    func_0082C650(0x8F);
    return 2;
}
