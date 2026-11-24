/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern u32 Pes6MatchContext_FrameCounter[];
extern s32 func_00AFBAB0(s32 id);

void func_00A15540(ShotActor *actor, ShotActor *observer) {
    s32 slot;
    s32 id = actor->player.id;
    if (!id)
        return;
    slot = actor->player.id - (u8)func_00AFBAB0(id);
    D_00591F44[actor->player.team][slot].status = 0;
    D_00591F44[actor->player.team][slot].startX = shotBall->shot.targetX;
    D_00591F44[actor->player.team][slot].startY = shotBall->shot.targetY;
    D_00591F44[actor->player.team][slot].startZ = shotBall->shot.targetZ;
    D_00591F44[actor->player.team][slot].endX = shotBall->shot.targetX;
    D_00591F44[actor->player.team][slot].endY = shotBall->shot.targetY;
    D_00591F44[actor->player.team][slot].endZ = shotBall->shot.targetZ;
    D_00591F44[actor->player.team][slot].tick = Pes6MatchContext_FrameCounter[0];
    D_00591F44[actor->player.team][slot].startFrame = shotBall->shot.candidateFrame;
    D_00591F44[actor->player.team][slot].endFrame = shotBall->shot.candidateFrame;
}
