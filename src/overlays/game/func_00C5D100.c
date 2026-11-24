/* compiler: mwcc-3.0.1b151 */
#pragma no_branch_likely on

#include "pes6/match_event_search.h"

u8 func_00C5D100(MatchEvent *first, MatchEvent *last, s32 side) {
    u8 result = 0xff;
    MatchEvent *event = lastSideEvent(first, last, side);
    if (event != NO_EVENT)
        result = match_event_player(event);
    return result;
}
