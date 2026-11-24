/* compiler: mwcc-3.0.1b210 */
#include "pes6/club_roster.h"

void func_0021F660(u16 team, s32 value) {
    s32 id = (u16)team;
    if ((id >= CLUB_FIRST && id <= CLUB_LIMIT - 1) || (u32)(id - SAVED_FIRST) < 2) {
        Pes6ClubInfo *club = clubInfo(team);
        club->label40 = value;
    }
}
