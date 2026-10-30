/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082B290(M2C_UNK);                         /* extern */
s32 func_00862110(s32, M2C_UNK);                    /* extern */
extern char D_008A4398[];
extern char D_008A43B0[];

s32 func_0082B810(void) {
    s32 temp_v0;
    s32 var_a1;

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
    return var_a1;
}
