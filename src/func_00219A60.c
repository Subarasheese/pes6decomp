/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_002176E0(void *arg0, s32 arg1, s32 arg2, void *arg3);

void func_00219A60(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 0x84);

    *(s32 *)(arg0 + 0x7C) = 0;
    *(s32 *)(arg0 + 0xD4) = 2;
    func_002176E0(p, 0, 2, arg0);
}
