/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 D_003729DC;

s32 func_00112D50(s32 x) {
    if ((u32)(x - 0x4123) > 0xC348 && x != 0) {
        return 0;
    }
    D_003729DC = x;
    return 1;
}
