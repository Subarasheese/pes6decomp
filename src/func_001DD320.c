/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern u8 D_0052AE18[];
u8 *func_001F4380(u8 *a);
u8 func_001DD320(u8 *arg0) {
    s32 idx;
    u8 *p;
    u8 **base;
    idx = (s32)arg0;
    p = (u8 *)func_001F4380(arg0);
    if (p != 0) {
        idx = *(s32 *)p;
    }
    base = *(u8 ***)D_0052AE18;
    p = (u8 *)base + idx * 16;
    if (p != 0) {
        return *(u8 *)(*(u32 *)p + 3);
    }
    return 0;
}
