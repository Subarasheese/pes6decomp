/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_0053C320[];
s32 func_008B32E0(s32);

void func_0023B040(void) {
    s32 i;
    s32 *slot;

    for (i = 0, slot = D_0053C320; i < 16; i++, slot++) {
        *slot = func_008B32E0(*slot);
    }
}
