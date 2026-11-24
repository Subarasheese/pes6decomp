/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_event_statistics.h"
typedef s32 (*EventFilter)(u32 record);
extern u8 D_003E9D53;
extern u32 func_00C13840(void), func_00C137F0(void);
extern u32 func_00C32B50(s32 minute);
extern u32 func_00C12FD0(u32 first, u32 limit, EventFilter predicate, u32 count);
extern EventFilter D_003DA450[];
u32 func_002C1B30(s32 firstMinute, s32 lastMinute, u8 selection, s32 filter, u32 occurrence) {
    u32 first, last;
    EventFilter predicate;
    D_003E9D53 = 0xff;
    predicate = D_003DA450[filter];
    D_003E9D51 = selection;
    D_003E9D52 = firstMinute;
    first = (u8)firstMinute == 0 ? func_00C13840() : func_00C32B50(firstMinute);
    last = (u8)lastMinute == 0xff ? func_00C137F0() : func_00C32B50(lastMinute);
    return func_00C12FD0(first, last, predicate, occurrence);
}
