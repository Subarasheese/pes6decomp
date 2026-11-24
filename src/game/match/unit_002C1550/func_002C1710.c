/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_event_statistics.h"
s32 func_002C1710(MatchEvent *record) {
    s32 kind = match_event_kind(record);
    s32 result = 0;
    if (kind == 5) {
        s32 player = match_event_player(record);
        if (D_003E9D51 == ((player >> 5) & 1))
            result = 1;
    }
    return result;
}
