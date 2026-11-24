/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_event_index.h"

void func_00C32AD0(MatchEvent *record) {
    MatchEventIndex *index = &D_00CCB350;
    if (record != NO_EVENT) {
        /* A side-indexed event carries its side in the minute byte. */
        s32 side = func_00C13280(record)->minute;
        u16 *used = &index->sideCount[side];
        u16 count = *used;
        if (count < 32) {
            index->sideEvent[side][count] = record;
            ++*used;
        }
    }
}
