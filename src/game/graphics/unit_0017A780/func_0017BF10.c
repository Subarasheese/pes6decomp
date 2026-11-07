/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_0017BF10(void *arg0, s32 arg1, s32 arg2, f32 arg3) {
    u8 *p = *(u8 **)((u8 *)arg0 + 0x20) + arg1 * 5 * 4;

    *(s32 *)(p + 0xC) = arg2;
    *(f32 *)(p + 0x10) = arg3;
}
