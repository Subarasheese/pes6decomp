/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_event_statistics.h"

s32 func_002C0650(MatchEvent *record) {
    s32 result = 0;
    if (match_event_for_side(record, 11)) {
        u8 value = func_00C13280(record)->flags;
        result = (value & 16) != 0 || (value & 32) != 0;
    }
    return result;
}
