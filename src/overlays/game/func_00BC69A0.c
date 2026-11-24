/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_highlights.h"

extern u8 Pes6MatchContext_Half[];
extern s32 Pes6MatchClock_Remaining[];
extern s32 D_00CBD5E0[];

void func_00BC69A0(void) {
    u8 i;
    for (i = 0; i < HIGHLIGHTS; i++) {
        D_00CBD390[(u8)i] = 0;
        reassignRequest(i, HIGHLIGHTS);
    }
    D_00CBD5E0[0] = Pes6MatchClock_Remaining[0] * (Pes6MatchContext_Half[0] + 1);
}
