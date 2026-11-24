/* compiler: mwcc-3.0.1b210 */
#include "pes6/club_roster.h"
u8 func_00221A60(u16 team) {
    s32 id = team;
    u8 slots;
    if ((id >= 0x40 && id <= 0xcb) || (id == 0x112 || id == 0x113 || id == 0x114 || id == 0x115 ||
                                       id == 0x116 || id == 0x117 || (u32)(id - 0x123) < 5))
        slots = CLUB_SLOTS;
    else
        slots = NATIONAL_SLOTS;
    return slots;
}
