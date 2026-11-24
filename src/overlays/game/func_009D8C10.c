/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern u8 D_00591F24[];
extern u8 D_00591E4C[];
extern u8 D_005926F4[];
extern f32 D_005926D8[];
extern u32 Pes6MatchContext_FrameCounter[];
extern s32 func_009B33A0(Pes6MatchPlayer *, s32, s32);

s32 func_009D8C10(KeeperActor *actor) {
    u16 clip = actor->player.info->unk30;
    if (clip != 0x1a3 && clip != 1000) {
        s32 eligible = 0;
        switch (D_00591F24[0]) {
        case 5:
        case 0:
            if (!(actor->decision.flags & 0x10000))
                eligible = 1;
            break;
        default:
            eligible = 1;
        }
        if (eligible) {
            if (actor->player.distance114 > 0xc00)
                return 1;
            if (!actor->decision.countdown &&
                (func_009B33A0(&actor->player, (s32)keeperBall->decision.targetX,
                               (s32)keeperBall->decision.targetZ) < 0x9000 ||
                 (!D_00591E4C[0] && D_005926D8[0] <= (f32)(u32)D_005926F4[0]) ||
                 !(Pes6MatchContext_FrameCounter[0] & 7)))
                return 1;
            keeperBall->decision.targetX = actor->decision.targetX;
            keeperBall->decision.targetZ = actor->decision.targetZ;
        }
    }
    return 0;
}
