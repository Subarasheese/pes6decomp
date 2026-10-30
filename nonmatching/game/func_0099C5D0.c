/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00592800[];
extern char D_00592940[];
extern char D_00592941[];

void func_0099C5D0(void) {
    M2C_UNK *var_a0;
    M2C_UNK *var_a2;
    s8 var_a1;
    s8 var_a1_2;

    (*(s8 *)D_00592940) = -1;
    var_a1 = 0;
    var_a0 = ((void *)D_00592800);
loop_1:
    if ((M2C_FIELD(var_a0, u8 *, 3) != 0) && (M2C_FIELD(var_a0, u8 *, 1) == 0)) {
        (*(s8 *)D_00592940) = var_a1;
    } else {
        var_a1 += 1;
        var_a0 += 0x28;
        if (var_a1 >= 8) {

        } else {
            goto loop_1;
        }
    }
    var_a1_2 = 0;
    (*(s8 *)D_00592941) = -1;
    var_a2 = ((void *)D_00592800);
loop_7:
    if ((M2C_FIELD(var_a2, u8 *, 3) != 0) && (M2C_FIELD(var_a2, u8 *, 1) == 1)) {
        (*(s8 *)D_00592941) = var_a1_2;
        return;
    }
    var_a1_2 += 1;
    var_a2 += 0x28;
    if (var_a1_2 >= 8) {
        return;
    }
    goto loop_7;
}
