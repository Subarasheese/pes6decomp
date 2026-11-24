/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_event_buffer.h"

MatchEvent *func_00C135B0(MatchEvent *event, const u8 *kinds, s32 count) {
    if (event != NO_EVENT && kinds) {
        MatchEvent *limit = D_00CBFAA0.entries;
        for (--event; event >= limit; --event) {
            u8 kind = event->kind;
            s32 i = count;
            while (i) {
                --i;
                if (kind == kinds[i])
                    return event;
            }
        }
    }
    return NO_EVENT;
}
