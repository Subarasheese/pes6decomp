/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_pad_setup.h"

extern s32 D_003E9B0C;
extern s32 func_0030C2D0(void);

void func_0024E1C0(u32 pad, MatchPadSlot *slots) {
    s32 i, current = func_0024E650(), mask = D_003D8BE0[pad];
    if (!(D_003E9B20 & mask)) {
        if (matchPadSideKind(slots[pad].side) != 11 && D_003AA1F0[pad] != 0) {
            if (Pes6SaveData_GetUnavailableFlag()) {
                if (pad < 2) {
                    slots[pad].side = 10;
                    slots[pad].state = 0;
                    D_0053CB40[pad] = 0;
                    matchPadRedrawAll();
                }
            } else {
                if ((!func_0030C2D0() || (pad != 0 && pad != 1)) &&
                    ((u8)func_002259E0() != 1 || pad != 0))
                    slots[pad].side = 10;
                slots[pad].state = 0;
                D_0053CB40[pad] = 0;
                matchPadRedrawAll();
            }
        }
    }
    if ((D_003E9B20 & mask) && D_003AA1F0[pad] == 0) {
        if (D_003AA3A0[pad] != 10 && matchPadSideKind(D_003AA3A0[pad]) != 11)
            slots[pad].side = D_003AA3A0[pad];
        else {
            if (func_0030C2D0() && pad < 2) {
                if (pad == 0)
                    slots[pad].side = -1;
                else
                    slots[pad].side = 1;
            } else
                slots[pad].side = 0;
        }
        if (pad == D_003E9AFC) {
            D_003E9AFC = current;
            D_0053CB40[current] = 0;
            Pes6PadAssign[current].state = 0;
        }
        D_0053CB40[pad] = 0;
        Pes6PadAssign[pad].state = 0;
        matchPadRedrawAll();
    }
    if (current != D_003E9B0C) {
        s32 previous = D_003E9B0C;
        D_003E9AFC = current;
        D_0053CB40[current] = 0;
        Pes6PadAssign[current].state = 0;
        D_0053CB40[previous] = 0;
        Pes6PadAssign[previous].state = 0;
        for (i = 0; i < MATCH_PAD_COUNT; i++) {
            if (!matchPadConnected(i)) {
                D_0053CB40[i] = 0;
                Pes6PadAssign[i].state = 0;
            }
        }
        func_0023EC10(&D_003E9B10, PAD_REDRAW_CURSORS);
    }
    if (Pes6SaveData_GetUnavailableFlag()) {
        for (i = 0; i < 2; i++)
            if (!D_0053CB40[i])
                D_0053CB40[i] = 2;
    }
    D_003AA1F0[pad] = D_003E9B20 & mask;
}
