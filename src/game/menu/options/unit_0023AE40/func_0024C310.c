/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_pad_setup.h"

typedef struct {
    f32 x, y;
    s32 level, maximum, bank, below, previous, next, part;
} PadSelector;

extern s32 D_0095D930[];
extern void *D_0053CD50[];
extern void func_008B30A0(s32, s32, s32);
extern void func_0023F510(s32);
extern void func_002405D0(void *, s32, s32);
extern void func_002DF6E0(void *, f32);
extern void func_008B3210(s32, u16, s32);
extern void func_00363D40(void *, f32);
extern void func_0024BC80(s8);
extern void func_0023B460(s32, s32);
extern void func_0023B410(s32);
extern void func_0023E780(s32);
extern void func_001B9030(s32, s32, s32);
extern s32 func_001CDA50(s32);
extern s32 func_008B33C0(s32);
extern void *func_002DFC30(s32);
extern void *func_00363E60(const PadSelector *);

void func_0024C310(void) {
    PadBounds bounds;
    PadSelector settings;
    s32 bank, i;
    if (Pes6SceneStack[0] == 4)
        func_008B30A0(0x158, 0x4fcc, 5);
    if (Pes6SceneStack[0] == 4)
        bank = D_0095D930[func_001CDA50(1)];
    else {
        if (Pes6SceneStack[0] != 5)
            func_0023F510(6);
        bank = 0x1038d;
    }
    D_003E9B1C = func_008B33C0(bank);
    func_002405D0(&D_003E9B18, MATCH_PAD_PANEL_COUNT, 4);
    func_002405D0(&D_003E9B14, MATCH_PAD_TEXT_COUNT, 4);
    D_003E9B18->handles[16] = func_008B3310(D_003E9B1C, 16, 0, 2, 0, 1);
    D_003E9B14[21] = func_008B2F50(D_003E9B18->handles[16], 21);
    D_003E9B14[22] = func_008B2F50(D_003E9B18->handles[16], 22);
    D_003E9B18->handles[2] = func_008B3310(D_003E9B1C, 2, 0, 2, 0, 1);
    D_003E9B18->handles[12] = func_008B3310(D_003E9B1C, 12, 0, 2, 0, 1);
    D_003E9B18->handles[3] = func_008B3310(D_003E9B1C, 3, 0, 2, 0, 1);
    D_003E9B18->handles[28] = func_008B3310(D_003E9B1C, 28, 0, 2, 0, 1);
    D_003E9B14[23] = func_008B2F50(D_003E9B18->handles[28], 23);
    D_003E9B18->handles[37] = func_008B3310(D_003E9B1C, 37, 0, 2, 0, 1);
    D_003E9B14[24] = func_008B2F50(D_003E9B18->handles[37], 24);
    D_003E9B14[0] = func_008B2F50(D_003E9B18->handles[2], 0);
    D_003E9B18->handles[0] = func_008B3310(D_003E9B1C, 0, 0, 0, 0, 1);
    D_003E9B18->handles[1] = func_008B3310(D_003E9B1C, 1, 0, 0, 0, 1);
    settings.maximum = 8;
    settings.bank = bank;
    settings.below = -1;
    settings.previous = 14;
    settings.next = 15;
    settings.part = 82;
    for (i = 0; i < MATCH_PAD_COUNT; i++) {
        D_0053CB90[i] = func_002DFC30(3);
        func_002DF6E0(D_0053CB90[i], func_008B32A0(D_003E9B18->handles[0], 0));
        D_003E9B18->handles[4 + i] = func_008B3310(D_003E9B1C, 4 + i, 0, 0, 0, 1);
        D_003E9B14[4 + i] = func_008B2F50(D_003E9B18->handles[4 + i], 4 + i * 2);
        D_003E9B18->byPad.assignmentMarkers[i] = func_008B3310(D_003E9B1C, 13, 0, 0, 0, 1);
        func_008B3210(D_003E9B18->handles[12], (u16)(50 + i),
                      D_003E9B18->byPad.assignmentMarkers[i]);
        func_008B32B0(D_003E9B18->handles[12], &bounds, (u16)(50 + i));
        settings.x = bounds.x;
        settings.y = bounds.y;
        settings.level = Pes6PadAssign[i].assignment - 2;
        D_0053CD50[i] = func_00363E60(&settings);
        func_00363D40(D_0053CD50[i], func_008B32A0(D_003E9B18->handles[12], (u16)(50 + i)));
        func_0024BC80((s8)i);
        func_0024BE20((s8)i);
        func_0023B460(i, 0);
        func_0023B410(i);
        func_0023B460(i + MATCH_PAD_COUNT, 1);
        func_0023B410(i + MATCH_PAD_COUNT);
        D_003E9B18->byPad.sideMarkers[i] = func_008B3310(D_003E9B1C, 38 + i, 0, 2, 0, 1);
    }
    func_0024AF00();
    func_0024ABF0();
    D_003E9B14[1] = func_008B2F50(D_003E9B18->handles[2], 1);
    D_003E9B14[2] = func_008B2F50(D_003E9B18->handles[2], 2);
    if (Pes6SceneStack[0] == 4)
        func_0023E780(0x10005);
    else
        func_001B9030(0, 0x10005, 1);
    func_0023EC10(&D_003E9B10, PAD_REDRAW_SIDES);
    func_0023EC10(&D_003E9B10, PAD_REDRAW_CURSORS);
}
