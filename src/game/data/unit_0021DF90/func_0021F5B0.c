/* compiler: mwcc-3.0.1b210 */
#include "pes6/club_roster.h"

void func_0021F5B0(u16 team, u16 value) {
    Pes6ClubInfo *club = clubInfo(team);
    if (club) {
        if ((u8)value >= 12)
            value = 0;
        club->category = value;
    }
}
