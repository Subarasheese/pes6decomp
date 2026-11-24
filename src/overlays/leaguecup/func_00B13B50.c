/* compiler: mwcc-3.0.1b210 */
#include "pes6/fixture_display.h"
#include "pes6/cup_round_order.h"

void func_00B13B50(CupSavedFixture *fixture, u8 group, u8 row) {
    CupFixturePage *page = D_003EAD70;
    if (!page)
        return;
    if (page->groups[group].teamIds[row][0] == 0xffff ||
        page->groups[group].teamIds[row][1] == 0xffff) {
        page->groups[group].format[row] = 0;
        return;
    }
    if (fixture->scheduled == 1 && fixture->played == 0) {
        page->groups[group].format[row] = 1;
        return;
    }
    if (fixture->twoLeg == 1 && fixture->returnLeg == 1) {
        if (page->groups[group].flags[row] == 1) {
            if (page->groups[group].goals[row][0].leg != 0)
                page->groups[group].format[row] = 14;
            else
                page->groups[group].format[row] = 15;
        } else if (page->groups[group].goals[row][0].penalties != 0 ||
                   page->groups[group].goals[row][1].penalties != 0) {
            if (page->groups[group].goals[row][0].penalties >
                page->groups[group].goals[row][1].penalties)
                page->groups[group].format[row] = 20;
            else
                page->groups[group].format[row] = 21;
        } else if (page->groups[group].goals[row][0].extraTime != 0 ||
                   page->groups[group].goals[row][1].extraTime != 0) {
            if (page->groups[group].goals[row][0].extraTime +
                    (page->groups[group].firstLeg[row][0] +
                     page->groups[group].goals[row][0].leg) ==
                page->groups[group].goals[row][1].extraTime +
                    (page->groups[group].firstLeg[row][1] +
                     page->groups[group].goals[row][1].leg)) {
                if (page->groups[group].firstLeg[row][0] +
                        2 * (page->groups[group].goals[row][0].leg +
                             page->groups[group].goals[row][0].extraTime) >
                    page->groups[group].goals[row][1].extraTime +
                        (page->groups[group].goals[row][1].leg +
                         2 * page->groups[group].firstLeg[row][1]))
                    page->groups[group].format[row] = 16;
                else
                    page->groups[group].format[row] = 17;
            } else if (page->groups[group].goals[row][0].extraTime >
                       page->groups[group].goals[row][1].extraTime)
                page->groups[group].format[row] = 18;
            else
                page->groups[group].format[row] = 19;
        } else {
            if (page->groups[group].firstLeg[row][0] + page->groups[group].goals[row][0].leg ==
                page->groups[group].firstLeg[row][1] + page->groups[group].goals[row][1].leg) {
                if (page->groups[group].firstLeg[row][0] +
                        2 * page->groups[group].goals[row][0].leg >
                    page->groups[group].goals[row][1].leg +
                        2 * page->groups[group].firstLeg[row][1])
                    page->groups[group].format[row] = 16;
                else
                    page->groups[group].format[row] = 17;
            } else if (page->groups[group].aggregate[row][0] >
                       page->groups[group].aggregate[row][1])
                page->groups[group].format[row] = 14;
            else
                page->groups[group].format[row] = 15;
        }
    } else if (fixture->twoLeg == 1 && fixture->returnLeg == 0) {
        if (page->groups[group].firstLeg[row][0] > page->groups[group].firstLeg[row][1])
            page->groups[group].format[row] = 11;
        else if (page->groups[group].firstLeg[row][0] == page->groups[group].firstLeg[row][1])
            page->groups[group].format[row] = 12;
        else
            page->groups[group].format[row] = 13;
    } else if (page->groups[group].goals[row][0].penalties != 0 ||
               page->groups[group].goals[row][1].penalties != 0) {
        if (page->groups[group].goals[row][0].penalties >
            page->groups[group].goals[row][1].penalties)
            page->groups[group].format[row] = 9;
        else
            page->groups[group].format[row] = 10;
    } else if (page->groups[group].goals[row][0].extraTime != 0 ||
               page->groups[group].goals[row][1].extraTime != 0) {
        if (page->groups[group].goals[row][0].extraTime >
            page->groups[group].goals[row][1].extraTime)
            page->groups[group].format[row] = 7;
        else
            page->groups[group].format[row] = 8;
    } else if (page->groups[group].goals[row][0].leg > page->groups[group].goals[row][1].leg)
        page->groups[group].format[row] = 5;
    else
        page->groups[group].format[row] = 6;
}
