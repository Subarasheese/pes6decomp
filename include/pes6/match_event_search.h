#ifndef PES6_MATCH_EVENT_SEARCH_H
#define PES6_MATCH_EVENT_SEARCH_H

#include "pes6/match_event_statistics.h"
extern MatchEvent *func_00C5BAB0(MatchEvent *, MatchEvent *, s32);
extern MatchEvent *func_00C5BBC0(MatchEvent *, MatchEvent *, s32);
extern MatchEvent *func_002C19F0(MatchEvent *first, MatchEvent *last, s32 side, s32 index,
                                 s32 occurrence);
extern MatchEvent *func_002C6130(MatchEvent *record);
extern MatchEvent *func_00C13640(MatchEvent *record, const u8 *kinds, s32 count);
extern const u8 D_00CB4A40[];
static inline MatchEvent *nextListedWithin(MatchEvent *record, MatchEvent *last) {
    MatchEvent *candidate = NO_EVENT;
    if (record != NO_EVENT && last != NO_EVENT) {
        candidate = func_00C13640(record, D_00CB4A40, 3);
        if (last < candidate)
            candidate = NO_EVENT;
    }
    return candidate;
}
extern MatchEvent *func_002C18C0(MatchEvent *first, MatchEvent *last, s32 side, s32 filter);
extern MatchEvent *func_00C13390(MatchEvent *record);
static inline MatchEvent *lastSideEvent(MatchEvent *first, MatchEvent *last, s32 side) {
    MatchEvent *event;
    if (first != NO_EVENT && last != NO_EVENT) {
        event = func_002C18C0(first, last, side, 6);
        if (event != NO_EVENT) {
            event = func_00C13390(event);
            if (event != NO_EVENT && event > first && match_event_kind(event) == 11) {
                s32 player = match_event_player(event);
                if ((u8)side == ((player >> 5) & 1))
                    return event;
            }
        }
    }
    return NO_EVENT;
}

#endif
