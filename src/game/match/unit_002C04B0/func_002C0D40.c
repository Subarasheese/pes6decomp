/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_event_statistics.h"

s32 func_002C0D40(MatchEvent *record) {
    s32 result = 0;
    u8 kind = match_event_kind(record);
    if (kind == 7 || kind == 8) {
        s32 player = match_event_player(record);
        if (D_003E9D51 == ((player >> 5) & 1)) {
            result = (func_00C13280(record)->flags & 4) != 0;
        }
    }
    return result;
}
