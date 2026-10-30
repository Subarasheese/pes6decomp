/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_00825640(M2C_UNK, s32 *);                  /* extern */
s32 func_0082B290(M2C_UNK);                         /* extern */
s32 func_00840680(s32);                             /* extern */
s32 func_00840C80();                                /* extern */
s32 func_00862110(s32, M2C_UNK);                    /* extern */
extern char D_008A4398[];
extern char D_008A43B0[];

s32 func_0082A430(void) {
    s32 sp20;
    s32 sp24;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_a1;

    temp_s0 = (*(s32 *)D_008A4398);
    if ((func_00840680(func_00840C80()) & 0xFF) != 1) {
        return 4;
    }
    if (temp_s0 == 0) {
        return 2;
    }
    if (func_00862110(temp_s0, 3) != 1) {
        return 2;
    }
    if ((*(s32 *)D_008A4398) == 0) {
        return 2;
    }
    temp_v0 = func_0082B290(3);
    if (temp_v0 == -0x96) {
        var_a1 = 1;
    } else if ((*(s32 *)D_008A4398) == 0) {
        var_a1 = 1;
    } else {
        var_a1 = 1;
        if ((*(s8 *)D_008A43B0) == 1) {

        } else if ((temp_v0 != -0x3E) && (temp_v0 != -0x49)) {
            if (func_00862110((*(s32 *)D_008A4398), 3) == 0) {
                var_a1 = 1;
            } else {
                var_a1 = 0;
            }
        }
    }
    if (var_a1 == 1) {
        return 2;
    }
    func_001C48E8(&sp20, 0, 0x48);
    sp20 = 0x120;
    sp24 = 0;
    return func_00825640(3, &sp20);
}
