/* compiler: mwcc-3.0.1b151 */
#pragma opt_propagation off

#include "pes6/match_first_touch.h"

extern u8 D_00591E4C[];
extern u8 D_005926DE[];
extern u8 D_00591E50[][2];
extern f32 D_005926D8[];
extern s32 func_00AB38D0(TouchActor *);
extern u8 D_00591E19[];
extern u8 D_00591F14[];
extern s32 func_00997EF0(TouchActor *);
extern s32 Pes6MatchFlow_GetState(s32);
extern s32 func_00BF6280(void);

s32 func_00A11500(TouchActor *actor) {
    if (actor->player.role == 0xfb)
        return 0;
    if (actor->touch.controller && actor->player.id != D_00591E4C[0] && !func_00997EF0(actor) &&
        actor->player.id != D_00591E50[actor->player.side][0])
        return 1;
    if (!((f32)touchMagnitude((s32)touchBall->trajectory.x[0]) <= 13721.f &&
          (f32)touchMagnitude((s32)touchBall->trajectory.z[0]) < 8857.f))
        return 1;
    if ((u8)Pes6MatchFlow_GetState(1) == 12 && !func_00BF6280()) {
        goto available;
    }
    if (actor->player.id != D_00591E4C[0] && touchBall->ball.action == 11 &&
        D_005926D8[0] <= (f32)(u32)D_005926DE[0])
        return 1;
    if (func_00AB38D0(actor) == 0x41)
        return 0;
    if (actor->player.id == D_00591E4C[0])
        return 0;
    if (D_00591F14[0] || (D_00591E4C[0] && actor->player.id != D_00591E4C[0]))
        return 1;
    if (actor->player.id != D_00591E19[0] && D_005926D8[0] <= (f32)(u32)D_005926DE[0])
        return 1;
    return 0;
available:
    return 1;
}
