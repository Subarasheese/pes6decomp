/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_0017F880(s32);
extern void func_00147ED0(s32);
extern void func_001AC380(s32, s32 *);
extern void func_001C48E8(void *, s32, s32);
extern s32 D_003E7480;
extern u8 D_003E98E4;
extern s32 D_00522350[];
extern u8 D_005223B0[];

void func_001B0D20(void) {
    s32 sp50[6];
    s32 i;
    s32 j;
    u8 *p;

    sp50[0] = 0xFB9;
    sp50[1] = 0xFBA;
    sp50[2] = 0xFBB;
    sp50[3] = 0xFBC;
    sp50[4] = 0xFBE;
    sp50[5] = 0xFBF;
    for (i = 0; i < 6; i++) {
        func_00147ED0(sp50[i]);
    }
    func_001AC380(6, sp50);
    for (i = 0; i < 23; i++) {
        D_00522350[i] = 0;
    }
    p = D_005223B0;
    for (i = 0; i < 4; i++) {
        if (p[0x64] == 1) {
            for (j = 0; j < p[0x67]; j++) {
                func_0017F880(*(u16 *) (p + 0x6A + j * 2));
            }
            p[0x10] = 4;
            p[0x64] = 0;
        }
        p[0x65] = 0;
        D_003E98E4 = p[0x66];
        p += 0x80;
    }
    D_003E7480 = 1;
    func_001C48E8(D_005223B0, 0, 0x200);
}
