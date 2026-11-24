/* compiler: mwcc-3.0.1b210 */

#include "pes6/competition_setup.h"
extern void func_008BDC90(void);

s32 func_008BE900(void) {
    SetupScene *menu = &Pes6Scene_Menu_State;
    switch (func_008BFB90(&D_008E1CE0)) {
    case SETUP_LEFT:
        func_008BDC90();
        func_0023EC10(&menu->flags, 2);
        break;
    case SETUP_RIGHT:
        func_008BDC90();
        func_0023EC10(&menu->flags, 2);
        break;
    case SETUP_UP:
        func_0023EC10(&menu->flags, 4);
        break;
    case SETUP_DOWN:
        func_0023EC10(&menu->flags, 4);
        break;
    case SETUP_APPLY_TO_TOP:
    case SETUP_BACK_TO_TOP:
        func_0023EC10(&menu->flags, 4);
        break;
    case SETUP_APPLY:
        return SETUP_APPLY;
    case SETUP_BACK:
        return SETUP_BACK;
    case 0:
    case 7:
    case 8:
    default:
        break;
    }
    return 0;
}
