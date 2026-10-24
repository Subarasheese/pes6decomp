/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u32 D_0051FFC8[];
extern u32 D_0051FFD0[];
void func_0018D3F0(void);

void func_00185B60(void) {
    if (D_0051FFC8[0] & D_0051FFD0[0] & 0x40) {
        func_0018D3F0();
    }
}
