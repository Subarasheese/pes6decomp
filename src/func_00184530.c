/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *D_0051FFC0[];

void func_00184530(s32 mode) {
    u8 *panel = D_0051FFC0[0];

    if (panel == NULL) {
        return;
    }
    if (mode == 1) {
        panel[0x2B] = 0x10;
    } else {
        panel[0x2B] = 0x2A;
    }
}
