/* compiler: mwcc-3.0.1b210 */
#include "pes6/club_roster.h"
extern u8 Pes6Team_GetHomeStadium(u16 team, s32 mode);

void func_0021ED50(u16 team, u8 value) {
    s32 id = (u16)team;
    if ((id >= CLUB_FIRST && id <= CLUB_LIMIT - 1) || ((u32)(id - SAVED_FIRST) < 2)) {
        Pes6ClubInfo *club = clubInfo(team);
        u8 old = Pes6Team_GetHomeStadium(team, 1);
        club->homeStadium = value;
        if (old == value)
            club->stadiumEdited = 0;
        else
            club->stadiumEdited = 1;
    }
}
