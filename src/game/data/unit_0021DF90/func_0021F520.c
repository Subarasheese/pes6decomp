/* compiler: mwcc-3.0.1b210 */
#include "pes6/club_roster.h"

s32 func_0021F520(u16 team) {
    Pes6ClubInfo *club = clubInfo(team);
    s32 category = 0;
    if (club)
        category = club->category;
    return category;
}
