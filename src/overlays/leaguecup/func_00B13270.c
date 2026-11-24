/* compiler: mwcc-3.0.1b210 */
#include "pes6/fixture_display.h"

#include "pes6/league_fixture_schedule.h"

extern s32 func_00233EF0(u8 team, u8 match);
extern s32 func_00230490(void);

void func_00B13270(u8 group, u8 row) {
    CupFixturePage *page = D_003EAD70;
    LeagueSchedule *league;
    u8 home;
    if (!page)
        return;
    league = func_00229460();
    home = page->groups[group].nameIds[row][0];
    if (page->groups[group].teamIds[row][0] == 0xffff ||
        page->groups[group].teamIds[row][1] == 0xffff)
        page->groups[group].format[row] = 0;
    else if (!func_00233EF0(home, page->groups[group].selected - 1) && !func_00230490())
        page->groups[group].format[row] = 1;
    else if (league->stages[0].day < page->groups[group].selected && func_00230490() == 1)
        page->groups[group].format[row] = 1;
    else if (page->groups[group].goals[row][0].leg > page->groups[group].goals[row][1].leg)
        page->groups[group].format[row] = 2;
    else if (page->groups[group].goals[row][0].leg == page->groups[group].goals[row][1].leg)
        page->groups[group].format[row] = 3;
    else
        page->groups[group].format[row] = 4;
}
