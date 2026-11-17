/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char Pes6MatchPlayers[];
extern char D_00591E01[];
extern char D_00591E57[];
extern char D_00591F24[];

u8 func_00BD0950(void) {
    char *var_a6;
    s32 var_a7;
    s32 var_v1;
    s32 var_v1_2;
    u8 *var_a1;
    u8 temp_v0;

    if ((*(u8 *)D_00591E57) == 0xFF) {
        var_v1 = 1;
    } else {
        var_v1 = (s32) (*(u8 *)D_00591E57) % 23;
    }
    var_a1 = (u8 *)(Pes6MatchPlayers + var_v1 * 0x240);
    if ((*(u8 *)D_00591F24) != 6) {
        if ((*(u8 *)D_00591E57) == 0xFF) {
            var_v1_2 = 1;
        } else {
            var_v1_2 = (s32) (*(u8 *)D_00591E57) % 23;
        }
        var_a6 = D_00591E01;
        for (var_a7 = 1; var_a7 < 3; var_a7++, var_a6++) {
            temp_v0 = *(u8 *)(var_a6 + 0x64);
            if (temp_v0 != 0xFF) {
                var_a1 = (u8 *)(Pes6MatchPlayers + ((s32) temp_v0 % 23) * 0x240);
                if (var_a1[0x13] != *(u8 *)(Pes6MatchPlayers + var_v1_2 * 0x240 + 0x13)) {
                    break;
                }
            }
        }
    }
    return *var_a1;
}
