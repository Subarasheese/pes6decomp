/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern u8 D_00591E4F[][2];
extern u8 D_00591E50[][2];
extern s32 func_00BBB8C0(s32);

u16 func_00A64BF0(ShotActor *actor, u16 clip) {
    ShotActor *other;
    u8 side = actor->player.side;
    u8 first = D_00591E4F[side][0];
    if (actor->player.id == first) {
        other = (ShotActor *)Pes6MatchPlayer_Get(D_00591E50[side][0]);
    } else {
        other = (ShotActor *)Pes6MatchPlayer_Get(first);
    }
    if (actor == other)
        return clip;
    if (other->heading.motion->clip == (u16)clip) {
        switch ((u16)clip) {
        case 0x8b:
            if (func_00BBB8C0(2))
                clip = 0x8a;
            else
                clip = 0x79;
            break;
        case 0x79:
            if (func_00BBB8C0(2))
                clip = 0x8a;
            else
                clip = 0x8b;
            break;
        case 0x8a:
            if (func_00BBB8C0(2))
                clip = 0x79;
            else
                clip = 0x8b;
            break;
        }
    }
    return clip;
}
