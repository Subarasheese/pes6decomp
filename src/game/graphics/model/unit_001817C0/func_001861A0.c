/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u32 D_0051FFD0[];
extern u32 D_0051FFD8[];
void func_001902D0(s32, s32);

void func_001861A0(void) {
    D_0051FFD0[0] |= 0x96;
    D_0051FFD8[0] |= 0x96;
    func_001902D0(1, 1);
}
