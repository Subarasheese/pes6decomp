/* compiler: mwcc-3.0.1b210 */
#include "pes6/network_menu_items.h"

extern s32 D_00B006A0[], D_00B00720[];
extern s32 D_00B02BB0[];

void func_00AEE880(void) {
    applyNetworkMenuItems(D_00B006A0, D_00B00720);
    D_00B02BB0[0] = 1;
}
