/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_00537AF8[];
void func_0020C650(s32);

void func_0020D120(void) {
    s32 i;
    s32 *slot;

    for (i = 0, slot = D_00537AF8; i < 3; i++, slot++) {
        func_0020C650(*slot);
        *slot = 0;
    }
}
