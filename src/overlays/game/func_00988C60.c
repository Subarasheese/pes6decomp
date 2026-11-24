/* compiler: mwcc-3.0.1b151 */

#include "pes6/tactical_player.h"

extern u8 D_00591E50[][2];
extern u32 Pes6MatchContext_FrameCounter[];
extern s32 func_009B3350(void *ball, s32 x, s32 z);
extern s32 func_0098ED30(s32);
extern u8 D_005926FA[];
extern u8 D_00591BBC[];
extern u8 D_00CB5308[];

s32 func_00988C60(TacticalActor *actor) {
    u8 role;
    s32 id;
    s32 me, other;
    s32 distance;
    if ((Pes6MatchContext_FrameCounter[0] >> 1) % D_005926FA[0])
        return 0;
    id = D_00591E50[actor->player.side][0];
    if (id == 255)
        id = 1;
    else
        id %= 23;
    distance =
        func_009B3350(Pes6Ball_Current, (s32)(13465.f * (f32)-actor->player.goalDirection), 0);
    me = actor->ai.opponentDistanceSquared;
    other = ((TacticalActor *)&Pes6MatchPlayers[id])->ai.opponentDistanceSquared;
    if ((s32)distance < me && other < (s32)distance) {
        role = (u8)func_0098ED30(255);
        switch (role) {
        case 4:
            return 1;
        case 5:
            return 1;
        case 3:
            if (D_00CB5308[0])
                return 1;
            break;
        default:
            break;
        }
    }
    if (D_00591BBC[0] <= 1) {
        if ((u8)func_0098ED30(255) == 5 && actor->player.distance114 > 256 && other < me &&
            (u32)distance < actor->ai.opponentDistanceSquared)
            return 1;
    }
    return 0;
}
