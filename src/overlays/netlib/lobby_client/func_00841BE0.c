/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00824850();
s32 func_00826880(M2C_UNK, s32, s32, s32, s64, s32, s32);
s32 func_00828160();
s32 func_008377D0();
s32 func_00862110(s32, M2C_UNK);
s32 func_00D0BAF0();

s32 func_00841BE0(s32 arg0, s32 arg1, s64 arg2, s32 arg3) {
    M2C_UNK var_s0;
    s32 temp_v0;
    s32 var_s5;

    temp_v0 = func_00D0BAF0();
    if (temp_v0 == 0) {
        return 2;
    }
    if (func_00862110(temp_v0, 3) == 1) {
        var_s0 = 3;
    } else if (func_00862110(temp_v0, 4) == 1) {
        var_s0 = 4;
    } else if (func_00862110(temp_v0, 5) == 1) {
        var_s0 = 5;
    } else {
        return 2;
    }
    if (((s64) (arg2 << 0x38) >> 0x38) != 0xA) {
        var_s5 = func_00828160();
    } else {
        var_s5 = func_008377D0();
        if (var_s5 == 0) {
            var_s5 = func_00828160();
        }
    }
    return func_00826880(var_s0, func_00824850(), arg0, arg1, arg2, arg3, var_s5);
}
