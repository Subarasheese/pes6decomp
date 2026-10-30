/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00825120(M2C_UNK, s32);                    /* extern */
s32 func_00862110(s32, M2C_UNK);                    /* extern */
extern char D_008A4398[];
extern char D_008A4A60[];
extern char D_008A5540[];
extern char D_008A5B20[];

s32 func_00825530(s32 arg0) {
    M2C_UNK var_a0;
    s32 temp_s0;

    temp_s0 = (*(s32 *)D_008A4398);
    if (temp_s0 == 0) {
        (*(s32 *)D_008A4A60) = 0;
        (*(s32 *)D_008A5B20) = 0;
        (*(s32 *)D_008A5540) = 0;
        return 2;
    }
    if (func_00862110(temp_s0, 3) != 1) {
        if (func_00862110(temp_s0, 4) != 1) {
            if (func_00862110(temp_s0, 5) == 1) {
                var_a0 = 5;
                goto block_13;
            }
            (*(s32 *)D_008A4A60) = 0;
            (*(s32 *)D_008A5B20) = 0;
            (*(s32 *)D_008A5540) = 0;
            return 2;
        }
        var_a0 = 4;
        goto block_13;
    }
    var_a0 = 3;
block_13:
    return func_00825120(var_a0, arg0);
}
