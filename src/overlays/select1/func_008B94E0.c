/* compiler: mwcc-3.0.1b151 */

#include "pes6/controller_layout.h"
#include "pes6/competition_setup.h"

void func_008B94E0(s32 preset) {
    SetupScene *menu = &Pes6Scene_Menu_State;
    s32 slot = D_003E9AE4;
    switch (preset) {
    case PAD_LAYOUT_STANDARD:
        setStandardLayout(slot);
        break;
    case PAD_LAYOUT_ALTERNATE:
        setAlternateLayout(slot);
        break;
    }
    D_0053C940.options[slot][3] = D_0053C940.options[slot][4] + 2 * D_0053C940.options[slot][7];
    D_003E9AC0 = 1;
    func_008B9950();
    func_00245390();
    D_003E9AC0 = 0;
    func_0023EC10(&menu->flags, 8);
    func_0023EC10(&menu->flags, 2);
}
