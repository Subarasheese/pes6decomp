/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_0032EA30(void);
extern char D_005EFFA0[];
extern char D_005F0968[];

s32 func_0032E8D0(u32 arg0) {
    s32 cnt;
    u32 *p;
    u32 x;

    cnt = (*(s32 *)D_005F0968) - 1;
    (*(s32 *)D_005F0968) = cnt;
    if (cnt == 0) {
        func_0032EA30();
    }
    p = *(u32 **)(D_005EFFA0 + 0x9CC);
    *(u32 **)(D_005EFFA0 + 0x9CC) = p + 1;
    x = *p;
    x = x ^ (x >> 0xB);
    x = x ^ ((x << 7) & 0x9D2C5680);
    x = x ^ ((x << 0xF) & 0xEFC60000);
    x = x ^ (x >> 0x12);
    return (x % 100U) < arg0;
}
