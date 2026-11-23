/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_event_statistics.h"

u8 func_002C0BA0(MatchEvent *record) {
    u8 result = 0;
    if (match_event_kind(record) == 28) {
        s32 player = match_event_player(record);
        if (D_003E9D51 == ((player >> 5) & 1)) {
            result = func_00C13280(record)->value.bytes[0];
        }
    }
    return result;
}
