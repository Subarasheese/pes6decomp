/* compiler: mwcc-3.0.1b210 */
#include "pes6/fixture_display.h"

void func_009B9650(u8 row) {
    LeagueFixturePage *p = func_009BC8E0();
    if (p) {
        func_00956A90(p->badges[row][0], 4, p->teamIds[row][1], 0);
        func_00956A90(p->badges[row][1], 4, p->teamIds[row][0], 0);
        func_009737E0(p->names[row][0], 8, func_00225520(p->nameIds[row][1]));
        func_009737E0(p->names[row][1], 7, func_00225520(p->nameIds[row][0]));
        func_009737E0(p->aggregate[row][0], 13, p->aggregateScores[row][1]);
        func_009737E0(p->aggregate[row][1], 15, p->aggregateScores[row][0]);
        func_009737E0(p->firstLeg[row][0], 9, p->firstLegScores[row][1]);
        func_009737E0(p->firstLeg[row][1], 11, p->firstLegScores[row][0]);
        func_009737E0(p->returnLeg[row][0], 10, p->goals[row][1].leg + p->goals[row][1].extraTime);
        func_009737E0(p->returnLeg[row][1], 12, p->goals[row][0].leg + p->goals[row][0].extraTime);
        func_009737E0(p->extraTime[row][0], 16, p->goals[row][1].extraTime);
        func_009737E0(p->singleCaption[row][0], 19, p->goals[row][1].extraTime);
        func_009737E0(p->penalties[row][0], 22, p->goals[row][1].penalties);
        func_009737E0(p->extraTime[row][2], 18, p->goals[row][0].extraTime);
        func_009737E0(p->singleCaption[row][2], 21, p->goals[row][0].extraTime);
        func_009737E0(p->penalties[row][2], 24, p->goals[row][0].penalties);
        if (p->format[row]) {
            func_0095C4A0(p->teamIds[row][1]);
            func_0095C4A0(p->teamIds[row][0]);
        }
    }
}
