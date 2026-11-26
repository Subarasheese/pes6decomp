#ifndef PES6_LEAGUE_ROSTER_AVAILABLE_H
#define PES6_LEAGUE_ROSTER_AVAILABLE_H

#include "pes6/league_roster_flags.h"

extern s32 func_00970200(u8 team, u8 index, s32 restrictMode);
extern s32 func_00930C30(u16 playerId, u8 team);

#ifdef LEAGUE_ROSTER_AVAILABLE_ENTRY
s32 func_00970190(u8 team, u8 index)
#else
static inline s32 rosterPlayerAvailable(u8 team, u8 index)
#endif
{
    if (func_00970200(team, index, 0) == 1) {
        u16 id = func_00224D90(team, index);
        if ((u8)func_00930C30(id, team) > 0)
            return 0;
    } else {
        return 0;
    }
    return 1;
}

#endif
