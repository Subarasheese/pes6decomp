/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(8)
#include "pes6/league_roster_flags.h"
typedef struct {
    u8 team, index;
} LeaguePlayerPosition;
void func_0096FB20(LeaguePlayerPosition *out, u16 playerId) {
    s32 team, index;
    if (!out)
        return;
    out->team = 0xff;
    out->index = 0xff;
    for (team = 0; team < 72; team++)
        for (index = 0; index < SAVED_SQUAD_SIZE; index++)
            if (playerId == func_00224D90((u8)team, (u8)index)) {
                out->team = team;
                out->index = index;
                return;
            }
}
