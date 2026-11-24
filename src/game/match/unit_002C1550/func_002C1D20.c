/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_stat_report.h"
extern MatchEventPredicate D_003DA450[];
extern u8 D_003E9D50, D_003E9D51, D_003E9D52, D_003E9D53;
extern MatchEvent *func_00C13840(void), *func_00C137F0(void), *func_00C32B50(s32);
extern s32 func_00C131A0(MatchEvent *, MatchEvent *, MatchEventPredicate);
s32 func_002C1D20(s32 first, s32 last, u8 selection, s32 filter) {
    MatchEventPredicate predicate;
    MatchEvent *end;
    MatchEvent *start;
    D_003E9D53 = 0xFF;
    D_003E9D51 = selection;
    predicate = D_003DA450[filter];
    D_003E9D52 = first;
    if ((first & 0xFF) == 0) {
        start = func_00C13840();
    } else {
        start = func_00C32B50(first);
    }
    if ((last & 0xFF) == 0xFF) {
        end = func_00C137F0();
    } else {
        end = func_00C32B50(last);
    }
    return func_00C131A0(start, end, predicate);
}
