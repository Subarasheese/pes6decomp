/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008438F0(M2C_UNK);                         /* extern */
M2C_UNK func_008439C0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00862110(s32, s32);                        /* extern */
s32 func_008622B0(s32);                             /* extern */
M2C_UNK func_00862410(s32);                         /* extern */
extern char D_008A4398[];
extern char D_008A43B0[];

s32 func_00824FD0(void) {
    s32 var_s0;
    s32 var_s1;

    var_s0 = 0;
    if (func_008438F0(2) < 0) {
        if ((*(s32 *)D_008A4398) != 0) {
            var_s1 = 0;
            do {
                if (func_00862110((*(s32 *)D_008A4398), var_s1) != 0) {
                    var_s0 = 1;
                }
                var_s1 += 1;
            } while (var_s1 < 9);
            if (var_s0 == 1) {
                if (func_008622B0((*(s32 *)D_008A4398)) == -0x78) {
                    (*(s8 *)D_008A43B0) = 1;
                }
            } else {
                func_00862410((*(s32 *)D_008A4398));
            }
        }
        func_008439C0(2, 0x3E8);
    }
    return 0;
}
