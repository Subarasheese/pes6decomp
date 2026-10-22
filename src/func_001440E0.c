/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *func_001440E0(u8 *arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    *(u32 *)arg0 = arg1 | 0x30000000;
    *(s32 *)(arg0 + 4) = arg2;
    *(s32 *)(arg0 + 8) = arg3;
    *(s32 *)(arg0 + 0xC) = arg4;
    return arg0 + 0x10;
}
