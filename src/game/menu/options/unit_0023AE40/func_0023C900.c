/* compiler: mwcc-3.0.1b210-sdata4-merged-sections */
#include "pes6/match_setup_resources.h"

extern s32 D_003E9A40;
extern s32 D_003E9A6C;
extern void Pes6Keyboard_Release(void);
extern void Pes6Keyboard_Acquire(void);
extern void func_008F9980(s32);
extern s32 func_0023C720(void);
extern s32 func_00245DA0(void);

s32 func_0023C900(void) {
    s32 fileOptions[3] = {11, 11, 11};
    s32 resourceOptions[2] = {11, 11};
    s32 onlineFileOptions[3] = {5, 5, 19};
    s32 onlineOptions[2] = {5, 19};
    s32 finished = 0;
    switch (D_003E9A40) {
    case 0:
        if (Pes6SceneStack[0] == 15) {
            if (func_008156F0() && !func_008223F0() && !func_001B6A30(1))
                break;
        } else {
            if (!func_001B6A30(1))
                break;
            Pes6Keyboard_Acquire();
        }
        D_003E9A40++;
        break;
    case 1:
        if (Pes6SceneStack[0] == 15) {
            if (!func_008223F0())
                func_008F9980(0);
        } else
            func_008F9980(0);
        Pes6Module_Load(3);
        if (Pes6SceneStack[0] == 15)
            D_003E9A6C = func_002DEC40(func_0023C720);
        D_003E9A40++;
        /* Fall through. */
    case 2:
        if (Pes6SaveData_GetUnavailableFlag() == 1 && func_008223F0() == 1) {
            func_001E7370(func_0021E000(0x150), onlineFileOptions);
            func_001F04F0(func_0021DF90(0x12), onlineOptions);
        } else {
            func_001E7370(func_0021E000(0x14f), fileOptions);
            func_001F04F0(func_0021DF90(0x12), resourceOptions);
        }
        D_003E9A40++;
        break;
    case 3:
        if (Pes6File_AllChannelsIdle() == 1) {
            func_008B34C0();
            if (Pes6SaveData_GetUnavailableFlag()) {
                if (func_008223F0() == 1)
                    func_001D5EE0(0x1039b, onlineOptions);
                else
                    func_001D5EE0(0x1039b, resourceOptions);
            } else
                func_001D5EE0(0x1038a, resourceOptions);
            if ((!Pes6SaveData_GetUnavailableFlag() || func_008223F0() != 1) &&
                !func_001D5A10(0x1003f))
                func_001D5EE0(0x1003f, resourceOptions);
            D_003E9A40++;
        }
        break;
    case 4:
        if (Pes6File_AllChannelsIdle() == 1) {
            func_008B36F0();
            D_003E9A40++;
        }
        break;
    case 5:
        if (func_00245DA0() == 1)
            D_003E9A40++;
        break;
    case 6:
        if (Pes6SaveData_GetUnavailableFlag() == 1 && func_008223F0() == 1)
            func_001E7140(func_0021E000(0x150));
        else
            func_001E7140(func_0021E000(0x14f));
        func_001F0210(func_0021DF90(0x12));
        if (Pes6SaveData_GetUnavailableFlag())
            func_008B33F0(0x1039b);
        else
            func_008B33F0(0x1038a);
        if (Pes6SceneStack[0] != 15 || func_008223F0() != 1)
            func_008B33F0(0x1003f);
        func_008B34C0();
        D_003E9A40++;
        break;
    case 7:
        if (Pes6SceneStack[0] == 15) {
            if (!func_008223F0())
                func_008F9980(1);
        } else
            func_008F9980(1);
        D_003E9A40++;
        break;
    case 8:
        if (Pes6SaveData_GetUnavailableFlag()) {
            if (!func_008223F0() && !func_001B68B0())
                break;
        } else if (!func_001B68B0())
            break;
        if (Pes6SceneStack[0] == 15)
            func_002DED00(D_003E9A6C);
        else
            Pes6Keyboard_Release();
        D_003E9A40 = 0;
        finished = 1;
        break;
    }
    return finished;
}
