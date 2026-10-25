/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_0059228C[];

void func_002CA6B0(u8 i, s32 on) {
    if (on != 0) {
        D_0059228C[i] = -1;
    } else {
        D_0059228C[i] = 0;
    }
}
