/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591F2C[];
extern char D_00592800[];
extern char D_0059295B[];
extern char D_0059295C[];

void func_00B807B0(void) {
    M2C_UNK *var_a1;
    s32 var_a2;

    if (((*(u8 *)D_00591F2C) != 2) && ((*(u8 *)D_00591F2C) != 1)) {

    } else if ((*(u8 *)D_0059295B) != 0xFF) {

    } else if ((*(u8 *)D_0059295C) != 0xFF) {

    } else {
        var_a2 = 0;
        var_a1 = ((void *)D_00592800);
loop_10:
        if (M2C_FIELD(var_a1, u8 *, 1) == 0xFF) {
            var_a2 += 1;
            var_a1 += 0x28;
            if (var_a2 < 8) {
                goto loop_10;
            }
        }
    }
}
