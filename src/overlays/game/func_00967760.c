/* compiler: mwcc-3.0.1b151 */

#include "pes6/tactical_player.h"

extern u8 D_00591E4C[];
extern s32 func_00952A50(u16 heading);

u16 func_00967760(TacticalActor *actor) {
    u16 heading;
    u16 chosen;
    u8 cost, best;
    u8 i;
    if (!D_00591E4C[0]) {
        if ((u8)func_00952A50(actor->ai.facing) < 90)
            return (u16)((actor->ai.facing + 0x1000) & 0xe000);
        best = 99;
        chosen = 0xffff;
        for (i = 0; i < 8; ++i) {
            heading = (u16)(i * 0x2000 + actor->player.side * 0x8000);
            cost = (u8)func_00952A50(heading);
            if (cost < best) {
                chosen = (u16)(i * 0x2000 + actor->player.side * 0x8000);
                best = cost;
            }
        }
        if (chosen != 0xffff)
            return chosen;
    }
    heading = actor->ai.facing;
    switch (actor->player.role) {
    default:
        break;
    case 2:
        switch ((u16)actor->player.action) {
        case 0xd2:
        case 0xd4:
        case 0xd8:
        case 0x30:
        case 0x32:
        case 0x88:
        case 0x59:
        case 0xb0:
        case 0x39:
        case 0x45:
        case 0x70:
        case 0x74:
        case 0x28:
        case 0x0:
        case 0x4:
        case 0x8:
        case 0x19:
        case 0x18:
        case 0xf1:
        case 0xf0:
        case 0x51:
        case 0x98:
        case 0x58:
            heading = actor->ai.waitingHeading;
            break;
        case 0x10:
        case 0x40:
        case 0x44:
        case 0x60:
        case 0x50:
        case 0x52:
            heading = actor->ai.turningHeading;
            break;
        default:
            heading = actor->ai.standardHeading;
            break;
        }
        break;
    }
    if (heading == 0xffff)
        heading = 0;
    return (u16)((heading + 0x1000) & 0xe000);
}
