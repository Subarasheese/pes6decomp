/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_event_index.h"

void func_00C32BF0(MatchEvent *record) {
    MatchEventIndex *index = &D_00CCB350;
    if (record != NO_EVENT) {
        s32 minute = func_00C13280(record)->minute;
        if ((minute >> 7) == 0)
            index->minute[minute & 0x7f] = record;
        else
            index->period[func_00C18DC0(minute)] = record;
    }
}
