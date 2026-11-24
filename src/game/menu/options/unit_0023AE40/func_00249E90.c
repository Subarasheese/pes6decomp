/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_pad_assignment.h"

extern void func_0024BE20(s8);
extern void func_0024BC80(s8);
extern void func_0024AE40(s32);
extern void func_0024B770(MatchPadSlot *);
extern void func_0024A710(MatchPadSlot *);
extern void func_0024AF00(void);
extern void func_0024ABF0(void);
extern void func_0023B3B0(s32, s32);
extern void func_0023EA10(s32);
extern void func_0024BBB0(void);
extern s32 func_0023B380(s32);
extern s16 D_003E9AFC;

void func_00249E90(void) {
    s32 i, pad = func_0024E650();
    if ((D_003E9B10 & PAD_REDRAW_SIDES) == PAD_REDRAW_SIDES) {
        for (i = 0; i < MATCH_PAD_COUNT; i++) {
            func_0024BE20(i);
            func_0024AE40(i);
        }
        func_0024B770(Pes6PadAssign);
    }
    if ((D_003E9B10 & PAD_REDRAW_ASSIGNMENTS) == PAD_REDRAW_ASSIGNMENTS) {
        for (i = 0; i < MATCH_PAD_COUNT; i++)
            func_0024BC80(i);
        func_0024AF00();
        func_0024B770(Pes6PadAssign);
    }
    if ((D_003E9B10 & PAD_REDRAW_CURSORS) == PAD_REDRAW_CURSORS) {
        func_0024A710(Pes6PadAssign);
        func_0024B770(Pes6PadAssign);
    }
    if ((D_003E9B10 & PAD_REDRAW_NAMES) == PAD_REDRAW_NAMES) {
        func_0024ABF0();
        func_0024B770(Pes6PadAssign);
    }
    for (i = 0; i < MATCH_PAD_COUNT; i++) {
        if (!func_0023B380(i))
            func_0023B3B0(i, i + MATCH_PAD_COUNT);
        if (!func_0023B380(i + MATCH_PAD_COUNT))
            func_0023B3B0(i + MATCH_PAD_COUNT, i);
    }
    if (D_003E9AFC >= 8) {
        switch (Pes6PadAssign[pad].state) {
        case 6:
            func_0023EA10(0xc90011);
            break;
        case 5:
            func_0023EA10(0xc9000e);
            break;
        }
    } else
        func_0023EA10(0xc9000a);
    func_0024BBB0();
    D_003E9B10 = 0;
}
