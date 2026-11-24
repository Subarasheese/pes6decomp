/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_event_statistics.h"
extern MatchEvent *func_00C13840(void);
extern u32 func_00C137B0(u32 record);
extern s32 func_00C12A40(const u8 *record);
MatchEvent *func_002C6060(MatchEvent *record) {
    MatchEvent *result = NO_EVENT;
    if (record != NO_EVENT && match_event_kind(record) == 3) {
        u8 player = func_00C13280(record)->flags;
        MatchEvent *first = func_00C13840();
        if (player != 0xff) {
            while (first < record) {
                record = (MatchEvent *)func_00C137B0((u32)record);
                if (func_00C12A40((const u8 *)record))
                    break;
                if (player == match_event_player(record)) {
                    result = record;
                    break;
                }
            }
        }
    }
    return result;
}
