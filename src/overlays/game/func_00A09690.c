/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern s32 func_00287230(TouchActor *, s32);

u16 func_00A09690(TouchActor *actor) {
    u16 direction = actor->touch.facing;
    switch (actor->heading.motion->clip) {
    case 0x2e:
    case 0x58:
    case 0x3d:
    case 0x4d:
    case 0x10b:
    case 0x4a:
    case 0x4c:
    case 0x3e:
    case 0x1d:
    case 0x56:
    case 0x235:
    case 0x1f:
    case 0x3a:
    case 0x39:
    case 0x130:
    case 0xc1:
    case 0x3:
    case 0xb7:
    case 0xc8:
    case 0x5b:
    case 0x36:
    case 0x2e5:
    case 0x2d9:
    case 0x2d8:
    case 0x306:
    case 0x30c:
    case 0x236:
    case 0xc0:
    case 0x16f:
    case 0x313:
        direction = (u16)func_00287230(actor, 0);
        break;
    case 0x2fa:
    case 0x16e: {
        s32 sign = actor->heading.motion->mirrored == 0 ? 1 : -1;
        direction = (u16)direction + sign * 0x5000;
        break;
    }
    case 0x30e:
    case 0x2fe:
    case 0x4f:
    case 0x5a:
    case 0x59:
    case 0x63:
    case 0x5c:
    case 0x2d7:
    case 0x2d6:
    case 0x228:
    case 0x1c:
    case 0x2c6:
    case 0x38e:
    case 0x2b5:
    case 0x24:
    case 0x49:
    case 0xbc:
        direction = (u16)func_00287230(actor, 6);
        break;
    default:
        break;
    }
    return (u16)direction;
}
