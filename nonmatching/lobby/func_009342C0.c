/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0082C2A0();                                /* extern */
M2C_UNK func_0082C690(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0082C840(M2C_UNK);                     /* extern */
M2C_UNK func_0082C920(M2C_UNK);                     /* extern */
s32 func_00862110(s32, M2C_UNK);                    /* extern */
s32 func_00936260(M2C_UNK, s32, s32);               /* extern */

s32 func_009342C0(s32 arg0, s32 arg1) {
    M2C_UNK var_a0;
    s32 temp_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != 0) {
        if (func_00862110(temp_v0, 3) != 1) {
            if (func_00862110(temp_v0, 8) != 1) {
                if (func_00862110(temp_v0, 4) != 1) {
                    if (func_00862110(temp_v0, 5) != 1) {
                        func_0082C920(0x9F);
                        func_0082C840(0xAE);
                        func_0082C690(0xAE, 0);
                        return 2;
                    }
                    var_a0 = 5;
                    goto block_21;
                }
                var_a0 = 4;
                goto block_21;
            }
            var_a0 = 8;
            goto block_21;
        }
        var_a0 = 3;
block_21:
        return func_00936260(var_a0, arg0, arg1);
    }
    func_0082C920(0x9F);
    func_0082C840(0xAE);
    func_0082C690(0xAE, 0);
    return 2;
}
