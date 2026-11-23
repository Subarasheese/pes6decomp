/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_pad_setup.h"

extern s32 func_00247460(s32);
extern s32 D_003E9B28;
extern void func_0023B2C0(s32, s32, s32);
extern void func_0023B360(s32, s32);

void func_0024B570(MatchPadSlot *slots, s8 pad) {
    if (slots[pad].state == 1) {
        if (slots[pad].side < 0) {
            func_0023B2C0(pad, D_003E9B18->handles[2], pad + 2);
            func_0023B2C0(pad + MATCH_PAD_COUNT, D_003E9B18->handles[2], pad + 10);
        } else if (slots[pad].side == 0 || slots[pad].side == 10) {
            func_0023B2C0(pad, D_003E9B18->handles[2], pad + 10);
            func_0023B2C0(pad + MATCH_PAD_COUNT, D_003E9B18->handles[2], pad + 18);
        } else {
            func_0023B2C0(pad, D_003E9B18->handles[2], pad + 18);
            func_0023B2C0(pad + MATCH_PAD_COUNT, D_003E9B18->handles[2], pad + 26);
        }
        if (matchPadSideKind(slots[pad].side) == 10) {
            if (!func_00247460(0))
                func_0023B360(pad, 0);
            if (!func_00247460(1))
                func_0023B360(pad + MATCH_PAD_COUNT, 0);
        }
        if (slots[pad].side == -11)
            func_0023B360(pad, 0);
        if (slots[pad].side == 11)
            func_0023B360(pad + MATCH_PAD_COUNT, 0);
        if (D_003E9B28 == 1) {
            if (slots[pad].side < 0)
                func_0023B360(pad + MATCH_PAD_COUNT, 0);
            else
                func_0023B360(pad, 0);
        }
        func_0024B240(slots);
        func_0023EC10(&D_003E9B10, PAD_REDRAW_CURSORS);
    }
}
