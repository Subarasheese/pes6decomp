/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern u32 func_00A9B980(u8 *player);
extern s32 func_00A21A90(TouchActor *, s32, s32, s32, s32);
extern s32 func_00A20DC0(TouchActor *, s32, s32, s32, s32);
extern u16 func_009B32D0(u16 target, u16 current, u16 step);

s32 func_00A68CC0(TouchActor *actor) {
    if ((s32)func_00A9B980((u8 *)actor) <= 0x1000000) {
        if (func_00A21A90(actor, touchFoot(actor), actor->touch.facing,
                          actor->touch.approachHeading, actor->player.speed)) {
            switch (actor->heading.motion->clip) {
            case 0x305:
            case 0x306:
            case 0x233:
                actor->touch.chosenDirection =
                    (u16)func_009B32D0(actor->heading.turnAngle, actor->touch.facing, 0x1800);
                break;
            default:
                break;
            }
            actor->player.role = 10;
            actor->player.action = 6;
            return 1;
        }
        if (func_00A20DC0(actor, touchFoot(actor), actor->touch.approachHeading,
                          actor->touch.facing, 0)) {
            actor->player.role = 10;
            actor->player.action = 7;
            return 1;
        }
    }
    return 0;
}
