/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_pad_setup.h"

extern s32 D_003E9B30;
extern s32 func_002E8C60(void);
extern s32 func_002E9310(void);
extern void func_002E92D0(s32);
extern void func_0023E0E0(s32);
extern void Pes6Keyboard_Release(void);
extern void Pes6Keyboard_Acquire(void);
extern void func_0024BBB0(void);

s32 func_0024D980(void) {
    s32 pad = func_0024E650();
    switch (D_003E9B30) {
    case 0:
        func_002E8CB0(0x44, pad);
        func_002E92D0(1);
        func_0023E0E0(30);
        Pes6Keyboard_Release();
        D_003E9B30++;
        break;
    case 1:
        if (func_002E8C60() == 1) {
            D_003E9B30 = 0;
            Pes6Keyboard_Acquire();
            func_0024BBB0();
            if (func_002E9310() == 1)
                return 1;
            func_0024DA90();
            D_0053CB40[pad] = 6;
            Pes6PadAssign[pad].state = 6;
            func_0023EC10(&D_003E9B10, PAD_REDRAW_CURSORS);
            return 2;
        }
        break;
    }
    return 0;
}
