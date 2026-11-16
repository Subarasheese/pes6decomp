/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00C91680(s32, s32, u16, void *, u16, void *, u16, void *);
extern u16 D_00591DEE[];
extern char D_00CCD074[];

void func_00C86E10(s32 arg0) {
    u16 a2;
    u16 a4;
    u16 a6;
    void *hi = (void *)((u32)D_00591DEE & 0xFFFF0000);

    D_00591DEE[0] |= 2;
    D_00591DEE[0] ^= 2;
    D_00591DEE[0] |= 2;
    a6 = D_00591DEE[0] | 0x80;
    D_00591DEE[0] = a6;
    a4 = D_00591DEE[0] ^ 0x80;
    D_00591DEE[0] = a4;
    a2 = D_00591DEE[0] | ((arg0 != 0) << 7);
    D_00591DEE[0] = a2;
    if (*(u8 *)D_00CCD074 & 1) {
        func_00C91680(1, arg0, a2, hi, a4, hi, a6, hi);
    }
}
