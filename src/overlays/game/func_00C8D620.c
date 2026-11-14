/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern int func_002DCA50(void);
extern int func_002DCA30(void);
extern void func_0081D100(s32, s32);
extern s16 *func_008472D0();
extern s32 func_0084A750();
extern void func_008523E0(s32, s32);
extern s32 func_008586B0(s16);
extern s8 func_00858B60(void *, s32);
extern s32 func_00858FA0(s32);
extern s32 func_00858FD0(void *, s16);
extern s32 func_0085E4C0(s16);
extern s32 func_0085EC00();
extern s32 func_00C8D7B0(void *);
extern u8 D_008B21C0[];
extern u8 D_00CCD570[];

s32 func_00C8D620(void) {
    s32 i;
    s32 j;
    u8 *q;
    s32 r;
    u8 *p;
    s16 a0;
    s32 t;
    s32 v;

    i = 0;
    r = 1;
    p = D_00CCD570;
    do {
        r &= func_00C8D7B0(p);
        i += 1;
        p += 0x18C;
    } while (i < 2);
    if (func_002DCA30() != 0) {
        j = 1;
        q = D_008B21C0;
        if (func_00858B60(D_008B21C0, 1) + 1 > 1) {
            do {
                a0 = *(s16 *)q;
                t = a0 - 1;
                if (func_0085E4C0(a0) != 3) {
                    func_0081D100(t, 0);
                } else {
                    func_0081D100(t, 1);
                }
                j += 1;
                q += 0x1C;
            } while (j < func_00858B60(D_008B21C0, 1) + 1);
        }
        if (func_00858FA0(func_00858FD0(D_008B21C0, *func_008472D0())) != 1) {
            r = func_0085EC00();
        } else {
            r = func_008586B0(*func_008472D0());
        }
        r |= func_0084A750();
        if (r != 0 && func_002DCA50() != 0) {
            func_008523E0(-3, 0x101);
        }
    }
    return r;
}
