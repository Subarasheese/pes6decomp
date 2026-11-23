/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 D_003E9A4C, D_003E9A50, D_003E9A60;
extern s32 D_008E7878[], D_008E7868[];
extern void func_0084A620(s32), func_008B36F0(void), func_0081D240(s32), func_008B34C0(void),
    func_001B8DC0(void), func_008804D0(void), func_002DED00(s32);
extern s32 func_00825610(void), Pes6File_AllChannelsIdle(void), Pes6StripSelect_Update(void),
    func_0021DF90(s32), func_0021E000(s32);
extern void func_001F0210(s32), func_001E7140(s32), func_001D5C40(s32), func_001DD560(s32),
    func_001DA4B0(s32);

s32 func_0023B690(void) {
    switch (D_003E9A4C) {
    case 0:
        func_0084A620(1);
        func_008B36F0();
        D_003E9A4C++;
        break;
    case 1:
        if (Pes6File_AllChannelsIdle() == 1) {
            func_00825610();
            D_008E7878[0] = D_008E7868[0] = 0;
            D_003E9A4C++;
        }
        break;
    case 2:
        if (Pes6StripSelect_Update() == 2)
            D_003E9A4C++;
        break;
    case 3:
        func_0081D240(0);
        D_003E9A4C = 0;
        func_008B34C0();
        func_001B8DC0();
        func_008B34C0();
        func_001F0210(func_0021DF90(0x13));
        func_001E7140(func_0021E000(0x154));
        func_001E7140(func_0021E000(0x157));
        func_001D5C40(0x10385);
        func_001D5C40(0x10391);
        func_001D5C40(0x1003c);
        func_001D5C40(0x103a0);
        func_001D5C40(0x1038f);
        func_001D5C40(0x10344);
        func_001DD560(1);
        func_001DA4B0(2);
        D_003E9A50 = 0;
        func_008804D0();
        func_002DED00(D_003E9A60);
        return 1;
    }
    return 0;
}
