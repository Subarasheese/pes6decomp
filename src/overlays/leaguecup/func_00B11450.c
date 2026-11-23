/* compiler: mwcc-3.0.1b210 */
#include "pes6/fixture_display.h"

void func_00B11450(u8 group, u8 row) {
    CupFixturePage *p = func_00B14800();
    if (!p)
        return;
    {
        u8 side;
        func_009737C0(p->extraTime[row][0], 0);
        func_009737C0(p->singleCaption[row][0], 0);
        func_009737C0(p->penalties[row][0], 0);
        func_009737C0(p->extraTime[row][1], 0);
        func_009737C0(p->singleCaption[row][1], 0);
        func_009737C0(p->penalties[row][1], 0);
        func_009737C0(p->extraTime[row][2], 0);
        func_009737C0(p->singleCaption[row][2], 0);
        func_009737C0(p->penalties[row][2], 0);
        for (side = 0; side < 2; ++side) {
            func_00956A80(p->badges[row][side], 1);
            func_009737C0(p->names[row][side], 1);
            func_009737C0(p->separator[row], 1);
            func_009737C0(p->aggregate[row][side], 0);
            func_009737C0(p->firstLeg[row][side], 0);
            func_009737C0(p->returnLeg[row][side], 0);
            switch (p->groups[group].format[row]) {
            case 11:
            case 12:
            case 13:
                func_009737C0(p->aggregate[row][side], 1);
                func_009737C0(p->firstLeg[row][side], 1);
                break;
            case 14:
            case 15:
                func_009737C0(p->aggregate[row][side], 1);
                func_009737C0(p->firstLeg[row][side], 1);
                func_009737C0(p->returnLeg[row][side], 1);
                break;
            case 16:
            case 17:
                func_009737C0(p->aggregate[row][side], 1);
                func_009737C0(p->firstLeg[row][side], 1);
                func_009737C0(p->returnLeg[row][side], 1);
                if (p->groups[group].goals[row][0].extraTime != 0 ||
                    p->groups[group].goals[row][1].extraTime != 0) {
                    func_009737C0(p->separator[row], 0);
                    setFixtureCaption(p->extraTime[row], 1, 1, 17, 0x1A00A7);
                    setFixtureCaption(p->penalties[row], 0, 0, 23, 0x1A00A8);
                } else {
                    func_009737C0(p->separator[row], 0);
                    func_009737C0(p->singleCaption[row][1], 1);
                    func_009737E0(p->singleCaption[row][1], 20, func_001F08B0(0x1A00A8));
                }
                break;
            case 18:
            case 19:
                func_009737C0(p->aggregate[row][side], 1);
                func_009737C0(p->firstLeg[row][side], 1);
                func_009737C0(p->returnLeg[row][side], 1);
                func_009737C0(p->separator[row], 0);
                setFixtureCaption(p->extraTime[row], 1, 1, 17, 0x1A00A7);
                setFixtureCaption(p->penalties[row], 0, 0, 23, 0x1A00A8);
                break;
            case 20:
            case 21:
                func_009737C0(p->aggregate[row][side], 1);
                func_009737C0(p->firstLeg[row][side], 1);
                func_009737C0(p->returnLeg[row][side], 1);
                func_009737C0(p->separator[row], 0);
                setFixtureCaption(p->extraTime[row], 1, 1, 17, 0x1A00A7);
                setFixtureCaption(p->penalties[row], 1, 1, 23, 0x1A0039);
                break;
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                func_009737C0(p->aggregate[row][side], 1);
                break;
            case 7:
            case 8:
                func_009737C0(p->aggregate[row][side], 1);
                func_009737C0(p->separator[row], 0);
                setFixtureCaption(p->singleCaption[row], 1, 1, 20, 0x1A00A7);
                break;
            case 9:
            case 10:
                func_009737C0(p->aggregate[row][side], 1);
                func_009737C0(p->separator[row], 0);
                setFixtureCaption(p->extraTime[row], 1, 1, 17, 0x1A00A7);
                setFixtureCaption(p->penalties[row], 1, 1, 23, 0x1A0039);
                break;
            case 0:
                func_00956A80(p->badges[row][side], 0);
                func_009737C0(p->names[row][side], 0);
                break;
            }
        }
    }
}
