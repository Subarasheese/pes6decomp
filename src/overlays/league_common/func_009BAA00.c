/* compiler: mwcc-3.0.1b210 */
#include "pes6/fixture_display.h"
#include "pes6/cup_round_order.h"

void func_009BAA00(CupSavedFixture *fixture, u8 row) {
    LeagueFixturePage *page = D_003EA9C0;
    if (!page)
        return;
    if (page->teamIds[row][0] == 0xffff || page->teamIds[row][1] == 0xffff)
        page->format[row] = 0;
    else if (fixture->scheduled == 1 && fixture->played == 0)
        page->format[row] = 1;
    else if (page->aggregateScores[row][0] > page->aggregateScores[row][1])
        page->format[row] = 11;
    else if (page->aggregateScores[row][0] == page->aggregateScores[row][1])
        page->format[row] = 12;
    else
        page->format[row] = 13;
}
