/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 func_00333600(s32);
extern void func_0030F2B0(s32 *);
extern s32 func_003336F0(s32);
extern s32 func_003197C0(void *, s32);
extern s32 func_00333710(s32, s32);
extern s32 func_00313AF0(s32, s32);
extern void func_00313B30(s32, s32, s32);

s32 func_0033EA60(s32 arg0, void *arg1, s32 arg2) {
    s32 spCC;
    s32 *spA0;
    s32 spB0;
    s32 s3, s2, s1, s0, s6, s7, fp, s1b, a2, v0;
    u8 *s4;
    s3 = func_00333600(0x10);
    s2 = func_00333600(0x11);
    s1 = *(s32 *)((u8 *)arg1 + 0x48);
    spA0 = *(s32 **)((u8 *)arg1 + 0x44);
    s4 = *(u8 **)((u8 *)arg1 + 0x40);
    func_0030F2B0(&spCC);
    s0 = func_003336F0(s1);
    s6 = func_003197C0(s4, s4[5]);
    s7 = arg2 & 0xFF;
    fp = func_00333710(s1, s7) == 0xD;
    s1b = spCC == 1;
    spB0 = s7 == s4[5];
    s7 = s7 == (s4[5] ^ 1);
    func_00313B30(arg0, 0xCB, s3 | s2);
    func_00313B30(arg0, 0xCD, s1b);
    a2 = s6 >= 0x46;
    if (a2 != 0) a2 = s3 != 0;
    if (a2 == 0) {
        v0 = s6 >= 0x61;
        if (v0 != 0) v0 = s2 != 0;
        a2 = (fp & v0) != 0;
    }
    func_00313B30(arg0, 0xCE, a2);
    func_00313B30(arg0, 0xCF, s4[5] != 0xFF);
    func_00313B30(arg0, 0xD0, func_00313AF0(arg0, 0xCF));
    func_00313B30(arg0, 0xD1, spB0);
    func_00313B30(arg0, 0xD2, s7);
    func_00313B30(arg0, 0xD3, s0 & s2);
    func_00313B30(arg0, 0xD4, s3);
    func_00313B30(arg0, 0xD5, s2);
    func_00313B30(arg0, 0xD6, (spA0[1] == 3) & (fp == 0));
    func_00313B30(arg0, 0xDA, s1b);
    func_00313B30(arg0, 0xDB, func_00313AF0(arg0, 0xCE));
    func_00313B30(arg0, 0xDC, func_00313AF0(arg0, 0xD1));
    func_00313B30(arg0, 0xDD, func_00313AF0(arg0, 0xD2));
    func_00313B30(arg0, 0xDE, func_00313AF0(arg0, 0xD3));
    func_00313B30(arg0, 0xDF, s0);
    func_00313B30(arg0, 0xE1, func_00313AF0(arg0, 0xCE) == 0);
    func_00313B30(arg0, 0xE2, s1b);
    func_00313B30(arg0, 0xE3, s3);
    func_00313B30(arg0, 0xE4, s2);
    func_00313B30(arg0, 0xE6, s1b == 0);
    func_00313B30(arg0, 0x117, s3);
    func_00313B30(arg0, 0x118, (s0 == 0) & fp);
    func_00313B30(arg0, 0x119, spB0 & ((s6 >= 0x46) & s3));
    func_00313B30(arg0, 0x11D, s7);
    func_00313B30(arg0, 0x121, s3);
    return 1;
}
