/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern u8 D_00591E4C[];
extern u32 Pes6MatchContext_FrameCounter[];
extern u8 D_005926E6[];
extern s32 func_002AE670(s32);
extern u8 D_005926DF[];
extern u8 D_005926E2[];
extern s32 func_00AFBAB0(s32 id);

static inline void setRemainingShotFrame(s32 left) {
    if (left < func_002AE670(SHOT_TRAJECTORY_FRAMES))
        shotBall->shot.candidateFrame = left;
    else
        shotBall->shot.candidateFrame = func_002AE670(SHOT_TRAJECTORY_FRAMES) - 1;
}

s32 func_00A14EC0(Pes6MatchPlayer *player, Pes6MatchPlayer *observer) {
    s32 limit, slot, elapsed, left;
    s32 id = player->id;
    if (!id) {
        shotBall->shot.candidateFrame = 255;
        return 0;
    }
    if (player == observer) {
        if (id == D_00591E4C[0])
            limit = D_005926DF[0];
        else if (player->distance114 < 0x300)
            limit = D_005926DF[0];
        else
            limit = D_005926E2[0];
    } else
        limit = D_005926E6[0];
    slot = player->id - (u8)func_00AFBAB0(player->id);
    elapsed = shotMagnitude(
        (s32)(Pes6MatchContext_FrameCounter[0] - D_00591F44[player->team][slot].tick));
    if (player == observer) {
        shotBall->shot.targetX = D_00591F44[player->team][slot].startX;
        shotBall->shot.targetY = D_00591F44[player->team][slot].startY;
        shotBall->shot.targetZ = D_00591F44[player->team][slot].startZ;
    } else {
        shotBall->shot.targetX = D_00591F44[player->team][slot].endX;
        shotBall->shot.targetY = D_00591F44[player->team][slot].endY;
        shotBall->shot.targetZ = D_00591F44[player->team][slot].endZ;
    }
    if (limit >= elapsed && D_00591F44[player->team][slot].status != 255) {
        if (player == observer)
            left = D_00591F44[player->team][slot].startFrame;
        else
            left = D_00591F44[player->team][slot].endFrame;
        left -= elapsed;
        if (left <= 0)
            shotBall->shot.candidateFrame = 1;
        else
            setRemainingShotFrame(left);
        return 1;
    }
    left = D_00591F44[player->team][slot].endFrame - elapsed;
    if (left <= 0) {
        if (player->id == D_00591E4C[0])
            shotBall->shot.candidateFrame = 1;
        else
            shotBall->shot.candidateFrame = func_002AE670(SHOT_TRAJECTORY_FRAMES) - 1;
    } else
        setRemainingShotFrame(left);
    return 0;
}
