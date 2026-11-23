/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_pad_setup.h"

extern s32 func_0024DFC0(void);
extern s32 func_0023E090(void);
extern s32 func_0024DFA0(void);
extern s8 D_003E9AF8;
extern s32 D_003E9B0C;
extern void func_002474F0(s32, s32, MatchPadSlot *);
extern void func_002476E0(s32, s32, MatchPadSlot *);
extern void func_0024CAE0(MatchPadSlot *);
extern void func_002407D0(void);
extern void func_0024BBB0(void);

void func_0024A080(void) {
    s32 i;
    s8 savedSides[MATCH_PAD_COUNT];
    D_003E9B20 = (u8)func_00154530();
    D_003E9AF8 = 0;
    D_003E9AFC = 0;
    D_003E9B0C = func_0024E650();
    for (i = 0; i < MATCH_PAD_COUNT; i++) {
        if (matchPadConnected(i))
            D_003AA1F0[i] = 0;
        else
            D_003AA1F0[i] = -1;
        savedSides[i] = Pes6PadAssign[i].side;
        func_0024E1C0(i, Pes6PadAssign);
    }
    for (i = 0; i < MATCH_PAD_COUNT; i++) {
        if (D_003E9B0C == i) {
            D_0053CB40[i] = 6;
            D_003E9AFC = 8;
            Pes6PadAssign[i].state = 6;
        } else if (matchPadConnected(i)) {
            if (!func_0024DFC0() || matchPadSideKind(Pes6PadAssign[i].side) == 1 ||
                matchPadSideKind(Pes6PadAssign[i].side) == 2) {
                D_0053CB40[i] = 1;
                Pes6PadAssign[i].state = 1;
            } else {
                D_0053CB40[i] = 0;
                Pes6PadAssign[i].state = 0;
            }
        } else {
            D_0053CB40[i] = 0;
            Pes6PadAssign[i].state = 0;
        }
    }
    for (i = 0; i < MATCH_PAD_COUNT; i++) {
        if (func_0023E090())
            func_002476E0(i, savedSides[i], Pes6PadAssign);
        else if (D_00591C09[0] == 5) {
            if (matchPadSideKind(Pes6PadAssign[i].side) == 2)
                Pes6PadAssign[i].side = -1;
            func_002474F0(i, savedSides[i], Pes6PadAssign);
        }
    }
    func_0024CAE0(Pes6PadAssign);
    if (func_0024DFA0() == 1)
        for (i = 0; i < MATCH_PAD_COUNT; i++) {
            if (Pes6PadAssign[i].assignment == 0)
                Pes6PadAssign[i].assignment = 2;
        }
    func_0024C810(0, Pes6PadAssign);
    func_002407D0();
    func_0024BBB0();
    func_0024C310();
    matchPadRedrawAll();
}
