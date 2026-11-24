/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_player.h"
#include "pes6/ball.h"

extern s32 func_009B33A0(Pes6MatchPlayer *, s32, s32);
extern s32 func_009B3480(Pes6MatchPlayer *, f32, f32);
extern u16 func_009B30B0(u16, u16);
extern s32 func_00C6A960(f32, f32, f32);
extern f32 func_001CD9E0(f32);

s32 func_009B6DA0(Pes6MatchPlayer *player, s32 frame) {
    s32 ballDistance = (s32)func_001CD9E0(
        (f32)(u32)func_009B33A0(player, (s32)Pes6Ball_Current->trajectoryX[frame],
                                (s32)Pes6Ball_Current->trajectoryZ[frame]));
    if (ballDistance > 1536)
        return 0;
    {
        u16 ballHeading = func_009B3480(player, Pes6Ball_Current->trajectoryX[frame],
                                        Pes6Ball_Current->trajectoryZ[frame]);
        u16 goalHeading = func_009B3480(player, -13465.f * (f32)player->goalDirection,
                                        951.f * (f32)(player->z < 0.f ? -1 : 1));
        s32 goalDistance = (s32)func_001CD9E0(
            (f32)(u32)func_009B33A0(player, (s32)(-13465.f * (f32)player->goalDirection),
                                    (s32)(951.f * (f32)(player->z < 0.f ? -1 : 1))));
        if (func_009B30B0(ballHeading, goalHeading) < 8 && goalDistance < ballDistance)
            return 1;
        if (func_00C6A960(Pes6Ball_Current->trajectoryX[frame],
                          Pes6Ball_Current->trajectoryY[frame],
                          Pes6Ball_Current->trajectoryZ[frame]))
            return 1;
        return 0;
    }
}
