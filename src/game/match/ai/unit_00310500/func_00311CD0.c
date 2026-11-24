/* compiler: mwcc-3.0.1b210-sdata4 */
#include "pes6/match_player.h"
typedef struct {
    u8 reserved00[0xb5], style;
    u8 reservedb6[0x348 - 0xb6];
} PlayerStyle;
s32 func_00311CD0(u8 *weight, s32 side, s32 slot) {
    u8 weights[8] = {1, 1, 2, 2, 3, 3, 4, 4};
    if (side < 0 || slot < 0 || side >= 2 || slot >= 32) {
        *weight = 1;
        return 0;
    } else {
        const Pes6SquadPlayer *entry = &Pes6MatchSquads[side].players[slot];
        u8 index = ((const PlayerStyle *)entry)->style;
        *weight = weights[index & 7];
        return 1;
    }
}
