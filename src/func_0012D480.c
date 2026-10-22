/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_003FB420[];

u64 func_0012D480(s32 arg0) {
    u8 *p;
    u64 r;

    p = *(u8 **)(D_003FB420 + (arg0 << 2));
    r = 0;
    if (p != 0) {
        r = *(u64 *)(p + 0x10);
    }
    return r;
}
