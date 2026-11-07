/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_0011B9C0(u32 arg0) {
    u32 lim = 0x7FF;
    if (arg0 > 0x10FFFFU) {
        return 0;
    }
    return lim < (u32) (arg0 + 0xFFFF2800);
}
