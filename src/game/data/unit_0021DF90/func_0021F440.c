/* compiler: mwcc-3.0.1b210 */
#include "pes6/club_roster.h"
extern u32 D_00539000[];

u32 *func_0021F440(u16 team, s32 side) {
    Pes6ClubInfo *club = clubInfo(team);
    if (!club)
        return &D_00539000[(u16)team];
    return &club->sideData[side & 1];
}
