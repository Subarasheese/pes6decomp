/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_event_statistics.h"
extern MatchEvent *func_002C6060(MatchEvent *record);
s32 func_002C0CB0(MatchEvent *record) {
    s32 result = 0;
    u8 kind = match_event_kind(record);
    if (kind == 3) {
        u8 flags = func_00C13280(record)->flags;
        if (flags == D_003E9D50) {
            MatchEvent *previous = func_002C6060(record);
            u8 player = match_event_player(previous);
            result = D_003E9D51 == ((player >> 5) & 1);
        }
    }
    return result;
}
