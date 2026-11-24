/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern u16 func_009B30B0(u16 first, u16 second);

s32 func_00A0B8A0(TouchActor *actor) {
    HeadingMotion *motion = actor->heading.motion;
    u16 clip = motion->clip;
    switch (clip) {
    case 0x15:
    case 0x17:
    case 0x16:
    case 0x14:
    case 0x11:
    case 0xbe:
    case 0x68:
    case 0x3:
    case 0xb7:
    case 0xbb:
    case 0x22a:
    case 0x2b4:
    case 0x2c0:
    case 0x6b:
    case 0x6a:
    case 0x6d:
    case 0x6e:
    case 0xc8:
    case 0x2b7:
    case 0x2b5:
    case 0xb6:
    case 0xc7:
    case 0xc6:
    case 0xbf:
    case 0xc4:
    case 0xc5:
    case 0xc2:
    case 0xc3:
    case 0x12:
    case 0x31:
    case 0x23:
    case 0x22:
    case 0x2ba:
        return 1;
    default: {
        s32 special;
        if (motion->descriptor->clipKind == 1)
            special = 1;
        else {
            switch (clip) {
            case 0xc8:
            case 0xc1:
                special = 1;
                break;
            default:
                special = 0;
                break;
            }
        }
        if (!special)
            break;
        return 0;
    }
    }
    return func_009B30B0(actor->touch.facing, actor->touch.movement) <= 32;
}
