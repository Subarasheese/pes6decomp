/* compiler: mwcc-3.0.1b210 */
#include "pes6/fixture_display.h"

extern CupFixturePage *D_003EAD70;

void func_00B14740(void) {
    CupFixturePage *p = D_003EAD70;
    s32 group, row, side;
    if (p) {
        for (group = 0; group < 10; ++group) {
            for (row = 0; row < 8; ++row) {
                for (side = 0; side < 2; ++side) {
                    p->groups[group].goals[row][side].leg = 0;
                    p->groups[group].goals[row][side].extraTime = 0;
                    p->groups[group].goals[row][side].penalties = 0;
                    p->groups[group].firstLeg[row][side] = 0;
                    p->groups[group].aggregate[row][side] = 0;
                    p->groups[group].nameIds[row][side] = 0xFF;
                    p->groups[group].teamIds[row][side] = 0xFFFF;
                }
                p->groups[group].selected = 0;
                p->groups[group].flags[row] = 0;
            }
        }
        p->activeGroup = 0;
    }
}
