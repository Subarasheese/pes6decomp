/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_event_statistics.h"
s32 func_002BFD60(MatchEvent *record) {
    s32 result = 0;
    if (match_event_is_selected_player(record, 10)) {
        const MatchEventDetails *event = func_00C13280(record);
        result = event->subtype == 3 || event->subtype == 5 || event->subtype == 13;
    }
    return result;
}
