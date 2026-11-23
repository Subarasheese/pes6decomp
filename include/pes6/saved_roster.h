#ifndef PES6_SAVED_ROSTER_H
#define PES6_SAVED_ROSTER_H
#include "pes6/saved_teams.h"
extern SavedTeam *func_002260F0(u8 slot);
extern u16 func_00225680(u8 slot);
static inline u8 savedLineupPosition(u8 slot, u8 index) {
    SavedTeam *team = func_002260F0(slot);
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xff;
    if (!team)
        return 0xff;
    if (index >= SAVED_SQUAD_SIZE)
        return 0xff;
    return team->lineup[index];
}
static inline SavedTeamPlayer *savedPlayerAt(u8 slot, u8 index) {
    SavedTeam *team = func_002260F0(slot);
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (!team)
        return 0;
    if (index >= SAVED_SQUAD_SIZE)
        return 0;
    return &team->players[index];
}
#endif
