/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void *func_001C4730(void *a0, void *a1, s32 a2);
extern void *func_00BA93D0(s32 a0);
extern void *func_00BA9400(s32 a0);
extern void *func_00BA9430(s32 a0);
extern void *func_00BA9460(s32 a0);
extern char D_003AC7F0[];

void func_002CD000(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp4C;
    u8 sp50[0x30];
    s32 sp80[4];
    s32 i;
    s32 s0;

    sp4C = arg4;
    sp80[0] = arg0;
    sp80[1] = arg1;
    sp80[2] = arg2;
    sp80[3] = arg3;
    for (i = 0; i < 4; i++) {
        s0 = sp80[i];
        func_001C4730(func_00BA9460(i), D_003AC7F0 + s0 * 0x68, 0x14);
        func_001C4730(sp50, D_003AC7F0 + s0 * 0x68 + 0x14, 0x2A);
        sp50[9] += 0x94;
        func_001C4730(func_00BA9430(i), sp50, 0x2A);
        func_001C4730(func_00BA9400(i), D_003AC7F0 + s0 * 0x68 + 0x3E, 0x24);
        func_001C4730(func_00BA93D0(i), &sp4C, 4);
    }
}
