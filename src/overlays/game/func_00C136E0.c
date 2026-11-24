/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_event_buffer.h"

MatchEvent *func_00C136E0(MatchEvent *event, u8 kind) {
    if (event != NO_EVENT) {
        MatchEvent *limit = D_00CBFAA0.entries;
        for (--event; event >= limit; --event) {
            if (event->kind == kind)
                return event;
        }
    }
    return NO_EVENT;
}
