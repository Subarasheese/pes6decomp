/* compiler: mwcc-3.0.1b210 */
#include "pes6/club_roster.h"
extern u32 D_00538590[], D_003A97C0[];

u32 func_0021E940(u16 team) {
    s32 id = (u16)team;
    u32 resource = 0x03000000;
    Pes6MatchTeamData *data;
    if ((id >= 0 && id <= 56) || (id >= 57 && id <= 63) || (id >= 204 && id <= 220) ||
        (id >= 254 && id <= 269) || (id >= 272 && id <= 273)) {
        resource = D_003A97C0[D_00538590[(u16)team]];
    } else if ((u32)(id - SAVED_FIRST) < 2) {
        data = func_00237530(team);
        if ((u32)(data->originalTeam - 0x126) < 2)
            resource = 0x3000000;
        else
            resource = func_0021E940(data->originalTeam);
    }
    return resource;
}
