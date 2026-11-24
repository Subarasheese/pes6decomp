/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern u8 D_00591E4C[];
extern s32 func_009B33A0(void *player, s32 x, s32 z);
extern u16 func_009B30B0(u16, u16);
extern u8 func_0098ED30(s32);

u8 func_00A24F00(ShotActor *actor, s32 force, u16 step) {
    u16 frame = step;
    if (force < 0x140)
        return 1;
    if (!D_00591E4C[0] && func_009B30B0(actor->shot.ballHeading, shotBall->ball.dir) >= 104) {
        if (shotBall->ball.horizontalSpeed > 0x3000 &&
            (u32)func_009B33A0(&actor->player, (s32)shotBall->shot.x[0], (s32)shotBall->shot.z[0]) <
                0x100000u)
            return 1;
    }
    if (frame >= 120 || (force < 512 && frame >= 112))
        return 1;
    if (actor->shot.timingMode == 4 && frame >= 104 && force < 0x240)
        return 1;
    if (func_0098ED30(actor->player.id) == 5 && force < 0x240 && frame >= 0x50 &&
        func_009B30B0(actor->shot.facing, actor->player.angle) < 64 &&
        func_009B30B0(actor->shot.movement, actor->player.angle) > 64)
        return 1;
    return 0;
}
