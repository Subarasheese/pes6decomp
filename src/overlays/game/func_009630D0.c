/* compiler: mwcc-3.0.1b151 */
#pragma opt_propagation off

#include "pes6/tactical_player.h"

extern s32 func_00BBB990(s32, s32);
extern s32 func_00BBB9C0(s32, s32);
extern u16 func_009B34C0(f32 x, f32 z, f32 targetX, f32 targetZ);
extern f32 D_00591BEC[];
extern u16 func_009B3070(u16 first, u16 second);

static inline s32 projectedStep(void) {
    return (s32)((f32)Pes6Ball_Current->horizontalSpeed / D_00591BEC[0]);
}

s32 func_009630D0(TacticalActor *actor) {
    u16 facing = actor->ai.ballHeading;
    f32 vz = (f32)func_00BBB9C0(Pes6Ball_Current->dir, projectedStep());
    f32 vx = (f32)func_00BBB990(Pes6Ball_Current->dir, projectedStep());
    u16 turn = func_009B3070(
        facing, func_009B34C0(0.f, 0.f, vx - actor->ai.velocityX, vz - actor->ai.velocityZ));
    if (turn < 0x4000)
        return 1;
    return -(turn != 0x4000);
}
