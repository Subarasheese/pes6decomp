/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_stat_report.h"
MatchEvent *func_00C13110(MatchEvent *first, MatchEvent *last, MatchEventPredicate accepts) {
    MatchEvent *cursor;
    if (accepts && first != NO_EVENT && last != NO_EVENT) {
        cursor = first;
        while (cursor < last) {
            if (accepts(cursor))
                return cursor;
            ++cursor;
        }
    }
    return NO_EVENT;
}
