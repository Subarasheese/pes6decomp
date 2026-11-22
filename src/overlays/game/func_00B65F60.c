/* compiler: mwcc-3.0.1b151 */
#include "types.h"

typedef struct {
    u8 before_turn[0x2d];
    u8 turn;
} CommandDescriptor;
typedef struct {
    u8 before_descriptor[4];
    CommandDescriptor *descriptor;
    u8 before_stage[0x10];
    u16 stage;
    u8 before_heading[0xc];
    u16 heading;
    u8 before_previous[4];
    u16 previous;
    u8 before_choice[0x20];
    u8 choice;
} CommandActor;
typedef struct {
    u8 before_kind[0x4c];
    u8 kind;
} CommandMode;
typedef struct {
    CommandActor *actor;
    CommandMode *mode;
} CommandState;

extern u8 D_00591F24[];
extern int func_00BBB8C0(int limit);
extern void func_002075B0(CommandDescriptor *descriptor, s32 clip, int progress, int flags);

void func_00B65F60(CommandState *state) {
    CommandActor *actor = state->actor;
    int difference = actor->heading - actor->previous;
    if (difference != 0 && state->mode->kind != 68) {
        actor->descriptor->turn = ((difference + 0x10000) & 0xFFFF) <= 0x8000;
    }
    switch (state->mode->kind) {
    case 0:
        func_002075B0(state->actor->descriptor, 0x415, 0, 8);
        break;
    case 1:
        func_002075B0(state->actor->descriptor, 0x416, 0, 8);
        break;
    case 2:
        func_002075B0(state->actor->descriptor, 0x45b, 0, 8);
        break;
    case 3:
        func_002075B0(state->actor->descriptor, 0x41b, 0, 8);
        break;
    case 6:
        func_002075B0(state->actor->descriptor, 0x41c, 0, 8);
        break;
    case 7:
        func_002075B0(state->actor->descriptor, 0x41d, 0, 8);
        break;
    case 10:
        func_002075B0(state->actor->descriptor, 0x424, 0, 8);
        break;
    case 11:
        func_002075B0(state->actor->descriptor, 0x425, 0, 8);
        break;
    case 12:
        func_002075B0(state->actor->descriptor, 0x426, 0, 8);
        break;
    case 13:
        func_002075B0(state->actor->descriptor, 0x463, 0, 8);
        break;
    case 14:
        func_002075B0(state->actor->descriptor, 0x427, 0, 8);
        break;
    case 15:
        func_002075B0(state->actor->descriptor, 0x4a7, 0, 8);
        break;
    case 16:
        func_002075B0(state->actor->descriptor, 0x478, 0, 8);
        break;
    case 17:
        func_002075B0(state->actor->descriptor, 0x42d, 0, 8);
        break;
    case 19:
        func_002075B0(state->actor->descriptor, 0x42f, 0, 8);
        break;
    case 21:
        func_002075B0(state->actor->descriptor, 0x43d, 0, 8);
        break;
    case 22:
        func_002075B0(state->actor->descriptor, 0x43e, 0, 8);
        break;
    case 23:
        func_002075B0(state->actor->descriptor, 0x43f, 0, 8);
        break;
    case 24:
        func_002075B0(state->actor->descriptor, 0x4aa, 0, 8);
        break;
    case 26:
        func_002075B0(state->actor->descriptor, 0x441, 0, 8);
        break;
    case 27:
        func_002075B0(state->actor->descriptor, 0x445, 0, 8);
        break;
    case 28:
        func_002075B0(state->actor->descriptor, 0x438, 0, 8);
        break;
    case 29:
        func_002075B0(state->actor->descriptor, 0x473, 0, 8);
        break;
    case 31:
        func_002075B0(state->actor->descriptor, 0x4b2, 0, 8);
        break;
    case 32:
        state->actor->choice = 0xff;
        func_002075B0(state->actor->descriptor, 0x4a3, 48, 8);
        break;
    case 33:
        func_002075B0(state->actor->descriptor, 0x3f5, 0, 8);
        break;
    case 34:
        func_002075B0(state->actor->descriptor, 0x458, 0, 8);
        break;
    case 35:
        func_002075B0(state->actor->descriptor, 0x3f7, 0, 8);
        break;
    case 36:
        func_002075B0(state->actor->descriptor, 0x3f9, 0, 8);
        break;
    case 37:
        func_002075B0(state->actor->descriptor, 0x423, 0, 8);
        break;
    case 38:
        func_002075B0(state->actor->descriptor, 0x3fb, 0, 8);
        break;
    case 39:
        func_002075B0(state->actor->descriptor, 0x58b, 0, 8);
        break;
    case 40:
        func_002075B0(state->actor->descriptor, 0x470, 0, 8);
        break;
    case 41:
        func_002075B0(state->actor->descriptor, 0x3fc, 0, 8);
        break;
    case 42:
        func_002075B0(state->actor->descriptor, 0x3fd, 0, 8);
        break;
    case 43:
        func_002075B0(state->actor->descriptor, 0x46c, 0, 8);
        break;
    case 44:
        func_002075B0(state->actor->descriptor, 0x46d, 0, 8);
        break;
    case 45:
        func_002075B0(state->actor->descriptor, 0x405, 0, 8);
        break;
    case 46:
        func_002075B0(state->actor->descriptor, 0x428, 0, 8);
        break;
    case 47:
        func_002075B0(state->actor->descriptor, 0x407, 0, 8);
        break;
    case 48:
        func_002075B0(state->actor->descriptor, 0x46e, 0, 8);
        break;
    case 49:
        func_002075B0(state->actor->descriptor, 0x465, 0, 8);
        break;
    case 50:
        func_002075B0(state->actor->descriptor, 0x446, 0, 8);
        break;
    case 52:
        func_002075B0(state->actor->descriptor, 0x45d, 0, 8);
        break;
    case 55:
        func_002075B0(state->actor->descriptor, 0x48b, 0, 8);
        break;
    case 56:
        func_002075B0(state->actor->descriptor, 0x475, 0, 8);
        break;
    case 57:
        func_002075B0(state->actor->descriptor, 0x454, 0, 8);
        break;
    case 58:
        func_002075B0(state->actor->descriptor, 0x45a, 0, 8);
        break;
    case 59:
        state->actor->choice = (u8)(func_00BBB8C0(3) + 1);
        func_002075B0(state->actor->descriptor, 0x455, 0, 8);
        break;
    case 60:
        func_002075B0(state->actor->descriptor, 0x456, 0, 8);
        break;
    case 61:
        func_002075B0(state->actor->descriptor, 0x44b, 0, 8);
        break;
    case 68:
        state->actor->choice = 0xff;
        func_002075B0(state->actor->descriptor, 0x48d, 0, 8);
        break;
    }

    switch (D_00591F24[0]) {
    case 2:
    case 6:
    case 3:
    case 5:
        state->actor->stage = 15;
        break;
    default:
        state->actor->stage++;
        break;
    }
}
