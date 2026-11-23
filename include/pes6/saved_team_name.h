#ifndef PES6_SAVED_TEAM_NAME_H
#define PES6_SAVED_TEAM_NAME_H

#include "pes6/saved_teams.h"
extern u8 D_00591C09[];
extern const char *func_0021E4B0(u16 team, s32 style, s32 flags, u16 fallback);
static inline const char *savedTeamName(u8 slot) {
    u16 id = savedTeamId(slot);
    SavedTeam *team = savedTeamAt(slot);
    const char *name;
    if (!team)
        return 0;
    if (id == 0xffff)
        return 0;
    if (D_00591C09[0] == 14) {
        name = team->name;
    } else if (!team->name[0]) {
        name = func_0021E4B0(id, 0, 0, id);
    } else {
        name = team->name;
    }
    return name;
}

#endif
