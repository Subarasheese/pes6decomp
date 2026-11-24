/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern s32 func_00AB33D0(u16);
extern s32 func_00B044D0(u16, u16);

u16 func_00AB3590(KeeperActor *actor, u16 clip) {
    u16 angle = func_00AB33D0(clip);
    switch (clip) {
    case 0xd0:
    case 0x255:
    case 0xd4:
        angle = 0;
        break;
    case 0x2d2:
    case 0x104:
    case 0x195:
    case 0xcf:
    case 0x1a2:
    case 0x314:
    case 0xe2:
    case 0x29c:
    case 0x199:
    case 0x116:
    default:
        angle = (u16)func_00B044D0(clip, angle);
        break;
    case 0x106:
        angle = (u16)func_00B044D0(clip, 90);
        break;
    case 0xca:
    case 0x246:
    case 0xac:
    case 0xb2:
        angle = (u16)func_00B044D0(clip, 45);
        break;
    case 0xf8:
        angle = (u16)func_00B044D0(clip, 135);
        break;
    case 0x225:
        angle = (u16)func_00B044D0(clip, 180);
        break;
    }
    return angle;
}
