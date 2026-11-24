/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_pad_assignment.h"

extern s32 Pes6SceneStack[];
extern s32 D_003EAA0C;
extern s32 func_002631D0(void);

void func_002474F0(s32 pad, s32 savedSide, MatchPadSlot *slots) {
    s8 mode;
    if (Pes6SceneStack[0] == 4) {
        if (D_003EAA0C == 1)
            mode = 2;
        else
            mode = 3;
    } else
        mode = func_002631D0();
    if (mode == 2) {
        if (slots[pad].side > 0) {
            if (matchPadConnected(pad))
                slots[pad].side = 0;
            else
                slots[pad].side = 10;
        }
        if (slots[pad].side == -2)
            slots[pad].side = -3;
        if (slots[0].side == -4)
            slots[0].side = -1;
        if (slots[0].side == 0 || slots[0].side == 10)
            slots[0].side = savedSide;
    } else {
        if (pad == 0) {
            if (slots[0].side >= 0)
                slots[0].side = -1;
        } else {
            if (matchPadConnected(pad))
                slots[pad].side = 0;
            else
                slots[pad].side = 10;
        }
        if (slots[pad].side == -3)
            Pes6PadAssign[pad].side = -1;
    }
}
