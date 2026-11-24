/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_pad_assignment.h"
#include "pes6/overlay_module.h"

extern s32 Pes6SceneStack[];
extern s32 D_003E9B24;
extern s32 D_003E9B0C;
extern s16 D_003E9AFC;
extern s8 D_003E9AA0;
extern void func_0024A080(void);
extern void func_00249E90(void);
extern void func_00154540(void);
extern void func_00249380(s32, s32, MatchPadSlot *);
extern void func_00240610(void);
extern void func_002407D0(void);
extern void func_002472F0(MatchPadSlot *);
extern void func_008B34C0(void);
extern void func_0023EA10(s32);
extern void func_0023E0E0(s32);
extern void func_008B36F0(void);
extern void Pes6MatchSelect_CheckPadChanges(void);
extern u8 func_00154530(void);
extern s32 func_001B68B0(void);
extern s32 func_00249700(s16 *, MatchPadSlot *);
extern s32 func_0024DF20(void);
extern s32 func_00240680(void);
extern s32 func_0024D980(void);
extern s32 func_00249CA0(void);
extern s32 Pes6FormationMenu_Run(void);
extern s32 Pes6MatchSelect_AnyPadAssigned(void);

s32 func_0024A380(s16 controller) {
    s32 pad, result, i;
    (void)controller;

    switch (D_003E9B00) {
    case 0:
        func_0024A080();
        D_003E9B24 = 0;
        D_003E9B00++;
        func_00249E90();
        break;
    case 1:
        func_00249E90();
        if (func_001B68B0())
            D_003E9B00 = 2;
        break;
    case 2:
        func_00249E90();
        pad = func_0024E650();
        func_00154540();
        D_003E9B20 = (u8)func_00154530();
        result = func_00249700(&D_003E9AFC, Pes6PadAssign);
        if (result == 0) {
            for (i = 0; i < MATCH_PAD_COUNT; i++)
                func_00249380(i, i, Pes6PadAssign);
        }
        D_003E9B0C = pad;
        D_003E9B24 = result;
        switch (result) {
        case 2:
            D_003E9B00 = 10;
            break;
        case 1:
            D_003E9B00 = 10;
            break;
        }
        if (func_0024DF20() == 1) {
            func_00240610();
            func_002407D0();
            if (func_00240680() == 1) {
                SD_call(0x84028400);
                func_002472F0(Pes6PadAssign);
                func_008B34C0();
                D_003E9B00 = 5;
                D_003E9B24 = 2;
            }
        }
        break;
    case 3:
        switch (func_0024D980()) {
        case 1:
        case 2:
            func_0023EC10(&D_003E9B10, PAD_REDRAW_NAMES);
            D_003E9B00 = 2;
            break;
        }
        break;
    case 5:
        func_0023EA10(0);
        if (func_00249CA0()) {
            D_003E9AA0 = 0;
            D_003E9B00 = 6;
            func_008B34C0();
            func_001FC780(4);
            func_0023E0E0(31);
        }
        break;
    case 6:
        if (Pes6FormationMenu_Run() == 1) {
            func_008B36F0();
            D_003E9B00 = 0;
        }
        break;
    case 7:
        func_0023EA10(0);
        if (func_00249CA0()) {
            D_003E9B00 = 8;
            func_008B34C0();
            func_001FC780(4);
        }
        break;
    case 8:
        if (Pes6FormationMenu_Run() == 1) {
            func_008B36F0();
            D_003E9AA0 = 0;
            D_003E9B00 = 0;
            return D_003E9B24;
        }
        break;
    case 10:
        Pes6MatchSelect_CheckPadChanges();
        if (D_003E9B24 == 2 && Pes6SceneStack[0] != 4 && Pes6MatchSelect_AnyPadAssigned() == 1) {
            D_003E9B00 = 7;
            func_008B34C0();
        } else
            D_003E9B00 = 11;
        break;
    case 11:
        if (func_00249CA0()) {
            D_003E9B00 = 0;
            return D_003E9B24;
        }
        break;
    default:
        break;
    }
    return 0;
}
