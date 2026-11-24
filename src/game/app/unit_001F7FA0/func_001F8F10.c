/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_00591DE0[], D_00591DD5[], D_00592373[];
extern s32 D_00591DDC[], D_005924A0[], D_005924A4[], D_005924A8[];
typedef struct {
    u8 reserved[10];
    u8 option0 : 1, selection : 1, remaining : 6;
} MatchOptions;
extern MatchOptions *Pes6OptionData_GetBlock304(void);
extern s32 (*D_005924AC[])(void);
extern s32 Pes6Match_FormationMenuStep(void);
extern void func_001210B0(s32);
extern void func_0027AA00(s32), func_009A6B90(s32), func_002726D0(void), Pes6HeapZone_Close(s32),
    func_002CBAF0(s32), func_00BC5CF0(void), func_001540B0(s32, s32), func_00BA1820(s32),
    func_00288570(void), func_009A0B10(void), func_0020A680(s32), func_00B2A4E0(void),
    func_00B2A4C0(void (*)(s32), s32, s32), func_0023AE40(void), func_0027A7B0(s32),
    func_002BDA20(s32), func_009AB650(void), Pes6MatchFlow_SetState(s32, s32), func_009B4610(s32);
extern s32 func_0013E280(void), func_002DCA30(void), func_0084FBE0(void);

s32 func_001F8F10(void) {
    func_0027AA00(0);
    D_00591DDC[0] = func_0013E280();
    D_00591DE0[0] = 1;
    func_009A6B90(1);
    func_002726D0();
    Pes6HeapZone_Close(12);
    func_002CBAF0(12);
    func_00BC5CF0();
    func_001540B0(12, 0);
    func_00BA1820(0x10261);
    func_00288570();
    func_009A0B10();
    func_0020A680(1);
    func_00B2A4E0();
    func_00B2A4C0(func_001210B0, 0, 1);
    func_0023AE40();
    func_0027A7B0(1);
    if (func_002DCA30() != 0) {
        if (func_0084FBE0() == 1)
            func_002BDA20(-17);
        else
            func_002BDA20(-1);
    } else
        func_002BDA20(-1);
    func_009AB650();
    D_00591DD5[0] = 0;
    D_00592373[0] = 0xcd;
    Pes6MatchFlow_SetState(0, 0);
    D_005924A0[0] = 0;
    D_005924A4[0] = 0;
    D_005924A8[0] = 0;
    D_005924AC[0] = Pes6Match_FormationMenuStep;
    func_009B4610(Pes6OptionData_GetBlock304()->selection);
    return 1;
}
