/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_pad_assignment.h"

extern s32 Pes6SceneStack[];
extern s32 func_002DCA30(void);
extern s32 func_0024DFA0(void);

void func_00248BE0(s32 pad, s32 slot, MatchPadSlot *slots) {
    u8 selection = pad;
    s32 side;
    if (func_002DCA30()) {
        if (pad == 0)
            selection = 0;
        if (pad == 1)
            selection = 1;
    }
    side = slots[selection].side;
    switch (side > 0 ? side : -side) {
    case 1:
    case 2:
        switch (D_008DC230[pad]) {
        case 64: {
            s8 canDecrease = 0;
            if (func_0024DFA0() == 1) {
                if (Pes6SceneStack[0] == 15) {
                    if (slots[selection].assignment != 2)
                        canDecrease = 1;
                } else {
                    if (slots[selection].assignment != 1)
                        canDecrease = 1;
                }
            } else {
                if (slots[selection].assignment != 0)
                    canDecrease = 1;
            }
            if (canDecrease == 1) {
                slots[selection].assignment--;
                SD_call(0x8400F803);
                func_0023EC10(&D_003E9B10, PAD_REDRAW_ASSIGNMENTS);
            }
            if (slots[selection].assignment == 0)
                slots[selection].option = 0;
            break;
        }
        case 128:
            if (slots[selection].assignment != 10) {
                slots[selection].assignment++;
                SD_call(0x8400F803);
                func_0023EC10(&D_003E9B10, PAD_REDRAW_ASSIGNMENTS);
            }
            break;
        }
        break;
    }
    switch (D_008DC270[pad]) {
    case 1:
        slots[slot].state = 0;
        SD_call(0x84028400);
        func_0023EC10(&D_003E9B10, PAD_REDRAW_CURSORS);
        break;
    case 2:
        slots[slot].state = 0;
        SD_call(0x84008401);
        func_0023EC10(&D_003E9B10, PAD_REDRAW_CURSORS);
        break;
    }
    if (func_0024DFA0() == 1 && slots[selection].assignment == 0) {
        SD_call(0);
        slots[selection].assignment = 2;
    }
}
