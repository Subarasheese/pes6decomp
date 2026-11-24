/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(8)
#include "pes6/league_result_rows.h"

void func_009BBD80(void) {
    LeagueFixturePage *page = D_003EA9C0;
    LeagueSchedule *league;
    u8 stage, groups, group, start, match, home, away, row = 0;
    if (!page)
        return;
    league = func_00229460();
    stage = D_003E7B0C->stage;
    groups = func_00983E20(D_003E7B0C->division);
    page->entries = league->stages[stage].pairs * groups;
    page->roundType = league->stages[stage].rounds;
    start = func_00983E70(D_003E7B0C->division);
    for (group = 0; group < groups; group++) {
        for (match = 0; match < league->stages[stage].pairs && row < 10;) {
            home = func_00234870(page->round - 1, match, 0, start + group);
            away = func_00234870(page->round - 1, match, 1, start + group);
            fillLeagueFixtureTeams(page, row, home, away);
            match++;
            row++;
        }
    }
}
