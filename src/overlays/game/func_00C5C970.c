/* compiler: mwcc-3.0.1b151 */
#pragma opt_propagation off
#pragma no_branch_likely on

#include "pes6/match_event_search.h"

extern MatchEvent *func_00C13400(MatchEvent *);
extern MatchEvent *func_00C137B0(MatchEvent *record);
extern MatchEvent *func_00C13640(MatchEvent *, const u8 *kinds, s32 count);
extern f32 func_00C18AC0(u16 firstPosition, u16 lastPosition);
extern const u8 D_00CB3450[];
extern const s32 D_00CB3468[];
s32 func_00C5C970(MatchEvent *first, MatchEvent *last, s32 player, s32 (*test)(f32 *)) {
    s32 result = 0;
    s32 packed = (u8)player;
    s32 side = (packed >> 5) & 1;
    MatchEvent *event = lastSideEvent(first, last, side);
    MatchEvent *next = NO_EVENT;
    if (event != NO_EVENT && packed == match_event_player(event)) {
        next = func_00C13400(event);
        if (next != NO_EVENT) {
            MatchEvent *previous = func_00C137B0(next);
            s32 count = D_00CB3468[0];
            next = func_00C13640(previous, D_00CB3450, count);
        }
    }
    if (event != NO_EVENT && next != NO_EVENT) {
        const MatchEventDetails *start = func_00C13280(event);
        const MatchEventDetails *end = func_00C13280(next);
        f32 value = func_00C18AC0(start->value.packedPosition, end->value.packedPosition);
        result = test(&value);
    }
    return result;
}
