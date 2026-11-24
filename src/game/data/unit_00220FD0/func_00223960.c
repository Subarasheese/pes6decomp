/* compiler: mwcc-3.0.1b210 */
#include "pes6/club_roster.h"
extern Pes6MatchTeamData *D_003A8898[], *D_003A889C[];
Pes6MatchTeamData *func_00223960(u16 team) {
    u16 id = (u16)team;
    if (id == SAVED_FIRST)
        return D_003A8898[0];
    if (id == SAVED_FIRST + 1)
        return D_003A889C[0];
    return 0;
}
