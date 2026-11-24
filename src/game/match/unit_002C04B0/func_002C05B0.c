/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_event_statistics.h"
extern u32 func_002C5DD0(u32 record);

s32 func_002C05B0(MatchEvent *record) {
    s32 result = 0;
    if (match_event_for_side(record, 11)) {
        result = func_002C5DD0((u32)record) != 0xffffffffu;
    }
    return result;
}
