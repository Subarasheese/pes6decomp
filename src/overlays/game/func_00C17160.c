/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_lineup_statistics.h"
void func_00C17160(s32 event, const LineupSample *update) {
    LineupHistory *state = &D_00CCAE00;
    s32 i;
    u8 side = update->side;
    for (i = 0; i < 11; ++i)
        state->team[side].players[i] = update->players[i];
    state->team[side].centre = update->centre;
    func_00C13AB0(&state->listeners, event, update);
}
