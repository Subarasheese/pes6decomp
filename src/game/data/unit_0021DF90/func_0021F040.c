/* compiler: mwcc-3.0.1b210 */
#include "pes6/club_roster.h"

u8 func_0021F040(u16 team) {
    Pes6ClubInfo *club = clubInfo(team);
    return club->homeStadium;
}
