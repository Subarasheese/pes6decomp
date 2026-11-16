/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CBBE7C[];

void func_00B266F0(void) {
    u8 old;
    s32 z;

    z = 0 & 1;
    old = *(u8 *)D_00CBBE7C;
    *(u8 *)D_00CBBE7C = (old & ~2) | (z * 2);
    if (((old >> 1) & 1) == 1) {
        *(u8 *)D_00CBBE7C = ((*(u8 *)D_00CBBE7C) & ~4) | (z * 4);
    }
}
