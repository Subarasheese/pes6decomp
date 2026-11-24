/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_player.h"

extern f32 func_0011D138(f32);
extern f32 func_0011D468(f32);
extern s32 func_00BBB990(s32, s32);
extern s32 func_00BBB9C0(s32, s32);
extern f32 D_00591BEC[];

void func_009B37F0(Pes6MatchPlayer *player) {
    if (!player->info->active)
        return;
    if (!player->speed) {
        player->velocityX = 0.f;
        player->velocityZ = 0.f;
    } else {
        if (player->info->appearance->frameDataOffset && player->info->appearance->flag) {
            player->velocityX =
                ((f32)player->speed *
                 func_0011D138((3.1415927f * (f32)(u32)player->movementAngle / 32768.f))) /
                D_00591BEC[0];
            player->velocityZ =
                -((f32)player->speed *
                  func_0011D468((3.1415927f * (f32)(u32)player->movementAngle / 32768.f)) /
                  D_00591BEC[0]);
        } else {
            player->velocityX =
                (f32)func_00BBB990(player->movementAngle, player->speed) / D_00591BEC[0];
            player->velocityZ =
                (f32)func_00BBB9C0(player->movementAngle, player->speed) / D_00591BEC[0];
        }
        player->x += player->velocityX;
        player->z += player->velocityZ;
    }
}
