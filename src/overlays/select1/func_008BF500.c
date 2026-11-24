/* compiler: mwcc-3.0.1b210 */

#include "pes6/competition_setup.h"
extern void func_0023EA10(s32), func_0023B040(void);
extern s32 func_001B6A30(s32), func_0023F330(void), func_0093D740(void);
extern s32 func_001BE550(s32, s32);
extern s32 func_008BF250(void);

s32 func_008BF500(void) {
    SetupScene *menu = &Pes6Scene_Menu_State;
    func_0023EA10(0);
    if (Pes6SceneStack[0] == 4) {
        if (menu->result == SETUP_APPLY) {
            if (!func_001BE550(0, func_0023F330()))
                return 0;
        } else {
            if (!func_001B6A30(func_0023F330()))
                return 0;
        }
    } else {
        if (!func_0093D740())
            return 0;
    }
    func_008C0470(&D_008E49B0);
    if (menu->result == SETUP_APPLY)
        func_008BF250();
    func_0023B040();
    return 1;
}
