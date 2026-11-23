/* compiler: mwcc-3.0.1b210 */
#pragma no_branch_likely on
#include "pes6/match_event_record.h"
extern MatchEvent *func_00C5BBC0(MatchEvent *, MatchEvent *, s32);
extern MatchEvent *func_002C19F0(MatchEvent *, MatchEvent *, s32, s32, s32);
extern MatchEvent *func_002C6130(MatchEvent *);
extern s32 func_002C4960(MatchEvent *, s32);
s32 func_00C5B9F0(MatchEvent *first, MatchEvent *last, s32 player) {
    s32 match = 0;
    s32 otherSide = ((((player & 255) >> 5) & 1) ^ 1) & 255;
    MatchEvent *event = func_00C5BBC0(first, last, otherSide);
    if (event != NO_EVENT) {
        MatchEvent *next = func_002C19F0(event, last, otherSide, 6, 1);
        if (next != NO_EVENT && func_002C6130(next) != NO_EVENT)
            match = func_002C4960(last, player) == 0;
    }
    return match;
}
