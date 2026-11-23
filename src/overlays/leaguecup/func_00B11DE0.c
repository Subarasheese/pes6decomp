/* compiler: mwcc-3.0.1b210 */
#include "pes6/fixture_display.h"

void func_00B11DE0(u8 group, u8 row, u8 side) {
    CupFixturePage *p = func_00B14800();
    if (p) {
        func_00956A90(p->badges[row][side], 4, p->groups[group].teamIds[row][side], 0);
        if (side == 0) {
            switch (p->mode) {
            case 0:
            case 2:
            case 7:
                func_009737E0(p->names[row][side], 8,
                              func_00225520(p->groups[group].nameIds[row][0]));
                break;
            case 1:
            case 3:
            case 4:
            case 5:
            case 6:
            case 8:
            case 9:
            case 10:
                func_009737E0(p->names[row][side], 8,
                              func_002253B0(p->groups[group].nameIds[row][0]));
                break;
            }
            func_009737E0(p->aggregate[row][side], 13, p->groups[group].aggregate[row][side]);
            func_009737E0(p->extraTime[row][0], 16, p->groups[group].goals[row][side].extraTime);
            func_009737E0(p->singleCaption[row][0], 19,
                          p->groups[group].goals[row][side].extraTime);
            func_009737E0(p->penalties[row][0], 22, p->groups[group].goals[row][side].penalties);
        } else {
            switch (p->mode) {
            case 0:
            case 2:
            case 7:
                func_009737E0(p->names[row][side], 8,
                              func_00225520(p->groups[group].nameIds[row][1]));
                break;
            case 1:
            case 3:
            case 4:
            case 5:
            case 6:
            case 8:
            case 9:
            case 10:
                func_009737E0(p->names[row][side], 7,
                              func_002253B0(p->groups[group].nameIds[row][1]));
                break;
            }
            func_009737E0(p->aggregate[row][side], 15, p->groups[group].aggregate[row][side]);
            func_009737E0(p->extraTime[row][2], 18, p->groups[group].goals[row][side].extraTime);
            func_009737E0(p->singleCaption[row][2], 21,
                          p->groups[group].goals[row][side].extraTime);
            func_009737E0(p->penalties[row][2], 24, p->groups[group].goals[row][side].penalties);
        }
    }
}
