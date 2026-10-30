/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00824850();                                /* extern */
s32 func_00826880(M2C_UNK, s32, s32, s32, s64, s32, s32); /* extern */
s32 func_00828160();                                /* extern */
s32 func_008377D0();                                /* extern */
s32 func_00862110(s32, M2C_UNK);                    /* extern */
s32 func_00D0BAF0();                                /* extern */

s32 func_00841BE0(s32 arg0, s32 arg1, s64 arg2, s32 arg3) {
    M2C_UNK var_s0;
    s32 temp_v0;
    s32 var_s5;
    s32 var_v0;

    temp_v0 = func_00D0BAF0();
    if (temp_v0 != 0) {
        if (func_00862110(temp_v0, 3) != 1) {
            if (func_00862110(temp_v0, 4) != 1) {
                if (func_00862110(temp_v0, 5) != 1) {
                    return 2;
                }
                var_s0 = 5;
                goto block_16;
            }
            var_s0 = 4;
            goto block_16;
        }
        var_s0 = 3;
block_16:
        if (((s64) (arg2 << 0x38) >> 0x38) != 0xA) {
            var_v0 = func_00828160();
            goto block_20;
        }
        var_s5 = func_008377D0();
        if (var_s5 == 0) {
            var_v0 = func_00828160();
block_20:
            var_s5 = var_v0;
        }
        return func_00826880(var_s0, func_00824850(), arg0, arg1, arg2, arg3, var_s5);
    }
    return 2;
}
