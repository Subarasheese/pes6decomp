/* compiler: mwcc-3.0.1b210 */
#include "pes6/fixture_display.h"

void func_00B11B20(u8 group, u8 row, u8 side) {
    CupFixturePage *p = func_00B14800();
    if (p) {
        func_00956A90(p->badges[row][side], 4, p->groups[group].teamIds[row][1 - side], 0);
        if (side == 0) {
            func_009737E0(p->names[row][side], 8, func_002253B0(p->groups[group].nameIds[row][1]));
            func_009737E0(p->aggregate[row][side], 13, p->groups[group].aggregate[row][1]);
            func_009737E0(p->firstLeg[row][side], 9, p->groups[group].firstLeg[row][1]);
            func_009737E0(p->returnLeg[row][side], 10, p->groups[group].goals[row][1].leg);
            func_009737E0(p->extraTime[row][0], 16, p->groups[group].goals[row][1].extraTime);
            func_009737E0(p->singleCaption[row][0], 19, p->groups[group].goals[row][1].extraTime);
            func_009737E0(p->penalties[row][0], 22, p->groups[group].goals[row][1].penalties);
        } else {
            func_009737E0(p->names[row][side], 7, func_002253B0(p->groups[group].nameIds[row][0]));
            func_009737E0(p->aggregate[row][side], 15, p->groups[group].aggregate[row][0]);
            func_009737E0(p->firstLeg[row][side], 11, p->groups[group].firstLeg[row][0]);
            func_009737E0(p->returnLeg[row][side], 12, p->groups[group].goals[row][0].leg);
            func_009737E0(p->extraTime[row][2], 18, p->groups[group].goals[row][0].extraTime);
            func_009737E0(p->singleCaption[row][2], 21, p->groups[group].goals[row][0].extraTime);
            func_009737E0(p->penalties[row][2], 24, p->groups[group].goals[row][0].penalties);
        }
    }
}
