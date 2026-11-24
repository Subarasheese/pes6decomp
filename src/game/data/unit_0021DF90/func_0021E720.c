/* compiler: mwcc-3.0.1b210 */
#include "pes6/club_roster.h"

const char *func_0021E720(Pes6ClubInfo *club, s32 kind) {
    if (!club)
        return 0;
    switch (kind) {
    case 1:
        return club->shortName;
    default:
        return club->name;
    }
}
