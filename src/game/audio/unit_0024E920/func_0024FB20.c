/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_driver.h"
#include "pes6/sound_playback.h"
#include "pes6/sound_adx.h"

extern void func_002506F0(s32);
extern void func_00251BF0(s32);
extern void func_00251C00(s32);
extern void func_00251C10(s32);
extern void func_00251740(s32, s32);
extern void func_00251880(s32, s32);
extern void func_00251C20(s32);
extern void func_00251C80(s32);
extern s32 func_00253F60(s32, s32, s32, s32, s32, s32, s32);

s32 func_0024FB20(u32 command, s32 first, s32 second, s32 third) {
    switch (command) {
    case 0x82000000:
        func_00251880(0, 1);
        func_00251880(2, 1);
        func_00251880(1, 1);
        func_00251880(3, 1);
        func_00251C80(1);
        func_00251C20(1);
        break;
    case 0x82000001:
        func_00251880(0, 0);
        func_00251880(2, 0);
        func_00251880(1, 0);
        func_00251880(3, 0);
        func_00251C80(0);
        func_00251C20(0);
        break;
    case 0x82000002:
        func_00251740(0, 0);
        func_00251740(2, 0);
        func_00251740(1, 0);
        func_00251740(3, 0);
        func_00251880(0, 0);
        func_00251880(2, 0);
        func_00251880(1, 0);
        func_00251880(3, 0);
        func_00253F60(0, 13, 0, 0, 0, 0, 0);
        func_00251C80(0);
        func_00251C20(0);
        break;
    case 0x82000003:
        func_0024EEF0(1);
        break;
    case 0x82000004:
        func_0024EEF0(0);
        break;
    case 0x82000005:
        func_00251740(0, 0);
        func_00251740(2, 0);
        func_00251740(1, 0);
        func_00251740(3, 0);
        func_00253F60(0, 13, 0, 0, 0, 0, 0);
        command = 0x82000117;
        break;
    case 0x2200000C:
        func_00251C10(first);
        if (func_00250E70(1, SOUND_FIELD_KIND) == 0)
            func_002506F0(1);
        if (func_00250E70(3, SOUND_FIELD_KIND) == 0)
            func_002506F0(3);
        return SoundDriver_Command(0x82000006, first, 0, 0);
    case 0x2200000D:
        func_00251C00(first);
        if (func_00250E70(1, SOUND_FIELD_KIND) == 1)
            func_002506F0(1);
        if (func_00250E70(3, SOUND_FIELD_KIND) == 1)
            func_002506F0(3);
        return SoundDriver_Command(0x82000007, first, 0, 0);
    case 0x8200000E:
        func_00251BF0(first);
        if (func_00250E70(0, SOUND_FIELD_KIND) == 2)
            func_002506F0(0);
        if (func_00250E70(2, SOUND_FIELD_KIND) == 2)
            func_002506F0(2);
        return 0;
    case 0x22000101:
        SoundDriver_Command(0x22000039, 0, 50, 0);
        SoundDriver_Command(0x22000039, 1, 50, 0);
        return 0;
    case 0x22000029:
        return SoundDriver_Command(0x22000029, 15, 0, 0);
    }
    return SoundDriver_Command(command, first, second, third);
}
