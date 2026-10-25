/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_003E989C;
s32 func_00154070(s32);

void func_001A6AD0(void) {
    if (D_003E989C != 0) {
        return;
    }
    D_003E989C = func_00154070(0x9F800);
}
