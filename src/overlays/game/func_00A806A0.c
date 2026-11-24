/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern s32 func_00AB4460(void);
extern s32 func_002AE670(s32);

s32 func_00A806A0(ShotActor *actor, u16 angle, u16 movement, s32 speed, s32 range) {
    s32 scale = 12 * actor->shot.powerScale;
    if (speed >= 0x1d00 - scale && range > 512) {
        if (range < 0x180 && angle >= 80)
            return 2;
        if (range < 0x600 && angle >= 80 && movement > 80)
            return 4;
        return 0;
    }
    if (range > 0x300 || (actor->shot.shotMode == 1 && actor->shot.timingMode == 2))
        return 2;
    if (actor->shot.timingMode == 4 && speed < 0x1900 - scale)
        return 4;
    if (actor->shot.shotMode != 1 && range < 192)
        return 4;
    if (range <= 2 * movement + 0x140 && actor->shot.shotMode != 1 && actor->shot.timingMode == 4)
        return 4;
    if (range <= 4 * movement + 0x180 && angle > 40)
        return 4;
    if (speed <= 0x1300 - scale)
        return 4;
    if (func_00AB4460() <= func_002AE670(32) && angle > 40 && movement >= 48)
        return 4;
    return 1;
}
