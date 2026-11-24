/* compiler: mwcc-3.0.1b151 */

#include "pes6/tactical_player.h"

extern s32 func_00AFBA70(s32 playerId);

static inline s32 goalOffset(f32 target, f32 position, s16 team) {
    return (s32)((0.f + target) - (f32)team * position);
}

s32 func_00963270(TacticalActor *actor) {
    s32 id;
    TacticalActor *other;
    if ((u8)func_00AFBA70(actor->player.id) != 255)
        id = (u8)func_00AFBA70(actor->player.id) % 23;
    else
        id = 1;
    other = (TacticalActor *)&Pes6MatchPlayers[id];
    {
        s32 dx = goalOffset(-13465.f, other->player.x, other->player.goalDirection);
        s32 dz = goalOffset(0.f, other->player.z, other->player.goalDirection);
        return dx * dx + dz * dz > 0x721640;
    }
}
