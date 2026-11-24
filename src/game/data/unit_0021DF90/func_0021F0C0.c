/* compiler: mwcc-3.0.1b210 */
#include "pes6/club_roster.h"

u16 func_0021F0C0(u16 team) {
    Pes6ClubInfo *club = clubInfo(team);
    if (club == 0)
        return 0;
    else
        return club->teamId;
}
