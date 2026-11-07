/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *func_001493F0(s32 arg0, s32 arg1);

u64 func_00147CE0(s32 arg0) {
    u8 *p;

    p = (u8 *)func_001493F0(0, arg0);
    return p ? *(u64 *)(p + 0x60) : 0;
}
