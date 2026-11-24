/* compiler: mwcc-3.0.1b210 */
#include "pes6/club_roster.h"
extern u8 func_0021EB50(u16 team, s32 mode);

void func_0021EA40(u16 team, u8 value, s32 mode) {
    s32 id = (u16)team;
    if ((id >= CLUB_FIRST && id <= CLUB_LIMIT - 1) || ((u32)(id - SAVED_FIRST) < 2)) {
        Pes6ClubInfo *club = clubInfo(team);
        if (mode == 1) {
            club->value50 = func_0021EB50(team, 1);
            club->value50Edited = 0;
        } else {
            club->value50 = value;
            club->value50Edited = 1;
        }
    }
}
