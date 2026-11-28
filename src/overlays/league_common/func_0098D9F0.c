/* compiler: mwcc-3.0.1b198 */
#include "pes6/competition_records.h"
extern LeagueCompetition *D_003E77B4;
extern s32 func_00234870(u8 day, u8 match, u8 side, u8 stage), func_00233EF0(u8 slot, u8 day);
extern u8 func_00228F20(u8 slot), func_00229010(u8 slot);
s32 func_0098D9F0(u8 stage, u8 day) {
    s32 i;
    u8 pairs = D_003E77B4->stages[stage].gamesPerDay;
    for (i = 0; i < pairs; ++i) {
        u8 away, home;
        u8 hi, ai;
        home = func_00234870(day, i, 0, stage);
        away = func_00234870(day, i, 1, stage);
        if (home < LEAGUE_TEAM_COUNT && away < LEAGUE_TEAM_COUNT && home != away) {
            hi = func_00229010(home);
            ai = func_00229010(away);
            if (hi < 80 && ai < 80 && !func_00233EF0(home, day) && !func_00233EF0(away, day)) {
                if ((u8)func_00228F20(home) > 0 || (u8)func_00228F20(away) > 0)
                    return 0;
            }
        }
    }
    return 1;
}
