/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_event_statistics.h"
#include "pes6/match_event_buffer.h"
MatchEventDetails *func_00C13280(MatchEvent *record) {
    if (record != NO_EVENT)
        return (MatchEventDetails *)(&D_00CBFAA0.data[record->stamp]);
    return 0;
}
