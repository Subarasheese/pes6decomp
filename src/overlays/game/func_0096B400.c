/* compiler: mwcc-3.0.1b151 */

#include "pes6/tactical_player.h"

extern u8 D_00591F24[];
extern u8 D_00592374[];

s32 func_0096B400(TacticalActor *actor) {
    s32 value;
    switch (D_00591F24[0]) {
    case 0x2:
        if (!D_00592374[actor->player.team])
            value = 0x700;
        else
            value = 0xb00;
        break;
    case 0x3:
        if (!D_00592374[actor->player.team])
            value = 0x500;
        else
            value = 0xa00;
        break;
    case 0x1:
    case 0x7:
    case 0x6:
        value = 0xa00;
        break;
    default:
        value = 0xa00;
        break;
    }
    return value;
}
