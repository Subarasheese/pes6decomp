/* compiler: mwcc-3.0.1b210 */
#include "pes6/competition_player_ranks.h"

extern u16 D_003E9A14;
extern u16 D_0053A810[32];
extern s32 func_00226710(void);
extern s32 func_00230100(u8);

u16 func_0022D200(u8 team, u16 player) {
    u16 last = 0, rank = 0;
    s32 i;
    CompetitionPlayerStats *data = competitionPlayerStats();
    if (competitionDataUnavailable() == 1)
        return 0;
    if (!data)
        return 0;
    if (team == 0xff)
        return 0;
    if (player == 0)
        return 0;
    func_00230100((u8)func_00226710());
    for (i = 0; i < D_003E9A14; ++i) {
        u16 row = D_0053A810[i];
        if (last != data->ranks[row].total06) {
            rank = i + 1;
            last = data->ranks[row].total06;
        }
        if (team == data->ranks[row].team && player == data->ranks[row].playerId)
            return rank;
    }
    return 0;
}
