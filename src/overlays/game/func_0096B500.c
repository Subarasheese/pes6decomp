/* compiler: mwcc-3.0.1b151 */

#include "pes6/tactical_player.h"

extern SupportPlan D_00CBBE48;
extern void func_0096B650(SupportPoint *, TacticalActor *, s32);

void func_0096B500(TacticalActor *actor) {
    SupportPoint pos;
    s32 slot, i, clear;
    TacticalActor *peer;
    s32 dx, dz;
    f32 x, z;
    for (slot = 0; slot < SUPPORT_SLOTS; ++slot) {
        func_0096B650(&pos, actor, slot);
        clear = 1;
        for (i = 0; i < SUPPORT_SLOTS; ++i) {
            u8 id = D_00CBBE48.tracked[i];
            if (id == 255)
                continue;
            peer = (TacticalActor *)Pes6MatchPlayer_Get(id);
            if (id == actor->player.id) {
                x = actor->player.x;
                z = actor->player.z;
            } else {
                x = peer->ai.plannedX;
                z = peer->ai.plannedZ;
            }
            dx = (s32)(x - pos.x);
            dz = (s32)(z - pos.z);
            if ((u64)(dx * dx + dz * dz) <= 0x64000U) {
                clear = 0;
                break;
            }
        }
        if (clear == 1)
            break;
    }
    actor->ai.target = slot;
    actor->player.aimX = actor->ai.plannedX = pos.x;
    actor->player.aimZ = actor->ai.plannedZ = pos.z;
}
