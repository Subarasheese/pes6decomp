/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_pad_setup.h"

extern void func_008B31E0(s32, u16);
extern void func_002DF0A0(void *, PadBounds *);
extern void func_002DF880(void *, s32);
extern void func_002DF8E0(void *, s32);
extern s32 func_002DF870(void *);

void func_0024A710(MatchPadSlot *slots) {
    s32 stateFrames[7] = {6, 0, 1, 2, 3, 4, 5};
    PadBounds anchor, size, cursor;
    s32 current, i, column, slot, padCount = MATCH_PAD_COUNT;
    current = func_0024E650();
    if (Pes6SaveData_GetUnavailableFlag()) {
        stateFrames[2] = 0;
        stateFrames[3] = 1;
        stateFrames[6] = 2;
        padCount = 2;
    }
    for (i = 0; i < padCount; i++) {
        if (current != i) {
            slot = i;
            if (func_002DF870(D_0053CB90[i]) != 4)
                func_002DF880(D_0053CB90[i], 4);
        } else {
            if (current == i && D_003E9AFC < MATCH_PAD_COUNT)
                slot = D_003E9AFC;
            else
                slot = i;
            if (func_002DF870(D_0053CB90[i]) != 3)
                func_002DF880(D_0053CB90[i], 3);
        }
        switch (D_0053CB40[slot]) {
        case 1:
            switch (slots[slot].side) {
            case -1:
            case -4:
            case -2:
            case -11:
            case -3:
                column = 0;
                break;
            case 1:
            case 4:
            case 2:
            case 11:
            case 3:
                column = 2;
                break;
            default:
                column = 1;
                break;
            }
            func_008B31E0(D_003E9B18->handles[0], stateFrames[D_0053CB40[slot]]);
            func_008B31E0(D_003E9B18->handles[1], stateFrames[D_0053CB40[slot]]);
            func_008B32B0(D_003E9B18->handles[0], &size, 0);
            func_008B32B0(D_003E9B18->handles[1], &anchor, 1);
            cursor.x = anchor.x + anchor.w * column + 0.0f;
            cursor.y = anchor.y + anchor.h * slot + 0.0f;
            cursor.w = size.w;
            cursor.h = size.h;
            func_002DF0A0(D_0053CB90[i], &cursor);
            break;
        case 6:
        case 5:
            func_008B31E0(D_003E9B18->handles[0], stateFrames[D_0053CB40[slot]]);
            func_008B31E0(D_003E9B18->handles[1], stateFrames[D_0053CB40[slot]]);
            func_008B32B0(D_003E9B18->handles[0], &size, 0);
            func_008B32B0(D_003E9B18->handles[1], &anchor, 1);
            cursor.x = anchor.x;
            cursor.y = anchor.y;
            cursor.w = size.w;
            cursor.h = size.h;
            func_002DF0A0(D_0053CB90[i], &cursor);
            break;
        default:
            func_008B31E0(D_003E9B18->handles[0], stateFrames[D_0053CB40[slot]]);
            func_008B31E0(D_003E9B18->handles[1], stateFrames[D_0053CB40[slot]]);
            func_008B32B0(D_003E9B18->handles[0], &size, 0);
            func_008B32B0(D_003E9B18->handles[1], &anchor, 1);
            cursor.x = anchor.x;
            cursor.y = anchor.y + anchor.h * slot + 0.0f;
            cursor.w = size.w;
            cursor.h = size.h;
            func_002DF0A0(D_0053CB90[i], &cursor);
            break;
        }
        switch (matchPadSideKind(slots[i].side)) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            func_002DF8E0(D_0053CB90[i], 1);
            break;
        default:
            func_002DF8E0(D_0053CB90[i], 0);
            break;
        }
    }
}
