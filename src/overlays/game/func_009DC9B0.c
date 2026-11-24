/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern s32 func_009B33A0(Pes6MatchPlayer *, s32, s32);
extern s32 func_00A14EC0(Pes6MatchPlayer *, Pes6MatchPlayer *);
extern s32 func_009B3350(Pes6Ball *, s32 x, s32 z);
extern u8 D_00591E53[][2];
extern f32 D_00592274[];
extern f32 D_00592278[];
extern void func_00AA9F90(KeeperActor *, KeeperActor *, s32, s32, s32, s32);
extern void func_00A15540(KeeperActor *, KeeperActor *);
typedef struct {
    f32 x, y, z;
    s32 playerDistance;
    u32 frame, goalDistance;
} KeeperPassTarget;

static inline void selectTarget(KeeperActor *peer, KeeperActor *actor) {
    if (!func_00A14EC0(&peer->player, &actor->player)) {
        func_00AA9F90(peer, actor, peer->decision.response, 0, 0x300, -0x2c0);
        if (peer->player.role == 7)
            func_00A15540(peer, actor);
    }
}
static inline u32 goalDistance(f32 x0, f32 z0, f32 x1, f32 z1) {
    u32 dx = (s32)(x1 - x0);
    u32 dz = (s32)(z1 - z0);
    return dx * dx + dz * dz;
}

void func_009DC9B0(KeeperActor *actor, KeeperActor *peer, KeeperPassTarget *out) {
    u32 best;
    s32 id;
    f32 x, z;
    selectTarget(peer, actor);
    best = keeperBall->decision.candidateFrame;
    id = D_00591E53[actor->player.side ^ 1][0];
    if (peer->player.id != id && id != 255) {
        x = keeperBall->decision.targetX;
        z = keeperBall->decision.targetZ;
        peer = (KeeperActor *)Pes6MatchPlayer_Get(id);
        selectTarget(peer, actor);
        if ((u32)func_009B3350(&keeperBall->ball, (s32)x, (s32)z) <
            (u32)func_009B3350(&keeperBall->ball, (s32)keeperBall->decision.targetX,
                               (s32)keeperBall->decision.targetZ)) {
            keeperBall->decision.targetX = x;
            keeperBall->decision.targetZ = z;
            best = keeperBall->decision.candidateFrame;
        }
    }
    out->x = keeperBall->decision.targetX;
    out->y = keeperBall->decision.targetY;
    out->z = keeperBall->decision.targetZ;
    out->frame = best;
    out->playerDistance = func_009B33A0(&actor->player, (s32)out->x, (s32)out->z);
    out->goalDistance =
        goalDistance(out->x, out->z, -13465.f * (f32)actor->player.goalDirection, 0);
    D_00592274[0] = keeperBall->decision.targetX;
    D_00592278[0] = keeperBall->decision.targetZ;
}
