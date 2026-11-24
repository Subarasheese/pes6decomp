/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern u8 D_00591C09[];
extern u8 D_005926DE[];
extern u8 D_00591E4F[][2];
extern u8 D_00591E50[][2];

s32 func_00AA33C0(KeeperActor *actor, s32 frame) {
    KeeperActor *other;
    if (D_00591C09[0] == 5) {
        u8 id = D_00591E4F[actor->player.side ^ 1][0];
        if (!validOpponent(id, 0, 23))
            return 0x57e40000;
    }
    other = (KeeperActor *)Pes6MatchPlayer_Get(D_00591E4F[actor->player.side ^ 1][0]);
    if (other->player.role == 16)
        other = (KeeperActor *)Pes6MatchPlayer_Get(D_00591E50[actor->player.side ^ 1][0]);
    if (other->player.role == 14)
        frame = D_005926DE[0];
    {
        const KeeperBallFields *position = predictionAt(frame);
        s32 dx = (s32)(position->x[0] -
                       (other->player.x + other->decision.velocityX * (f32)frame + 0.f));
        s32 dz = (s32)(position->z[0] -
                       (other->player.z + other->decision.velocityZ * (f32)frame + 0.f));
        return dx * dx + dz * dz;
    }
}
