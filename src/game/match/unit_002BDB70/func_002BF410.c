/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_event_statistics.h"
extern s32 func_00C12C80(u8);
extern s32 func_00C12CC0(u8);
extern u32 func_00C137B0(u32);
extern MatchEvent *func_00C13840(void);

s32 func_002BF410(MatchEvent *record) {
    s32 result = 0, selected = 0;
    if (func_00C12C80(func_00C132C0((u8 *)record)) && (func_00C13280(record)->flags & 3) == 3)
        selected = D_003E9D50 == func_00C132B0((u8 *)record);
    if (selected) {
        MatchEvent *previous = NO_EVENT;
        if (record != NO_EVENT && func_00C12C80(func_00C132C0((u8 *)record)) &&
            (func_00C13280(record)->flags & 3) == 3) {
            MatchEvent *first = func_00C13840();
            while (record > first) {
                record = (MatchEvent *)func_00C137B0((u32)record);
                if (func_00C12CC0(func_00C132C0((u8 *)record))) {
                    previous = record;
                    break;
                }
            }
        }
        if (previous != NO_EVENT)
            result = func_00C132C0((u8 *)previous) == 7;
    }
    return result;
}
