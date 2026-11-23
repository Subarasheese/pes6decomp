/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_pad_setup.h"

extern s32 func_0024DFC0(void);
extern s32 func_0023F240(u16, s32, s32, s32);

void func_00248EB0(s32 pad, s32 slot, MatchPadSlot *slots) {
    s32 previous = D_0053CB40[slot], current = func_0024E650();
    switch (D_008DC230[pad]) {
    case 64:
        do {
            D_0053CB40[slot] = func_0023F240((u16)D_008DC230[pad], D_0053CB40[slot], 0, 4);
            if (!Pes6SaveData_GetUnavailableFlag()) {
                if (D_0053CB40[slot] == 1)
                    D_0053CB40[slot] = 0;
                if (D_0053CB40[slot] == 3 && slots[slot].assignment == 0)
                    D_0053CB40[slot] = 2;
                {
                    s32 side = Pes6PadAssign[slot].side;
                    if (matchPadSideKind(side) == 4 || matchPadSideKind(side) == 11) {
                        if (D_0053CB40[slot] == 0 || D_0053CB40[slot] == 4)
                            break;
                    } else if (matchPadSideKind(side) == 10 || matchPadSideKind(side) == 0 ||
                               matchPadSideKind(side) == 3) {
                        if (D_0053CB40[slot] == 0)
                            break;
                    } else
                        break;
                }
            } else {
                if (D_0053CB40[slot] == 2 || D_0053CB40[slot] == 3)
                    break;
            }
        } while (1);
        func_0023EC10(&D_003E9B10, PAD_REDRAW_CURSORS);
        if (previous != D_0053CB40[slot])
            SD_call(0x8400F802);
        break;
    case 128:
        do {
            D_0053CB40[slot] = func_0023F240((u16)D_008DC230[pad], D_0053CB40[slot], 0, 4);
            if (!Pes6SaveData_GetUnavailableFlag()) {
                if (D_0053CB40[slot] == 5)
                    D_0053CB40[slot] = 0;
                if (D_0053CB40[slot] == 1)
                    D_0053CB40[slot] = 2;
                if (D_0053CB40[slot] == 3 && slots[slot].assignment == 0)
                    D_0053CB40[slot] = 4;
                {
                    s32 side = Pes6PadAssign[slot].side;
                    if (matchPadSideKind(side) == 4 || matchPadSideKind(side) == 11) {
                        if (D_0053CB40[slot] == 0 || D_0053CB40[slot] == 4)
                            break;
                    } else if (matchPadSideKind(side) == 10 || matchPadSideKind(side) == 0 ||
                               matchPadSideKind(side) == 3) {
                        if (D_0053CB40[slot] == 0)
                            break;
                    } else
                        break;
                }
            } else {
                if (D_0053CB40[slot] == 2 || D_0053CB40[slot] == 3)
                    break;
            }
        } while (1);
        func_0023EC10(&D_003E9B10, PAD_REDRAW_CURSORS);
        if (previous != D_0053CB40[slot])
            SD_call(0x8400F802);
        break;
    }
    switch (D_008DC270[pad]) {
    case 1:
        if (D_0053CB40[slot] == 0) {
            if (func_0024DFC0() == 1) {
                SD_call(0x8C008005);
                return;
            }
            D_0053CB40[slot] = 1;
        }
        slots[slot].state = D_0053CB40[slot];
        func_0023EC10(&D_003E9B10, PAD_REDRAW_CURSORS);
        SD_call(0x84028400);
        break;
    case 2:
        if (pad == current) {
            SD_call(0x84008401);
            D_0053CB40[current] = 6;
            slots[current].state = 6;
            D_003E9AFC = 8;
            func_0023EC10(&D_003E9B10, PAD_REDRAW_CURSORS);
        }
        break;
    }
}
