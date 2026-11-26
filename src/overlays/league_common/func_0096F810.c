/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(8)
#include "pes6/league_roster_flags.h"
#include "pes6/competition_records.h"
extern s32 func_002307F0(void), func_00238480(void);
extern KnockoutRound *func_0022C140(u8 round);
s32 func_0096F810(u16 playerId) {
    s32 team;
    s32 count = 0;
    if (func_00230410() == 1)
        count = 72;
    else if ((u8)func_002307F0() != 1)
        count = func_00238480();
    else {
        KnockoutRound *round = func_0022C140(0);
        if (round)
            count = round->sizeCode;
    }
    for (team = 0; team < count; team++) {
        if (findRosterPlayer(playerId, (u8)team) != 0xff)
            return (u8)team;
    }
    return 0xff;
}
