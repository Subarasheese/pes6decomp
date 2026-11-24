/* compiler: mwcc-3.0.1b210 */
#include "pes6/league_result_rows.h"

void func_009BAEA0(u8 row) {
    LeagueFixturePage *page = D_003EA9C0;
    LeagueSchedule *r;
    u8 stage;
    if (!page)
        return;
    r = func_00229460();
    stage = D_003E7B0C->stage;
    if (page->teamIds[row][0] == 0xffff || page->teamIds[row][1] == 0xffff)
        page->format[row] = 0;
    else if (r->stages[stage].day <= page->round - 1)
        page->format[row] = 1;
    else if (page->goals[row][0].leg > page->goals[row][1].leg)
        page->format[row] = 2;
    else if (page->goals[row][0].leg == page->goals[row][1].leg)
        page->format[row] = 3;
    else
        page->format[row] = 4;
}
