/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_003395B0(s32);
s32 func_00340C80(f32);
s32 func_003336F0(void *);
s32 func_00338930(void *);

s32 func_00359E00(void *arg0) {
    s32 s0;
    s32 v;
    void *s1;
    u8 *p;

    p = (u8 *)arg0;
    v = *(volatile s32 *)(p + 0x40);
    s1 = *(void * volatile *)(p + 0x44);
    s0 = func_003395B0(v);
    if (s0 < func_00340C80(60.0f)) {
        return 0;
    }
    if (func_003336F0(s1) != 0) {
        *((u8 *)s1 + 0x44) = 1;
    }
    func_00338930(arg0);
    return 1;
}
