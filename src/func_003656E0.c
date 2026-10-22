/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001D5A10(s32);
extern s32 D_003EA03C;

s32 func_003656E0(void) {
    s32 temp_v0;

    temp_v0 = D_003EA03C;
    if (temp_v0 != 0) {
        return temp_v0;
    }
    temp_v0 = func_001D5A10(0x1003B);
    D_003EA03C = temp_v0;
    return temp_v0;
}
