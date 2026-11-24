/* compiler: mwcc-3.0.1b198-O3 */
#include "pes6/club_roster.h"
extern u8 D_00538460[];
extern u16 Pes6Team_ResolveSpecialId(u16 team);
u8 func_0021EB50(u16 team, s32 mode) {
    s32 id = (u16)team;
    u8 result;
    if ((id >= 0 && id <= 56) || (id >= 57 && id <= 63) || (id >= 204 && id <= 220) ||
        (id >= 254 && id <= 269) || (id >= 272 && id <= 273)) {
        result = D_00538460[(u16)team];
    } else if (id >= CLUB_FIRST && id < CLUB_LIMIT) {
        if (!mode) {
            result = clubInfo((u16)team)->value50;
        } else {
            result = D_00538460[(u16)team];
        }
    } else if ((u32)(id - SAVED_FIRST) < 2) {
        if (!mode) {
            result = clubInfo((u16)team)->value50;
        } else {
            result = func_0021EB50((s32)(u16)Pes6Team_ResolveSpecialId(team), 1);
        }
    } else if (id < 0x128) {
        result = D_00538460[(u16)team];
    } else {
        result = 0xff;
    }
    return result;
}
