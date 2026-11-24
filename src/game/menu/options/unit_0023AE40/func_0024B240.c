/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_pad_setup.h"

extern s32 D_003EAA0C;
extern void func_0023B360(s32, s32);
extern s32 func_0023E090(void);
extern s32 func_0030C2D0(void);
extern s32 func_002631D0(void);

void func_0024B240(MatchPadSlot *slots) {
    s32 i, j;
    if (D_00591C09[0] == 5) {
        s8 mode;
        if (Pes6SceneStack[0] == 4) {
            if (D_003EAA0C == 1)
                mode = 2;
            else
                mode = 3;
        } else
            mode = func_002631D0();
        if (mode == 2) {
            for (i = 0; i < MATCH_PAD_COUNT; i++)
                if (slots[i].state == 1) {
                    if (i == 0) {
                        func_0023B360(i + MATCH_PAD_COUNT, 0);
                        for (j = 1; j < MATCH_PAD_COUNT; j++) {
                            if (matchPadSideKind(slots[j].side) == 3)
                                func_0023B360(i, 0);
                        }
                    } else {
                        for (j = 0; j < MATCH_PAD_COUNT; j++) {
                            if (matchPadSideKind(slots[j].side) == 3 && i != j &&
                                Pes6PadAssign[i].side != 0 && Pes6PadAssign[i].side != 10)
                                func_0023B360(i, 0);
                        }
                    }
                    if (Pes6PadAssign[i].side == 0 || Pes6PadAssign[i].side == 10)
                        func_0023B360(i + MATCH_PAD_COUNT, 0);
                }
        } else {
            for (i = 0; i < MATCH_PAD_COUNT; i++)
                if (slots[i].state == 1) {
                    func_0023B360(i, 0);
                    func_0023B360(i + MATCH_PAD_COUNT, 0);
                }
        }
    } else {
        if (func_0023E090()) {
            if ((u8)func_002259E0() < 2) {
                for (i = 0; i < MATCH_PAD_COUNT; i++)
                    if (slots[i].state == 1) {
                        if ((u32)(slots[0].side + 3) < 3) {
                            if (i == 0)
                                func_0023B360(8, 0);
                            if (slots[i].side == 0)
                                func_0023B360(i + MATCH_PAD_COUNT, 0);
                        } else {
                            if (i == 0)
                                func_0023B360(0, 0);
                            if (slots[i].side == 0)
                                func_0023B360(i, 0);
                        }
                    }
            }
        } else {
            if (func_0030C2D0() == 1) {
                if (slots[0].state == 1)
                    func_0023B360(8, 0);
                if (slots[1].state == 1)
                    func_0023B360(1, 0);
            }
        }
    }
}
