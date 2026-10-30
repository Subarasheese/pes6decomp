/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082A0C0(s32, s32);
s32 func_00862110(void *, M2C_UNK);                 /* extern */
extern void *D_008A4398;
extern char D_008A4B50[];
extern char D_008A5658[];
extern char D_008A5C38[];

s32 func_008291D0(void) {
    s32 temp_s0;
    s32 var_a0;

    if (D_008A4398 != NULL) {
        temp_s0 = M2C_FIELD(D_008A4398, s32 *, 0x49E8);
        if (func_00862110(D_008A4398, 3) == 1) {
            var_a0 = 3;
            goto block_15;
        }
        if (func_00862110(D_008A4398, 8) == 1) {
            var_a0 = 8;
            goto block_15;
        }
        if (func_00862110(D_008A4398, 4) == 1) {
            var_a0 = 4;
            goto block_15;
        }
        if (func_00862110(D_008A4398, 5) != 1) {
            (*(s32 *)D_008A4B50) = 0;
            (*(s32 *)D_008A5C38) = 0;
            (*(s32 *)D_008A5658) = 0;
            return 1;
        }
        var_a0 = 5;
block_15:
        return func_0082A0C0(var_a0, temp_s0);
    }
    (*(s32 *)D_008A4B50) = 0;
    (*(s32 *)D_008A5C38) = 0;
    (*(s32 *)D_008A5658) = 0;
    return 2;
}
