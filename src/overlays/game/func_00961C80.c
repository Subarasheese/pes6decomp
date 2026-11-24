/* compiler: mwcc-3.0.1b151 */

#include "pes6/tactical_player.h"

extern u8 D_00CB539C[];
extern u8 D_00CB56A9[];
extern void func_00C04830(TacticalActor *, u8, u8);

void func_00961C80(TacticalActor *actor, u8 target, u8 mode, u8 parameter) {
    switch ((u8)mode) {
    case 0x1:
    case 0x2:
    case 0x10:
        func_00C04830(actor, 0, target);
        break;
    case 0x40:
        func_00C04830(actor, 1, target);
        break;
    case 0x50:
        func_00C04830(actor, 2, target);
        break;
    default:
        D_00CB56A9[actor->player.side] = parameter;
        actor->ai.target = (u8)target;
        D_00CB539C[actor->player.side] = 1;
        break;
    }
}
