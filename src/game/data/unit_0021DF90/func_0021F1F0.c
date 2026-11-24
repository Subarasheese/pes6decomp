/* compiler: mwcc-3.0.1b210 */
#include "pes6/club_roster.h"

void func_0021F1F0(u16 team, u8 value) {
    Pes6ClubInfo *club = clubInfo(team);
    if (club)
        club->nameChanged = value;
}
