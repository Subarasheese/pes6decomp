/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 Pes6Team_GetPlayerId(s32, s32, s32);
extern void Pes6MatchSetup_FillSquads(s32, u16);
extern char D_00510FD0[];
extern char Pes6MatchLineups[];
extern u16 D_00591BB0[];

void Pes6MatchSetup_BuildLineups(void) {
    u16 *var_v0;
    u16 var_a1;
    s32 var_a0;
    s32 var_s1;
    s32 var_s2;
    u16 *var_s0;

    var_s0 = D_00591BB0;
    for (var_s2 = 0; var_s2 < 2; var_s2++) {
        for (var_s1 = 0; var_s1 < 0x20; var_s1++) {
            if ((*(s32 *)D_00510FD0) == 0xC) {
                var_a1 = Pes6Team_GetPlayerId((s32) *var_s0, var_s1 & 0xFF, 2) & 0xFFFF;
            } else {
                var_a1 = Pes6Team_GetPlayerId((s32) *var_s0, var_s1 & 0xFF, 0) & 0xFFFF;
            }
            var_a0 = (var_s2 & 1) << 6;
            var_v0 = ((var_s1 % 32) * 2) + (((char *)Pes6MatchLineups) + var_a0);
            *var_v0 = var_a1;
        }
        var_s0 += 1;
    }
    Pes6MatchSetup_FillSquads(var_a0, var_a1);
}
