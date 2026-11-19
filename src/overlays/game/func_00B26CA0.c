/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"
#include "pes6/match_player.h"

void func_00B26CA0(const Pes6MatchPlayer *player, s32 value)
{
    if (value > 128) {
        value = 128;
    }
    D_00CBBE64->bit1 = 1;
    D_00CBBE64->bit2 = 1;
    D_00CBBE6C[0] = player->team;
    D_00CBBE68[0] = (f32)value / 128.0f;
}
