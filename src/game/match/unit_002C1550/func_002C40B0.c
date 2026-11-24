/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_event_statistics.h"
typedef s32 (*EventFilter)(u32 address);
extern EventFilter D_003DA450[];
extern u8 D_003E9D53;
extern u32 func_00C13840(void), func_00C137F0(void);
extern u32 func_00C12FD0(u32 start, u32 end, EventFilter filter, u32 occurrence);
extern void func_002C4140(u8 *out, MatchEvent *entry);
void func_002C40B0(u8 *out, u8 side, u32 occurrence) {
    if (out) {
        u32 first, last, match;
        D_003E9D51 = side;
        D_003E9D53 = 0xff;
        D_003E9D52 = 0;
        first = func_00C13840();
        last = func_00C137F0();
        match = func_00C12FD0(first, last, D_003DA450[0], occurrence);
        if (match != (u32)-1)
            func_002C4140(out, (MatchEvent *)match);
    }
}
