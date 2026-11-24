/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(8)
#include "pes6/league_result_rows.h"

void func_009BC230(void) {
    LeagueFixturePage *page = D_003EA9C0;
    LeagueSchedule *league;
    u8 stage, groups, group, match, home, away;
    if (!page)
        return;
    league = func_00229460();
    stage = D_003E7B0C->stage;
    groups = func_00983E20(D_003E7B0C->division);
    page->entries = league->stages[stage].pairs * groups;
    group = func_00229A70();
    if ((u8)func_00238330(func_00225820()) == 4)
        group = 4;
    page->roundType = league->stages[stage].rounds;
    func_00983E70(D_003E7B0C->division);
    for (match = 0; match < league->stages[stage].pairs; match++) {
        home = func_00234870(page->round - 1, match, 0, group);
        away = func_00234870(page->round - 1, match, 1, group);
        fillLeagueFixtureTeams(page, match, home, away);
    }
}
