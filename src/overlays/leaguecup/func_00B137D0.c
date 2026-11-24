/* compiler: mwcc-3.0.1b210 */
#include "pes6/cup_round_order.h"
#include "pes6/fixture_display.h"

extern u8 func_0022BC60(u8 slot);
extern u16 func_0022BAC0(u8 slot);
extern void func_00B13B50(CupSavedFixture *result, u8 group, u8 row);

void func_00B137D0(void) {
    CupBracketIndex *list = func_0022C1E0();
    CupFixturePage *page = D_003EAD70;
    u8 round;
    CupSavedRound *roundRecord;
    CupSavedFixture *fixture;
    if (!page)
        return;
    round = list->selected;
    roundRecord = func_0022C140(round);
    page->groups[page->groupCount] = page->groups[page->groupCount - 1];
    fixture = func_0022BFF0(round, roundRecord->teamCount - 1);
    page->groups[page->groupCount - 1].selected = page->groups[page->groupCount].selected;
    page->groups[page->groupCount - 1].nameIds[0][0] = fixture->teams[0];
    page->groups[page->groupCount - 1].nameIds[0][1] = fixture->teams[1];
    page->groups[page->groupCount - 1].teamKinds[0][0] =
        func_00225940(func_0022BC60(fixture->teams[0]));
    page->groups[page->groupCount - 1].teamKinds[0][1] =
        func_00225940(func_0022BC60(fixture->teams[1]));
    page->groups[page->groupCount - 1].teamIds[0][0] = func_0022BAC0(fixture->teams[0]);
    page->groups[page->groupCount - 1].teamIds[0][1] = func_0022BAC0(fixture->teams[1]);
    page->groups[page->groupCount - 1].goals[0][0].leg =
        fixture->goals[0][0] + fixture->goals[0][1] + fixture->goals[0][2] + fixture->goals[0][3];
    page->groups[page->groupCount - 1].goals[0][0].extraTime =
        fixture->goals[0][2] + fixture->goals[0][3];
    page->groups[page->groupCount - 1].goals[0][0].penalties = fixture->goals[0][4];
    page->groups[page->groupCount - 1].firstLeg[0][0] = 0;
    page->groups[page->groupCount - 1].aggregate[0][0] =
        page->groups[page->groupCount - 1].goals[0][0].leg;
    page->groups[page->groupCount - 1].goals[0][1].leg =
        fixture->goals[1][0] + fixture->goals[1][1] + fixture->goals[1][2] + fixture->goals[1][3];
    page->groups[page->groupCount - 1].goals[0][1].extraTime =
        fixture->goals[1][2] + fixture->goals[1][3];
    page->groups[page->groupCount - 1].goals[0][1].penalties = fixture->goals[1][4];
    page->groups[page->groupCount - 1].firstLeg[0][1] = 0;
    page->groups[page->groupCount - 1].aggregate[0][1] =
        page->groups[page->groupCount - 1].goals[0][1].leg;
    func_00B13B50(fixture, page->groupCount - 1, 0);
    page->groupCount++;
}
