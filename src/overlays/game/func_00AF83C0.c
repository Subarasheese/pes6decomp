/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern void func_00A10250(void);

static inline void turnFromTouch(TouchActor *actor) {
    s32 sign = actor->heading.motion->mirrored == 0 ? 1 : -1;
    actor->touch.facing += sign * 0x1c00;
}

s32 func_00AF83C0(TouchActor *actor) {
    s32 result;
    switch (actor->heading.motion->clip) {
    case 0xb6:
    case 0xc7:
    case 0xc6:
    case 0xc2:
    case 0xc3:
    case 0xc4:
    case 0xc5:
    case 0xb7:
    case 0x3:
        result = 1;
        turnFromTouch(actor);
        break;
    case 0xbe:
    case 0x15:
    case 0x17:
    case 0x16:
        result = 1;
        turnFromTouch(actor);
        break;
    default:
        func_00A10250();
        result = 0;
        break;
    }
    return result;
}
