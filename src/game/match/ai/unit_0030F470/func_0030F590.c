/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char Pes6MatchPlayers[];
extern char D_0058E5C3[];
extern char D_00591EE8[];

f32 func_0030F590(s32 index) {
    s32 temp_a2;
    s32 slot;
    s32 var_v1;
    s32 var_v1_2;

    temp_a2 = index & 0xFF;
    if (temp_a2 != 0xFF) {
        var_v1 = temp_a2 % 23;
    } else {
        var_v1 = 1;
    }
    if (*(((u8 *)D_00591EE8) + *(((u8 *)D_0058E5C3) + (var_v1 * 0x240))) != 0xFF) {
        if (temp_a2 != 0xFF) {
            var_v1_2 = temp_a2 % 23;
        } else {
            var_v1_2 = 1;
        }
        slot = (s32) *(((u8 *)D_00591EE8) + *(((u8 *)D_0058E5C3) + (var_v1_2 * 0x240))) % 23;
    }
    else { slot = 1; }
    return M2C_FIELD((((u8 *)Pes6MatchPlayers) + (slot * 0x240)), f32 *, 0xE0);
}
