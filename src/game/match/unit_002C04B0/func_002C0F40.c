/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_event_statistics.h"

s32 func_002C0F40(MatchEvent *record) {
    s32 result = 0;
    int selected = 0;
    if (match_event_kind(record) == 10) {
        s32 player = match_event_player(record);
        if (D_003E9D51 == ((player >> 5) & 1))
            selected = 1;
    }
    if (selected) {
        result = (func_00C13280(record)->flags & 3) == 3;
    }
    return result;
}
