/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_event_index.h"

MatchEvent *func_00C32A60(MatchEvent *limit, s32 side) {
    MatchEventIndex *index = &D_00CCB350;
    s32 count = index->sideCount[(u8)side];
    MatchEvent *previous = NO_EVENT;
    if (limit != NO_EVENT) {
        s32 i;
        for (i = 0; i < count; ++i) {
            MatchEvent *event = index->sideEvent[(u8)side][i];
            if (event > limit)
                return previous;
            previous = event;
        }
    }
    return previous;
}
