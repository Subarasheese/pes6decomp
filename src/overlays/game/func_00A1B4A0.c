/* compiler: mwcc-3.0.1b151 */
#include "types.h"

typedef struct {
    u8 pad00[3];
    u8 end;
    u8 pad04[4];
    u16 start;
    u8 pad0a[3];
    u8 : 1;
    u8 kind : 7;
} ResponseClip;

typedef struct {
    u8 pad00[4];
    ResponseClip *clip;
    u8 pad08[0x24];
    u8 active;
    u8 pad2d[3];
    u16 code;
    u8 pad32[6];
    f32 phase;
} ResponseDescriptor;

typedef struct {
    u8 pad00[4];
    ResponseDescriptor *descriptor;
    u8 pad08[14];
    u8 state;
} ResponseActor;

u8 func_00A1B4A0(const ResponseActor *actor) {
    ResponseDescriptor *descriptor = actor->descriptor;
    ResponseClip *clip;
    u8 state;

    if (!descriptor->active)
        return 1;
    clip = descriptor->clip;
    if (clip->kind == 16)
        return 1;
    switch (descriptor->code) {
    case 409:
    case 278:
    case 774:
    case 775:
    case 72:
    case 733:
    case 1099:
    case 1109:
    case 9:
    case 644:
    case 205:
    case 585:
    case 584:
    case 674:
    case 905:
    case 776:
    case 778:
    case 398:
    case 689:
    case 690:
    case 405:
    case 12:
    case 255:
    case 232:
    case 710:
    case 544:
    case 868:
    case 882:
    case 869:
        return 1;
    case 239:
        if (clip->end * 2 == 0)
            return 1;
        if (!(descriptor->phase < (f32)(clip->start * 2)) &&
            descriptor->phase <= (f32)(clip->end * 2))
            return 1;
        break;
    }
    state = actor->state;
    switch (state) {
    case 71:
    case 50:
        return 1;
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
        return 1;
    case 44:
    case 48:
    case 12:
    case 13:
    case 68:
    case 16:
    case 17:
    case 18:
    case 20:
    case 31:
    case 32:
    case 33:
    case 34:
    case 41:
    case 66:
    case 53:
    case 145:
    case 137:
    case 138:
    case 140:
    case 135:
    case 173:
    case 143:
    case 144:
    case 131:
    case 255:
    case 70:
    case 79:
    case 54:
        return 1;
    case 163:
    case 130:
    case 157:
    case 253:
    case 224:
        return 0;
    default:
        return state >= 128;
    }
}
