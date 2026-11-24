/* compiler: mwcc-3.0.1b151 */
#pragma no_branch_likely on

#include "pes6/match_event_search.h"

s32 func_00C5B830(MatchEvent *first, MatchEvent *last, u8 player) {
    s32 found = 0;
    s32 packed = (u8)player;
    s32 other = (u8)(((packed >> 5) & 1) ^ 1);
    MatchEvent *record = func_00C5BBC0(first, last, other);
    if (record != NO_EVENT) {
        record = func_002C19F0(record, last, other, 6, 1);
        if (record != NO_EVENT && func_002C6130(record) == NO_EVENT) {
            MatchEvent *candidate = nextListedWithin(record, last);
            if (candidate != NO_EVENT)
                found = packed == match_event_player(candidate);
        }
    }
    return found;
}
