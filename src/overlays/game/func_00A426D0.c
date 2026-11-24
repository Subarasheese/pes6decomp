/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern u8 D_005926F4[];
extern void func_00930240(ShotActor *);
extern void func_00207390(HeadingMotion *, s32);
extern u8 D_005926EC[];
extern void func_00A9D7F0(ShotActor *);

s32 func_00A426D0(ShotActor *actor) {
    if (shotPredictionAt(D_005926EC[0])->speeds[0] == 0 && actor->player.speed == 0 &&
        actor->player.distance114 <= 512) {
        actor->shot.directionState = 0;
        actor->heading.motion->mirrored = (Pes6MatchSquads[actor->player.team]
                                               .setupPlayers[actor->player.slot]
                                               .current.kickingFoot &
                                           1);
        func_00209A00(actor->heading.motion, 0x2d4, 0);
        func_00207390(actor->heading.motion, 4);
        actor->heading.turnAngle = actor->shot.facing;
        func_00930240(actor);
        actor->shot.countdown = 0;
        actor->shot.command = 7;
        actor->player.actionGroup = 0;
        actor->shot.contactTimer = D_005926F4[0];
        func_00A9D7F0(actor);
        actor->player.role = 0x40;
        actor->player.action = 1;
        return 1;
    }
    return 0;
}
