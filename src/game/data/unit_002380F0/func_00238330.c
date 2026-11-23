/* compiler: mwcc-3.0.1b210 */
#include "pes6/league_fixture_schedule.h"

static inline s32 leagueGroupForTeam(u8 team) {
    u8 i, slot = 0xff;
    for (i = 0; i < 72; i++) {
        if (team == (u8)func_00229010(i))
            slot = i;
        if (slot != 0xff)
            break;
    }
    if (slot >= 64)
        return 4;
    return (u8)((u32)slot >> 4);
}

s32 func_00238330(s32 team) { return leagueGroupForTeam((u8)team); }
