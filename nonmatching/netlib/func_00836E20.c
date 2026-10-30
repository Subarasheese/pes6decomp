/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
s32 func_00862110(s32, M2C_UNK);                    /* extern */

s32 func_00836E20(void) {
    s32 temp_v0;
    s32 var_s1;

    var_s1 = 9;
    temp_v0 = func_0082C2A0();
    if (temp_v0 != 0) {
        if (func_00862110(temp_v0, 4) != 1) {
            if (func_00862110(temp_v0, 3) != 1) {
                if (func_00862110(temp_v0, 8) != 1) {
                    if (func_00862110(temp_v0, 5) == 1) {
                        var_s1 = 5;
                    }
                } else {
                    var_s1 = 8;
                }
            } else {
                var_s1 = 3;
            }
        } else {
            var_s1 = 4;
        }
    }
    return var_s1;
}
