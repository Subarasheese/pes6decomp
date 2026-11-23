/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_option_slots.h"

extern u8 D_00591C09[];
extern void func_008B9C60(void);
typedef struct {
    u8 reserved00[16];
    s32 mask;
} MatchPanel;
extern MatchPanel Pes6Scene_Menu_State[];
extern s8 D_003E9AC4, D_003E9AE4, D_0053C9A3[];
extern void func_00245C80(void), func_00245B00(void), func_002E92D0(s32), func_0023E0E0(s32),
    func_0023EC10(s32 *, s32), func_0023EA10(s32), func_008B34C0(void), Pes6Keyboard_Release(void),
    func_002E8CB0(s32, s32), Pes6Keyboard_Acquire(void), func_008B36F0(void), func_008BA130(void);
extern s32 func_00245BE0(void), func_002459D0(void), func_00245520(void), func_002E8C60(void),
    Pes6File_AllChannelsIdle(void), func_002E9310(void);

s32 func_00245DA0(void) {
    MatchPanel *panel = Pes6Scene_Menu_State;
    s32 slot;
    s32 action;
    switch (D_003E9AC4) {
    case 0:
        func_00245C80();
        func_00245B00();
        D_003E9AC4++;
        break;
    case 1:
        if (func_00245BE0() == 1)
            D_003E9AC4++;
        break;
    case 2:
        action = func_002459D0();
        func_00245B00();
        if (action == 1)
            D_003E9AC4++;
        else if (action == 11)
            D_003E9AC4 = 4;
        break;
    case 3:
        if (func_00245520() == 1) {
            D_003E9AC4 = 0;
            return 1;
        }
        break;
    case 4:
        func_002E92D0(1);
        func_0023E0E0(30);
        func_0023EC10(&panel->mask, 8);
        func_00245B00();
        D_003E9AC4++;
        break;
    case 5:
        for (slot = 0; slot < MATCH_OPTION_SLOTS; slot++)
            func_001C4730(&D_0053C3C0[slot].preset, func_00245190(slot), sizeof(MatchOptionPreset));
        func_0023EA10(2);
        func_008B34C0();
        Pes6Keyboard_Release();
        D_003E9AC4++;
        break;
    case 6:
        func_002E8CB0(62, D_003E9AE4);
        D_003E9AC4++;
        break;
    case 7:
        if (func_002E8C60() == 1)
            D_003E9AC4++;
        break;
    case 8:
        for (slot = 0; slot < MATCH_OPTION_SLOTS; slot++) {
            if ((u32)(D_00591C09[0] - 1) < 2)
                func_001C4730(func_00245190(slot), &D_0053C3C0[slot].preset,
                              sizeof(MatchOptionPreset));
            else
                func_001C4730(func_00221280(slot), &D_0053C3C0[slot], sizeof(MatchOptionSlot));
        }
        func_008B9C60();
        Pes6Keyboard_Acquire();
        D_003E9AC4++;
        break;
    case 9:
        if (Pes6File_AllChannelsIdle() == 1) {
            func_008B36F0();
            func_008BA130();
            if (func_002E9310() == 5)
                func_008B9C60();
            func_0023E0E0(D_0053C9A3[0] + 6);
            func_0023EC10(&panel->mask, 2);
            func_0023EC10(&panel->mask, 4);
            func_0023EC10(&panel->mask, 8);
            D_003E9AC4 = 2;
        }
        break;
    }
    return 0;
}
