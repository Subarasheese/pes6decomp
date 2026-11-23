/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_teams.h"

void func_002258A0(u8 slot, u8 category) {
    SavedTeam *team = savedTeamAt(slot);
    if (Pes6SaveData_IsUnavailable() != 1 && team)
        team->category = category;
}
