/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_event_statistics.h"
s32 func_002BEDD0(MatchEvent *record) {
    s32 result = 0;
    if (match_event_is_selected_player(record, 11)) {
        const MatchEventDetails *event = func_00C13280(record);
        result = (event->flags & 0x10) || (event->flags & 0x20);
    }
    return result;
}
