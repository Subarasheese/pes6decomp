/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(8)
#include "pes6/league_result_rows.h"

void func_009BB6F0(void) {
    LeagueFixturePage *page = D_003EA9C0;
    LeagueSchedule *league;
    u8 stage, match, home, away;
    if (!page)
        return;
    league = func_00229460();
    stage = D_003E7B0C->stage;
    page->entries = league->stages[stage].pairs * league->stageGroups[stage];
    page->roundType = league->stages[stage].rounds;
    func_00983E70(stage);
    for (match = 0; match < league->stages[stage].pairs; match++) {
        home = func_00234870(page->round - 1, match, 0, stage);
        away = func_00234870(page->round - 1, match, 1, stage);
        page->nameIds[match][0] = home;
        page->nameIds[match][1] = away;
        page->teamIds[match][0] = func_00225680(home);
        page->teamIds[match][1] = func_00225680(away);
        page->teamKinds[match][0] = func_00225940(home);
        page->teamKinds[match][1] = func_00225940(away);
        fillLeagueFixtureScore(page, match, home, away);
    }
}
