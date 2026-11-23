/* compiler: mwcc-3.0.1b210 */
#include "pes6/edit_player_params.h"
extern s32 func_00BE29D0(u8);
void func_00BE31F0(const Pes6EditPlayerParams *player, s32 *out) {
    out[0] = player->age + 15;
    out[1] = player->preferredFoot;
    out[2] = player->injuryTolerance;
    out[3] = player->dribbleStyle;
    out[4] = player->freeKickStyle;
    out[5] = player->penaltyStyle;
    out[6] = player->dropKickStyle;
    out[7] = player->field_1F_0;
    out[8] = player->field_20_0;
    out[9] = func_00BE29D0(player->field_22);
}
