/* compiler: mwcc-3.0.1b210 */
#include "pes6/club_roster.h"
u16 Pes6Team_ResolveSpecialId(u16 id) {
    Pes6MatchTeamData *info = func_00223960(id);
    if ((u32)((u16)id - SAVED_FIRST) < 2 && info)
        id = info->originalTeam;
    return id;
}
