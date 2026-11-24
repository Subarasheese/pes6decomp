/* compiler: mwcc-3.0.1b210 */

#include "pes6/competition_setup.h"
extern void func_0023EA10(s32), func_0023B040(void);
extern s32 func_001B6A30(s32), func_0023F330(void), func_0093D740(void);
extern void func_001F4B20(s32, u32, u32, s32);
extern void func_008BE400(void);

s32 func_008BE800(void) {
    SetupScene *menu = &Pes6Scene_Menu_State;
    func_0023EA10(0);
    if (Pes6SceneStack[0] == 4) {
        if (menu->result == SETUP_BACK) {
            if (!func_001B6A30(0x4fd5))
                return 0;
        } else {
            if (!func_001B6A30(func_0023F330()))
                return 0;
        }
    } else {
        if (!func_0093D740())
            return 0;
        func_001F4B20(-1, 0xEE81BE, 0xEE81BF, 0);
    }
    if (menu->result == SETUP_APPLY)
        func_008BE400();
    func_008C2350(&D_008E1CE0, 0, 3);
    func_008C0470(&D_008E1CE0);
    func_0023B040();
    return 1;
}
