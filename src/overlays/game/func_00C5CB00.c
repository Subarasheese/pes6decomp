/* compiler: mwcc-3.0.1b151 */
#pragma no_branch_likely on

#include "pes6/match_event_search.h"

typedef struct {
    MatchEventDetails common;
    u8 parameter06;
    u8 parameter07;
} MatchEventParameters;
s32 func_00C5CB00(MatchEvent *first, MatchEvent *last, s32 player, s32 (*test)(f32 *)) {
    s32 result = 0;
    s32 packed = (u8)player;
    s32 side = (packed >> 5) & 1;
    MatchEvent *event = lastSideEvent(first, last, side);
    if (event != NO_EVENT && packed == match_event_player(event)) {
        f32 value = (f32)(u32)((const MatchEventParameters *)func_00C13280(event))->parameter07;
        result = test(&value);
    }
    return result;
}
