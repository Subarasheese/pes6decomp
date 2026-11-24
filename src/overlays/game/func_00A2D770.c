/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern u8 D_00591E4C[];
extern f32 func_001CD9E0(f32);
extern u32 func_00A9B980(u8 *player);
extern u16 D_00CAADE0[];
extern u8 D_00591BBC[];
extern u8 D_00591EFD[];
extern s32 func_00A0DD50(ShotActor *);
extern s32 func_00A1FE80(s32, s32);

s32 func_00A2D770(ShotActor *actor) {
    u8 level = D_00591BBC[0];
    s32 distance;
    s32 threshold;
    if (actor->shot.controlMode == 2 && level < 2)
        level = 2;
    distance = (s32)func_001CD9E0((f32)(s32)func_00A9B980((u8 *)actor));
    if (func_00A0DD50(actor)) {
        if ((!D_00591E4C[0] && !actor->shot.contactTimer) || D_00591EFD[actor->player.side])
            threshold = 80;
        else {
            threshold = D_00CAADE0[level] + distance / 256 - actor->shot.distanceScale * 2;
            if (threshold < 80)
                threshold = 80;
        }
    } else if (distance >= 0x1200) {
        threshold = distance / 128 + 0x80 - actor->shot.distanceScale * 2;
        if (threshold < 80)
            threshold = 80;
    } else {
        if (!actor->shot.controlMode)
            threshold = D_00CAADE0[5];
        else
            threshold = D_00CAADE0[level];
    }
    if (shotBall->ball.horizontalSpeed > 0x400 && actor->shot.controlMode && D_00591BBC[0] < 3)
        threshold = func_00A1FE80(threshold, 0x180);
    return threshold;
}
