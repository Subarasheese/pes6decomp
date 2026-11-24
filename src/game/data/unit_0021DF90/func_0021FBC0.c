/* compiler: mwcc-3.0.1b210 */
#include "pes6/club_roster.h"

Pes6TeamFormation *func_0021FBC0(u16 team) {
    Pes6TeamFormation *formation = 0;
    s32 id = (u16)team;
    if (id >= 0 && id < 0xcc)
        formation = func_00223AC0();
    else if ((u32)(id - SAVED_FIRST) < 2) {
        formation = &func_00223960(team)->formation;
        team = 0;
    }
    if (formation) {
        formation += (u16)team;
    }
    return formation;
}
