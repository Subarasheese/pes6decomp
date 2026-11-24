/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
typedef struct {
    u8 condition;
    u8 reserved01[0x347];
} PlayerConditionColumn;
extern PlayerConditionColumn D_00592A78[][32];
extern s32 func_00BDB5F0(Pes6MatchPlayer *player);
s32 func_00B79860(Pes6MatchPlayer *player) {
    s32 eligible = 0;
    if (func_00BDB5F0(player) && !D_00592A78[player->team][player->slot].condition)
        eligible = 1;
    return eligible;
}
