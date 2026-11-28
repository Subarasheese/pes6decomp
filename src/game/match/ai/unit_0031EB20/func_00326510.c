/* compiler: mwcc-3.0.1b198-O3 */
#include "pes6/match_player_state_rows.h"

#pragma opt_common_subs off

typedef struct {
    u8 wins, losses, draws, points;
} MatchStanding;

extern u8 func_002363B0(s32 group, s32 team);
extern u8 func_00236470(u8 team);
extern u8 func_00236130(s32 group, s32 team);
extern u8 func_002361F0(u8 team);
extern u8 func_00236270(s32 group, s32 team);
extern u8 func_00236330(u8 team);
extern u8 func_00235D70(s32 group, s32 team);
extern u8 func_00235E30(u8 team);

s32 func_00326510(MatchPlayerStateRows *state, MatchStanding *standing, s32 side) {
    s32 team = D_003E77B0->team[side % 2];
    if (state->kind == 7) {
        standing->wins = func_00236470(team);
        standing->losses = func_002361F0(team);
        standing->draws = func_00236330(team);
        standing->points = func_00235E30(team);
    } else {
        standing->wins = func_002363B0((u8)state->competition, team & 0xff);
        standing->losses = func_00236130((u8)state->competition, team & 0xff);
        standing->draws = func_00236270((u8)state->competition, team & 0xff);
        standing->points = func_00235D70((u8)state->competition, team & 0xff);
    }
    return 1;
}
