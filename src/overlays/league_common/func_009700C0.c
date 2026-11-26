/* compiler: mwcc-3.0.1b210 */
#include "pes6/league_roster_available.h"

extern u8 func_00225820(void);
s32 func_009700C0(void) {
    s32 i;
    u8 count, team;
    team = func_00225820();
    i = 0;
    count = 0;
    for (; i < SAVED_SQUAD_SIZE; ++i)
        if (rosterPlayerAvailable(team, (u8)i) == 1)
            ++count;
    return (u8)count >= 16;
}
