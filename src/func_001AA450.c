/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_003E98CC;
s32 func_00154060(s32, s32);

void func_001AA450(void) {
    if (D_003E98CC != 0) {
        return;
    }
    D_003E98CC = func_00154060(23, 0x4440);
}
