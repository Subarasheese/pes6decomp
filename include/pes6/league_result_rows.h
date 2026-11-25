#ifndef PES6_LEAGUE_RESULT_ROWS_H
#define PES6_LEAGUE_RESULT_ROWS_H

#include "pes6/fixture_display.h"
#include "pes6/league_fixture_schedule.h"

typedef struct {
    u8 reserved00[0x24], field24, field25, reserved26[2], stage, division, reserved2A, day;
    u8 reserved2C[8], view;
} LeagueFixtureSelection;

extern LeagueFixtureSelection *D_003E7B0C;
extern s32 func_00234870(u8 day, u8 match, u8 side, u8 group);
extern u8 func_00983E70(u8 group);
extern u8 func_00983E20(u8 group);
extern u16 func_00225680(u8 slot);
extern u8 func_00225940(u8 slot);
extern s32 func_00236E90(u8 slot, u8 day);
extern void func_009BAEA0(u8 row);
extern u8 func_00225820(void);
extern u8 func_00229A70(void);
extern s32 func_00238330(s32 team);

static inline void fillLeagueFixtureScore(LeagueFixturePage *p, u8 row, u8 home, u8 away) {
    p->goals[row][0].leg = func_00236E90(home, p->round - 1);
    p->aggregateScores[row][0] = p->goals[row][0].leg;
    p->goals[row][1].leg = func_00236E90(away, p->round - 1);
    p->aggregateScores[row][1] = p->goals[row][1].leg;
    p->goals[row][0].extraTime = 0;
    p->goals[row][0].penalties = 0;
    p->firstLegScores[row][0] = 0;
    p->goals[row][1].extraTime = 0;
    p->goals[row][1].penalties = 0;
    p->firstLegScores[row][1] = 0;
    func_009BAEA0(row);
}

static inline void fillLeagueFixtureTeams(LeagueFixturePage *p, u8 row, u8 home, u8 away) {
    p->nameIds[row][0] = func_00229010(home);
    p->nameIds[row][1] = func_00229010(away);
    p->teamIds[row][0] = func_00225680(func_00229010(home));
    p->teamIds[row][1] = func_00225680(func_00229010(away));
    p->teamKinds[row][0] = func_00225940(func_00229010(home));
    p->teamKinds[row][1] = func_00225940(func_00229010(away));
    fillLeagueFixtureScore(p, row, home, away);
}

#endif
