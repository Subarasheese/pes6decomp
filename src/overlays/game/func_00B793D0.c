/* compiler: mwcc-3.0.1b151 */
#pragma opt_common_subs off
#include "pes6/match_player.h"
extern Pes6MatchPlayer D_0058E7F0[];
extern void func_00207360(Pes6PlayerInfo *);
extern void func_001AFD70(Pes6PlayerFieldState *);
extern void func_00209A00(Pes6PlayerInfo *, s32, s32);
void func_00B793D0(void) {
    Pes6MatchPlayer *player = D_0058E7F0;
    s32 i;
    for (i = 0; i < 22; i++, player++) {
        Pes6PlayerInfo *info = player->info;
        if (info->active && player->x == 32767.0f) {
            func_00209A00(info, 0x1bf, 0);
            func_00207360(player->info);
            func_001AFD70(player->info->fieldState);
            player->x = player->aimX;
            player->z = player->aimZ;
            player->speed = 0;
            player->role = 7;
            player->action = 0;
        }
    }
}
