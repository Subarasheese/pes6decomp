/* compiler: mwcc-3.0.1b210-sdata4-merged-sections */
#include "pes6/match_setup_resources.h"

extern s32 D_003E9A44;
extern s32 D_003E9A68;
extern void Pes6Keyboard_Release(void);
extern void Pes6Keyboard_Acquire(void);
extern void func_008FEE40(s32);
extern void func_0099B600(void);
extern void func_001F94B0(void);
extern void func_00B7A180(void);
extern void func_00204D90(void);
extern s32 func_0023C190(void);
extern s32 func_008C4D80(void);
extern s32 func_0024A380(s16);
extern s32 func_008FF1E0(void);

s32 func_0023C230(s16 controller) {
    s32 fileOptions[3] = {11, 11, 11};
    s32 resourceOptions[2] = {11, 11};
    s32 onlineFileOptions[3] = {5, 5, 19};
    s32 onlineOptions[2] = {5, 19};
    s32 finished = 0;
    switch (D_003E9A44) {
    case 0:
        if (Pes6SceneStack[0] == 15) {
            if (func_008156F0() && !func_008223F0() && !func_001B6A30(1))
                break;
        } else {
            if (!func_001B6A30(1))
                break;
            Pes6Keyboard_Acquire();
        }
        D_003E9A44++;
        break;
    case 1:
        Pes6Module_Load(3);
        if (Pes6SceneStack[0] == 8 || Pes6SceneStack[0] == 14)
            func_008FEE40(0);
        if (Pes6SceneStack[0] == 15)
            D_003E9A68 = func_002DEC40(func_0023C190);
        D_003E9A44++;
        /* Fall through. */
    case 2:
        if (Pes6SaveData_GetUnavailableFlag()) {
            if (func_008223F0() == 1)
                func_001E7370(func_0021E000(0x15a), onlineFileOptions);
            else
                func_001E7370(func_0021E000(0x159), onlineFileOptions);
            func_001F04F0(func_0021DF90(0x15), onlineOptions);
        } else {
            func_001E7370(func_0021E000(0x159), fileOptions);
            func_001F04F0(func_0021DF90(0x15), resourceOptions);
        }
        D_003E9A44++;
        break;
    case 3:
        if (Pes6File_AllChannelsIdle() == 1) {
            func_008B34C0();
            if (Pes6SaveData_GetUnavailableFlag())
                func_001D5EE0(0x1039a, onlineOptions);
            else
                func_001D5EE0(0x1038d, resourceOptions);
            if (!func_001D5A10(0x1003f))
                func_001D5EE0(0x1003f, resourceOptions);
            D_003E9A44++;
        }
        break;
    case 4:
        if (Pes6File_AllChannelsIdle() == 1) {
            func_008B36F0();
            D_003E9A44++;
        }
        break;
    case 5:
        if (Pes6SceneStack[0] == 15) {
            if (func_008C4D80())
                D_003E9A44++;
        } else if (func_0024A380(controller))
            D_003E9A44++;
        break;
    case 6:
        if (Pes6SaveData_GetUnavailableFlag() == 1 && func_008223F0() == 1)
            func_001E7140(func_0021E000(0x15a));
        else
            func_001E7140(func_0021E000(0x159));
        func_001F0210(func_0021DF90(0x15));
        func_008B33F0(0x1038d);
        if (Pes6SaveData_GetUnavailableFlag()) {
            if (!func_008223F0())
                func_008B33F0(0x1003f);
        } else
            func_008B33F0(0x1003f);
        func_008B34C0();
        D_003E9A44++;
        break;
    case 7:
        if (Pes6SceneStack[0] == 8 || Pes6SceneStack[0] == 14) {
            func_008FEE40(1);
            func_0099B600();
            func_001F94B0();
            func_00B7A180();
            func_00204D90();
        }
        D_003E9A44++;
        break;
    case 8:
        if (Pes6SceneStack[0] == 8 && !func_008FF1E0())
            break;
        D_003E9A44++;
        /* Fall through. */
    case 9:
        if (func_001B68B0()) {
            if (Pes6SceneStack[0] == 15)
                func_002DED00(D_003E9A68);
            else
                Pes6Keyboard_Release();
            D_003E9A44 = 0;
            finished = 1;
        }
        break;
    }
    return finished;
}
