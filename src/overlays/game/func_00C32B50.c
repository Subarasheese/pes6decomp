/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_event_index.h"

MatchEvent *func_00C32B50(s32 time) {
    MatchEventIndex *index = &D_00CCB350;
    s32 minute = (u8)time;
    MatchEvent *entry;
    if (minute != 0xff) {
        if ((minute >> 7) == 0)
            entry = index->minute[minute & 0x7f];
        else
            entry = index->period[func_00C18DC0(time)];
        if (entry == NO_EVENT)
            entry = func_00C137F0();
    } else
        entry = func_00C137F0();
    return entry;
}
