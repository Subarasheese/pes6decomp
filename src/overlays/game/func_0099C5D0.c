/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00592800[];
extern char D_00592940[];
extern char D_00592941[];

void func_0099C5D0(void) {
    u8 *var_a0;
    u8 *var_a2;
    s32 var_a1;
    s32 var_a1_2;

    (*(u8 *)D_00592940) = 0xFF;
    var_a1 = 0;
    var_a0 = (u8 *)D_00592800;
loop_1:
    if ((var_a0[3] != 0) && (var_a0[1] == 0)) {
        (*(u8 *)D_00592940) = var_a1;
    } else {
        var_a1 += 1;
        var_a0 += 0x28;
        if (var_a1 >= 8) {

        } else {
            goto loop_1;
        }
    }
    var_a1_2 = 0;
    (*(u8 *)D_00592941) = 0xFF;
    var_a2 = (u8 *)D_00592800;
loop_7:
    if ((var_a2[3] != 0) && (var_a2[1] == 1)) {
        (*(u8 *)D_00592941) = var_a1_2;
        return;
    }
    var_a1_2 += 1;
    var_a2 += 0x28;
    if (var_a1_2 >= 8) {
        return;
    }
    goto loop_7;
}
