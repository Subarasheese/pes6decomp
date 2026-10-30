/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_00825640(s32, s32 *);                      /* extern */
s32 func_0082B290();                                /* extern */
s32 func_00862110(s32, s32);                        /* extern */
extern char D_008A4398[];
extern char D_008A43B0[];

s32 func_0082A6F0(s32 arg0, s32 arg1) {
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 temp_v0;
    s32 var_a1;

    if ((*(s32 *)D_008A4398) == 0) {
        return 2;
    }
    temp_v0 = func_0082B290();
    if (temp_v0 == -0x96) {
        var_a1 = 1;
    } else if ((*(s32 *)D_008A4398) == 0) {
        var_a1 = 1;
    } else {
        var_a1 = 1;
        if ((*(s8 *)D_008A43B0) == 1) {

        } else if ((temp_v0 != -0x3E) && (temp_v0 != -0x49)) {
            if (func_00862110((*(s32 *)D_008A4398), arg0) == 0) {
                var_a1 = 1;
            } else {
                var_a1 = 0;
            }
        }
    }
    if (var_a1 == 1) {
        return 2;
    }
    if (arg0 < 0) {
        return 2;
    }
    if (arg0 >= 9) {
        return 2;
    }
    func_001C48E8(&sp30, 0, 0x48);
    sp30 = 0x105;
    sp34 = 4;
    sp38 = arg1;
    return func_00825640(arg0, &sp30);
}
