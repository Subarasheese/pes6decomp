/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 Pes6SceneStack[], D_003E9A40;
extern s8 D_003E9AC4, D_003E9AC8, D_00591DB5[];
extern s32 func_008223F0(void), func_001B6A30(s32);
extern void func_0023EA10(s32), func_008B88D0(void), func_002685F0(s32), func_0023EFB0(void),
    func_0023F3A0(void), func_001B8DC0(void), func_001B6410(f32), func_001B62F0(f32),
    func_0023C820(void), func_008B34C0(void), func_008BA6C0(void);

s32 func_00245400(void) {
    s32 ready = 0;
    if (Pes6SceneStack[0] == 15 && func_008223F0() == 1)
        ready = 1;
    else if (func_001B6A30(1) == 1)
        ready = 1;
    if (ready == 1) {
        D_003E9AC4 = 0;
        D_003E9AC8 = 0;
        D_003E9A40 = 0;
        func_0023EA10(0);
        func_008B88D0();
        func_002685F0(0);
        func_0023EFB0();
        if (D_00591DB5[0] == 1)
            func_0023F3A0();
        if (Pes6SceneStack[0] != 15 || func_008223F0() != 1)
            func_001B8DC0();
        func_001B6410(0.0f);
        func_001B62F0(0.0f);
        func_0023C820();
        func_008B34C0();
        func_008BA6C0();
        return 1;
    }
    return 0;
}
