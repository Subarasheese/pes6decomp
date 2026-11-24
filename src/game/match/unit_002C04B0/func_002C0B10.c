/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_event_statistics.h"
extern s32 func_00C12C80(u8 kind);
s32 func_002C0B10(MatchEvent *record) {
    s32 result = 0;
    if (func_00C12C80(func_00C132C0((u8 *)record))) {
        int player = match_event_player(record);
        if (D_003E9D51 == ((player >> 5) & 1)) {
            result = (func_00C13280(record)->flags & 3) == 2;
        }
    }
    return result;
}
