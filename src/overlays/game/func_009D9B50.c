/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern u8 D_00591E4F[][2];
extern u16 func_009B30B0(u16, u16);

static inline s32 magnitude(s32 x) { return x > 0 ? x : -x; }

s32 func_009D9B50(KeeperActor *actor) {
    KeeperActor *other = (KeeperActor *)Pes6MatchPlayer_Get(D_00591E4F[actor->player.side ^ 1][0]);
    if (keeperBall->decision.y[0] < -128.f) {
        if (func_009B30B0(other->decision.ballHeading, keeperBall->ball.dir) >= 72) {
            if (other->player.distance114 < 768)
                return 1;
        }
    }
    if (!(keeperBall->decision.y[0] <= -320.f)) {
        if (magnitude((s32)keeperBall->ball.vy) < 7520)
            return 0;
    }
    return 1;
}
