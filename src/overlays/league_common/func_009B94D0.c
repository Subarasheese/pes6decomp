/* compiler: mwcc-3.0.1b210 */
#include "pes6/fixture_display.h"

void func_009B94D0(u8 row) {
    LeagueFixturePage *p = func_009BC8E0();
    if (p) {
        func_00956A90(p->simpleBadge[row][0], 4, p->teamIds[row][0], 0);
        func_00956A90(p->simpleBadge[row][1], 4, p->teamIds[row][1], 0);
        func_009737E0(p->simpleNames[row][0], 0, func_00225520(p->nameIds[row][0]));
        if (p->mode == 8)
            func_009737E0(p->simpleNames[row][1], 1, func_0095C4A0(p->teamIds[row][1]));
        else
            func_009737E0(p->simpleNames[row][1], 1, func_00225520(p->nameIds[row][1]));
        func_009737E0(p->simpleScore[row][0], 2, p->aggregateScores[row][0]);
        func_009737E0(p->simpleScore[row][1], 4, p->aggregateScores[row][1]);
        if (p->format[row]) {
            func_0095C4A0(p->teamIds[row][0]);
            func_0095C4A0(p->teamIds[row][1]);
        }
    }
}
