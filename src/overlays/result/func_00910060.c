/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_00924260[];
void func_002DC1D0(s32);

void func_00910060(void) {
    s32 i;
    s32 *slot;

    for (i = 0, slot = D_00924260; i < 3; i++, slot++) {
        func_002DC1D0(*slot);
        *slot = 0;
    }
}
