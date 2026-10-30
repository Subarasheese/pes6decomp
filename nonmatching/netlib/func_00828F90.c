/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00829D40(M2C_UNK);                         /* extern */
s32 func_00862110(s32, M2C_UNK);                    /* extern */
extern char D_008A4398[];
extern char D_008A4B60[];
extern char D_008A5664[];
extern char D_008A5C44[];

s32 func_00828F90(void) {
    M2C_UNK var_a0;

    if ((*(s32 *)D_008A4398) != 0) {
        if (func_00862110((*(s32 *)D_008A4398), 3) == 1) {
            var_a0 = 3;
            goto block_13;
        }
        if (func_00862110((*(s32 *)D_008A4398), 8) == 1) {
            var_a0 = 8;
            goto block_13;
        }
        if (func_00862110((*(s32 *)D_008A4398), 4) == 1) {
            var_a0 = 4;
            goto block_13;
        }
        if (func_00862110((*(s32 *)D_008A4398), 5) == 1) {
            var_a0 = 5;
block_13:
            return func_00829D40(var_a0);
        }
        (*(s32 *)D_008A4B60) = 0;
        (*(s32 *)D_008A5C44) = 0;
        (*(s32 *)D_008A5664) = 0;
        return 2;
    }
    (*(s32 *)D_008A4B60) = 0;
    (*(s32 *)D_008A5C44) = 0;
    (*(s32 *)D_008A5664) = 0;
    return 2;
}
