/* compiler: mwcc-3.0.1b151 */
#pragma opt_propagation off

#include "pes6/match_first_touch.h"

extern u16 func_009B30B0(u16 first, u16 second);

s32 func_00AFBB00(TouchActor *actor, TouchActor *rival) {
    if (!actor->player.id || !rival->player.id)
        return 0;
    switch (rival->heading.motion->clip) {
    case 0x321:
    case 0x333:
    case 0x16e:
    case 0x2fa:
    case 0x6f: {
        s32 first = touchRating(rival, 4, 50) + 10;
        s32 second = touchRating(actor, 4, 50);
        if (first >= second)
            return 0;
        break;
    }
    default:
        break;
    }
    if (rival->player.role >= 128)
        return 0;
    if (actor->player.role >= 128)
        return 1;
    {
        s32 first = touchRating(actor, 4, 50) + 10;
        s32 second = touchRating(rival, 4, 50);
        if (first < second)
            return 0;
    }
    switch (actor->player.role) {
    case 0xad:
    case 0x90:
    case 0x8c:
    case 0x11:
    case 0x14:
    case 0xd:
    case 0x5:
    case 0x6:
    case 0x8:
    case 0x9:
    case 0xa:
    case 0x41:
    case 0x4:
    case 0xfb:
        return 2;
    default:
        break;
    }
    {
        s32 first = touchRating(actor, 4, 50);
        s32 second = touchRating(rival, 4, 50);
        if (first >= second + 30)
            return 1;
    }
    {
        s32 first = touchRating(actor, 4, 50);
        s32 second = touchRating(rival, 4, 50);
        if (first >= second + 15)
            return 2;
    }
    if (actor->player.role >= 128)
        return 2;
    switch (actor->heading.motion->clip) {
    case 0x321:
    case 0x333:
    case 0x16e:
    case 0x2fa:
    case 0x6f:
        if (func_009B30B0(actor->touch.facing, actor->touch.playerHeadings[rival->player.id]) >= 96)
            return 1;
        else
            return 0;
    default:
        return 0;
    }
}
