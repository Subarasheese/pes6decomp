/* compiler: mwcc-3.0.1b198-O3 */
#include "pes6/club_roster.h"
static inline u16 savedTeamIdentity(u16 team) {
    Pes6ClubInfo *club = clubInfo(team);
    if (club == 0)
        return 0;
    else
        return club->teamId;
}
u16 func_0021E2F0(u16 team) {
    if ((u32)((u16)team - 0x126) < 2) {
        team = (u16)savedTeamIdentity(team);
    }
    return team;
}
