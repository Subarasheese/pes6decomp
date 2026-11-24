/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_stat_report.h"
s32 func_00C131A0(MatchEvent *first, MatchEvent *last, MatchEventPredicate accepts) {
    s32 count = 0;
    MatchEvent *current;
    if (accepts && first != NO_EVENT && last != NO_EVENT) {
        for (current = first; current < last; ++current)
            count += accepts(current) != 0;
    }
    return count;
}